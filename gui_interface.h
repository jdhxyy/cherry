/**
* Copyright (c), 2015-2025
* @file gui_interface.h
* @brief gui�ӿ�ͷ�ļ�
* @author jdh
* @date 2015/9/6
* @update 2015/9/7
*/

#ifndef _GUI_INTERFACE_H_
#define _GUI_INTERFACE_H_

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*********************************************************************
*							�궨��
**********************************************************************/

/**
* @brief ��Ļ�ߴ�
*/

#define LCD_WIDTH			128
#define LCD_HEIGHT			64

// DrawPixelFunc ��㺯��
typedef void (*DrawPixelFunc)(uint8_t x, uint8_t y, uint8_t show);

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief ����
* @param x:x����
* @param y:y����
* @param show:0:����ʾ,1:��ʾ
*/

void gui_interface_draw_pixel(uint8_t x,uint8_t y,uint8_t show);

// gui_interface_set_draw_pixel_func ���û��ص�����
void gui_interface_set_draw_pixel_func(DrawPixelFunc drawPixel) {
	gDrawPixel = drawPixel;
}

#endif


