
-- LuaTools需要PROJECT和VERSION这两个信息
PROJECT = "gpio2demo"
VERSION = "1.0.0"

log.info("main", PROJECT, VERSION)

-- sys库是标配
_G.sys = require("sys")

if wdt then
    --添加硬狗防止程序卡死，在支持的设备上启用这个功能
    wdt.init(15000)--初始化watchdog设置为15s
    sys.timerLoopStart(wdt.feed, 10000)--10s喂一次狗
end

local button_timer_outtime = 10 --按键定时器: 10ms
local button_shake_time = 1     --按键消抖时间: button_shake_time*button_timer_outtime
local button_long_time = 100    --按键长按时间: button_shake_time*button_timer_outtime

local button_detect = true
local button_state = false
local button_cont = 0

button = gpio.setup(1, 
function() 
    if not button_detect then return end
    button_detect = false
    button_state = true
end, 
gpio.PULLUP,gpio.FALLING)

button_timer = sys.timerLoopStart(function()
    if button_state then
        if button() == 0 then
            button_cont = button_cont + 1
            if button_cont > button_long_time then
                print("long pass")
            end
        else 
            if button_cont < button_shake_time then
            else
                if button_cont < button_long_time then
                    print("pass")
                else
                    print("long pass")
                end
            end
            button_cont = 0
            button_state = false
            button_detect = true
        end
    end
end,button_timer_outtime) 

sys.run()
-- sys.run()之后后面不要加任何语句!!!!!
