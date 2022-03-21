/**
* Copyright (c), 2015-2025
* @file gui.c
* @brief gui主文件
* @author jdh
* @date 2015/9/6
*/

/*********************************************************************
*							头文件
**********************************************************************/

#include "gui.h"
#include "stdlib.h"

/*********************************************************************
*							函数
**********************************************************************/

/**
* @brief 初始化gui
*/

void gui_init(DrawPixelFunc drawPixel) {
	//	//初始化字库
	//	font_init();
	gui_interface_set_draw_pixel_func(drawPixel);
}

/**
* @brief 销毁控件
* @param handle:控件句柄
*/

void gui_widget_delete(void *handle)
{
	free(handle);
	handle = (void *)0;
}

