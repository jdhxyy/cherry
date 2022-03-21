/**
* Copyright (c), 2015-2025
* @file gui_interface.h
* @brief gui接口头文件
* @author jdh
* @date 2015/9/6
* @update 2015/9/7
*/

#ifndef _GUI_INTERFACE_H_
#define _GUI_INTERFACE_H_

/*********************************************************************
*							头文件
**********************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*********************************************************************
*							宏定义
**********************************************************************/

/**
* @brief 屏幕尺寸
*/

#define LCD_WIDTH			128
#define LCD_HEIGHT			64

// DrawPixelFunc 绘点函数
typedef void (*DrawPixelFunc)(uint8_t x, uint8_t y, uint8_t show);

/*********************************************************************
*							函数
**********************************************************************/

/**
* @brief 画点
* @param x:x坐标
* @param y:y坐标
* @param show:0:不显示,1:显示
*/

void gui_interface_draw_pixel(uint8_t x,uint8_t y,uint8_t show);

// gui_interface_set_draw_pixel_func 设置绘点回调函数
void gui_interface_set_draw_pixel_func(DrawPixelFunc drawPixel) {
	gDrawPixel = drawPixel;
}

#endif


