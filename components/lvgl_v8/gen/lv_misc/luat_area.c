
#include "luat_base.h"
#include "lvgl.h"
#include "luat_lvgl.h"


//  void lv_area_set(lv_area_t* area_p, lv_coord_t x1, lv_coord_t y1, lv_coord_t x2, lv_coord_t y2)
int luat_lv_area_set(lua_State *L) {
    LV_DEBUG("CALL lv_area_set");
    lv_area_t* area_p = (lv_area_t*)lua_touserdata(L, 1);
    lv_coord_t x1 = (lv_coord_t)luaL_checknumber(L, 2);
    lv_coord_t y1 = (lv_coord_t)luaL_checknumber(L, 3);
    lv_coord_t x2 = (lv_coord_t)luaL_checknumber(L, 4);
    lv_coord_t y2 = (lv_coord_t)luaL_checknumber(L, 5);
    lv_area_set(area_p ,x1 ,y1 ,x2 ,y2);
    return 0;
}

//  void lv_area_copy(lv_area_t* dest, lv_area_t* src)
int luat_lv_area_copy(lua_State *L) {
    LV_DEBUG("CALL lv_area_copy");
    lv_area_t* dest = (lv_area_t*)lua_touserdata(L, 1);
    lv_area_t* src = (lv_area_t*)lua_touserdata(L, 2);
    lv_area_copy(dest ,src);
    return 0;
}

//  lv_coord_t lv_area_get_width(lv_area_t* area_p)
int luat_lv_area_get_width(lua_State *L) {
    LV_DEBUG("CALL lv_area_get_width");
    lv_area_t* area_p = (lv_area_t*)lua_touserdata(L, 1);
    lv_coord_t ret;
    ret = lv_area_get_width(area_p);
    lua_pushinteger(L, ret);
    return 1;
}

//  lv_coord_t lv_area_get_height(lv_area_t* area_p)
int luat_lv_area_get_height(lua_State *L) {
    LV_DEBUG("CALL lv_area_get_height");
    lv_area_t* area_p = (lv_area_t*)lua_touserdata(L, 1);
    lv_coord_t ret;
    ret = lv_area_get_height(area_p);
    lua_pushinteger(L, ret);
    return 1;
}

//  void lv_area_set_width(lv_area_t* area_p, lv_coord_t w)
int luat_lv_area_set_width(lua_State *L) {
    LV_DEBUG("CALL lv_area_set_width");
    lv_area_t* area_p = (lv_area_t*)lua_touserdata(L, 1);
    lv_coord_t w = (lv_coord_t)luaL_checknumber(L, 2);
    lv_area_set_width(area_p ,w);
    return 0;
}

//  void lv_area_set_height(lv_area_t* area_p, lv_coord_t h)
int luat_lv_area_set_height(lua_State *L) {
    LV_DEBUG("CALL lv_area_set_height");
    lv_area_t* area_p = (lv_area_t*)lua_touserdata(L, 1);
    lv_coord_t h = (lv_coord_t)luaL_checknumber(L, 2);
    lv_area_set_height(area_p ,h);
    return 0;
}

//  uint32_t lv_area_get_size(lv_area_t* area_p)
int luat_lv_area_get_size(lua_State *L) {
    LV_DEBUG("CALL lv_area_get_size");
    lv_area_t* area_p = (lv_area_t*)lua_touserdata(L, 1);
    uint32_t ret;
    ret = lv_area_get_size(area_p);
    lua_pushinteger(L, ret);
    return 1;
}

//  void lv_area_increase(lv_area_t* area, lv_coord_t w_extra, lv_coord_t h_extra)
int luat_lv_area_increase(lua_State *L) {
    LV_DEBUG("CALL lv_area_increase");
    lv_area_t* area = (lv_area_t*)lua_touserdata(L, 1);
    lv_coord_t w_extra = (lv_coord_t)luaL_checknumber(L, 2);
    lv_coord_t h_extra = (lv_coord_t)luaL_checknumber(L, 3);
    lv_area_increase(area ,w_extra ,h_extra);
    return 0;
}

//  void lv_area_move(lv_area_t* area, lv_coord_t x_ofs, lv_coord_t y_ofs)
int luat_lv_area_move(lua_State *L) {
    LV_DEBUG("CALL lv_area_move");
    lv_area_t* area = (lv_area_t*)lua_touserdata(L, 1);
    lv_coord_t x_ofs = (lv_coord_t)luaL_checknumber(L, 2);
    lv_coord_t y_ofs = (lv_coord_t)luaL_checknumber(L, 3);
    lv_area_move(area ,x_ofs ,y_ofs);
    return 0;
}

//  void lv_area_align(lv_area_t* base, lv_area_t* to_align, lv_align_t align, lv_coord_t ofs_x, lv_coord_t ofs_y)
int luat_lv_area_align(lua_State *L) {
    LV_DEBUG("CALL lv_area_align");
    lv_area_t* base = (lv_area_t*)lua_touserdata(L, 1);
    lv_area_t* to_align = (lv_area_t*)lua_touserdata(L, 2);
    lv_align_t align = (lv_align_t)luaL_checkinteger(L, 3);
    lv_coord_t ofs_x = (lv_coord_t)luaL_checknumber(L, 4);
    lv_coord_t ofs_y = (lv_coord_t)luaL_checknumber(L, 5);
    lv_area_align(base ,to_align ,align ,ofs_x ,ofs_y);
    return 0;
}

