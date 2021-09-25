--- 模块功能：video_play_demo
-- @module video_play
-- @author Dozingfiretruck
-- @release 2021.09.06

-- LuaTools需要PROJECT和VERSION这两个信息
PROJECT = "video_play_demo"
VERSION = "1.0.1"

-- sys库是标配
_G.sys = require("sys")

--添加硬狗防止程序卡死
wdt.init(15000)--初始化watchdog设置为15s
sys.timerLoopStart(wdt.feed, 10000)--10s喂一次狗

sys.taskInit(function()
    wdt.init(15000)
    sys.timerLoopStart(wdt.feed, 10000)

    sdio.init(0)
    sdio.sd_mount(0,"/sd",0)
    spi.setup(0, 20, 0, 0, 8, 40 * 1000 * 1000, spi.MSB, 1, 1)
    log.info("lcd.init",
    lcd.init("st7789",{port = 0,pin_dc = 4, pin_pwr = 7,pin_rst = 1,direction = 1,w = 240,h = 240,xoffset = 0,yoffset = 0}))
    
    -- 使用ffmpeg.exe将视频转成字节流文件video2.rgb放入TF卡
    local file_size = fs.fsize("/sd/video2.rgb")
    print("/sd/video2.rgb file_size",file_size)
    local file = io.open("/sd/video2.rgb", "rb")
    if file then
        local file_cnt = 0
        local buff = zbuff.create(25600)--分辨率160*80 160*80*2=25600
        repeat
            if file:fill(buff) then
                file_cnt = file_cnt + 25600
                lcd.draw(40, 80, 199, 159, buff)
                sys.wait(20)
            end
        until( file_size - file_cnt < 25600 )
        local temp_data = file:fill(buff,0,file_size - file_cnt)
        lcd.draw(40, 80, 199, 159, buff)
        sys.wait(30)
        file:close()
    end
    while true do
        sys.wait(1000)
    end
end)

-- 主循环, 必须加
sys.run()