/**
* Copyright (c), 2015-2025
* @file gui.c
* @brief gui���ļ�
* @author jdh
* @date 2015/9/6
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui.h"
#include "stdlib.h"

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief ��ʼ��gui
*/

void gui_init(DrawPixelFunc drawPixel) {
	//	//��ʼ���ֿ�
	//	font_init();
	gui_interface_set_draw_pixel_func(drawPixel);
}

/**
* @brief ���ٿؼ�
* @param handle:�ؼ����
*/

void gui_widget_delete(void *handle)
{
	free(handle);
	handle = (void *)0;
}

