
#ifndef LUAT_LVGL_STYLE
#define LUAT_LVGL_STYLE

#include "luat_base.h"
#include "lvgl.h"

int luat_lv_style_t(lua_State *L);
int luat_lv_style_create(lua_State *L);
int luat_lv_style_list_create(lua_State *L);
int luat_lv_style_delete(lua_State *L);
int luat_lv_style_list_delete(lua_State *L);
int luat_lv_style_set_transition_path(lua_State *L);

#define LUAT_LV_STYLE2_RLT {"style_t", luat_lv_style_t, 0},\
{"style_create", luat_lv_style_create, 0},\
{"style_delete", luat_lv_style_delete, 0},\

#endif
