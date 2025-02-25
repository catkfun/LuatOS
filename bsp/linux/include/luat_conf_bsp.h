
#ifndef LUAT_CONF_BSP
#define LUAT_CONF_BSP


#define LUA_USE_LINUX 1

#define LUAT_BSP_VERSION "V0001"
#define LUAT_USE_CMDLINE_ARGS 1
#define LUAT_CONF_LAUX_BUFFSIZE 1024

#define LUAT_USE_FS_VFS 1
#define LUAT_USE_VFS_INLINE_LIB 1

#define LUAT_USE_LOG_ASYNC_THREAD 0

//#define LUAT_USE_LVGL 1
//#define USE_GTK 1

#define LUAT_USE_LIBTCPIP_POSIX
#define LUAT_USE_LIBTCPIP_MBEDTLS

#define LV_TICK_CUSTOM     1
#if LV_TICK_CUSTOM == 1
#define LV_TICK_CUSTOM_INCLUDE  "exts/lv_drivers/gtkdrv/gtkdrv.h"       /*Header for the sys time function*/
#define LV_TICK_CUSTOM_SYS_TIME_EXPR (gtkdrv_tick_get())     /*Expression evaluating to current systime in ms*/
#endif   /*LV_TICK_CUSTOM*/

#define LV_FONT_OPPOSANS_M_8
#define LV_FONT_OPPOSANS_M_10
#define LV_FONT_OPPOSANS_M_12
#define LV_FONT_OPPOSANS_M_14
#define LV_FONT_OPPOSANS_M_16
#define LV_FONT_OPPOSANS_M_18
#define LV_FONT_OPPOSANS_M_20
#define LV_FONT_OPPOSANS_M_22
#define USE_LVGL_SIMSUN_48

#define LUAT_USE_LVGL_ARC       1   //圆弧 无依赖
#define LUAT_USE_LVGL_BAR       1   //进度条 无依赖
#define LUAT_USE_LVGL_BTN       1   //按钮 依赖容器CONT
#define LUAT_USE_LVGL_BTNMATRIX 1   //按钮矩阵 无依赖
#define LUAT_USE_LVGL_CALENDAR  1   //日历 无依赖
#define LUAT_USE_LVGL_CANVAS    1   //画布 依赖图片IMG
#define LUAT_USE_LVGL_CHECKBOX  1   //复选框 依赖按钮BTN 标签LABEL
#define LUAT_USE_LVGL_CHART     1   //图表 无依赖
#define LUAT_USE_LVGL_CONT      1   //容器 无依赖
#define LUAT_USE_LVGL_CPICKER   1   //颜色选择器 无依赖
#define LUAT_USE_LVGL_DROPDOWN  1   //下拉列表 依赖页面PAGE 标签LABEL
#define LUAT_USE_LVGL_GAUGE     1   //仪表 依赖进度条BAR 仪表(弧形刻度)LINEMETER
#define LUAT_USE_LVGL_IMG       1   //图片 依赖标签LABEL
#define LUAT_USE_LVGL_IMGBTN    1   //图片按钮 依赖按钮BTN
#define LUAT_USE_LVGL_KEYBOARD  1   //键盘 依赖图片按钮IMGBTN
#define LUAT_USE_LVGL_LABEL     1   //标签 无依赖
#define LUAT_USE_LVGL_LED       1   //LED 无依赖
#define LUAT_USE_LVGL_LINE      1   //线 无依赖
#define LUAT_USE_LVGL_LIST      1   //列表 依赖页面PAGE 按钮BTN 标签LABEL
#define LUAT_USE_LVGL_LINEMETER 1   //仪表(弧形刻度) 无依赖
#define LUAT_USE_LVGL_OBJMASK   1   //对象蒙版 无依赖
#define LUAT_USE_LVGL_MSGBOX    1   //消息框 依赖图片按钮IMGBTN 标签LABEL
#define LUAT_USE_LVGL_PAGE      1   //页面 依赖容器CONT
#define LUAT_USE_LVGL_SPINNER   1   //旋转器 依赖圆弧ARC 动画ANIM
#define LUAT_USE_LVGL_ROLLER    1   //滚筒 无依赖
#define LUAT_USE_LVGL_SLIDER    1   //滑杆 依赖进度条BAR
#define LUAT_USE_LVGL_SPINBOX   1   //数字调整框 无依赖
#define LUAT_USE_LVGL_SWITCH    1   //开关 依赖滑杆SLIDER
#define LUAT_USE_LVGL_TEXTAREA  1   //文本框 依赖标签LABEL 页面PAGE
#define LUAT_USE_LVGL_TABLE     1   //表格 依赖标签LABEL
#define LUAT_USE_LVGL_TABVIEW   1   //页签 依赖页面PAGE 图片按钮IMGBTN
#define LUAT_USE_LVGL_TILEVIEW  1   //平铺视图 依赖页面PAGE
#define LUAT_USE_LVGL_WIN       1   //窗口 依赖容器CONT 按钮BTN 标签LABEL 图片IMG 页面PAGE

#endif
