/**
* Copyright (c), 2015-2025
* @file gui_interface.c
* @brief gui�ӿ����ļ�
* @author jdh
* @date 2015/9/6
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_interface.h"

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief ����
* @param x:x����
* @param y:y����
* @param show:0:����ʾ,1:��ʾ
*/

void gui_interface_draw_pixel(uint8_t x,uint8_t y,uint8_t show)
{
	if (x >= LCD_WIDTH || y >= LCD_HEIGHT)
	{
		return;
	}
	
	inf_lcd_draw_pixel(x,y,show);
}

