/*
 * (C) Copyright 2010
 * jung hyun kim, Nexell Co, <jhkim@nexell.co.kr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef __DPC_H__
#define __DPC_H__

#include "fourcc.h"

/*------------------------------------------------------------------------------
 * Macro: IoCTL
 */
#include "ioc_magic.h"

#define IOC_D_MAGIC		'D'		/* Display 	*/
#define IOC_V_MAGIC		'V'		/* Video 	*/
#define IOC_R_MAGIC		'R'		/* RGB 		*/
#define IOC_E_MAGIC		'E'		/* Etc		*/

enum {
	IOCTL_DPC_GET_MODE_INFO 		= _IO(IOC_D_MAGIC,  0),
};

enum {
	IOCTL_DPC_VID_GET_AUTHOR 		= _IO(IOC_V_MAGIC,  0),
	IOCTL_DPC_VID_FREE_AUTHOR 		= _IO(IOC_V_MAGIC,  1),
	IOCTL_DPC_VID_RESET_AUTHOR 		= _IO(IOC_V_MAGIC,  2),
	IOCTL_DPC_VID_SET_FORMAT 		= _IO(IOC_V_MAGIC,  3),
	IOCTL_DPC_VID_GET_FORMAT 		= _IO(IOC_V_MAGIC,  4),
	IOCTL_DPC_VID_SET_ADDRESS 		= _IO(IOC_V_MAGIC,  5),
	IOCTL_DPC_VID_SET_POSITION 		= _IO(IOC_V_MAGIC,  6),
	IOCTL_DPC_VID_SET_ENABLE 		= _IO(IOC_V_MAGIC,  7),
	IOCTL_DPC_VID_SET_DISABLE 		= _IO(IOC_V_MAGIC,  8),
	IOCTL_DPC_VID_SET_PRORERTY 		= _IO(IOC_V_MAGIC,  9),
	IOCTL_DPC_VID_GET_PRORERTY 		= _IO(IOC_V_MAGIC, 10),
	IOCTL_DPC_VID_SET_PRIORITY 		= _IO(IOC_V_MAGIC, 11),
	IOCTL_DPC_VID_GET_PRIORITY 		= _IO(IOC_V_MAGIC, 12),
	IOCTL_DPC_VID_SET_COLORKEY 		= _IO(IOC_V_MAGIC, 13),
	IOCTL_DPC_VID_GET_COLORKEY 		= _IO(IOC_V_MAGIC, 14),
	IOCTL_DPC_VID_SET_ALPHABLEND 	= _IO(IOC_V_MAGIC, 15),
	IOCTL_DPC_VID_GET_ALPHABLEND 	= _IO(IOC_V_MAGIC, 16),
	IOCTL_DPC_VID_SET_BRIGHTNESS 	= _IO(IOC_V_MAGIC, 17),
	IOCTL_DPC_VID_GET_BRIGHTNESS 	= _IO(IOC_V_MAGIC, 18),
	IOCTL_DPC_VID_SET_HUE 			= _IO(IOC_V_MAGIC, 19),
	IOCTL_DPC_VID_GET_HUE 			= _IO(IOC_V_MAGIC, 20),
	IOCTL_DPC_VID_SET_CONTRAST 		= _IO(IOC_V_MAGIC, 21),
	IOCTL_DPC_VID_GET_CONTRAST 		= _IO(IOC_V_MAGIC, 22),
	IOCTL_DPC_VID_SET_SATURATION 	= _IO(IOC_V_MAGIC, 23),
	IOCTL_DPC_VID_GET_SATURATION 	= _IO(IOC_V_MAGIC, 24),
	IOCTL_DPC_VID_SET_GAMMA 		= _IO(IOC_V_MAGIC, 25),
	IOCTL_DPC_VID_GET_GAMMA 		= _IO(IOC_V_MAGIC, 26),
	IOCTL_DPC_VID_SET_VFILTER 		= _IO(IOC_V_MAGIC, 27),
	IOCTL_DPC_VID_GET_VFILTER 		= _IO(IOC_V_MAGIC, 28),
	IOCTL_DPC_VID_SET_HFILTER 		= _IO(IOC_V_MAGIC, 29),
	IOCTL_DPC_VID_GET_HFILTER 		= _IO(IOC_V_MAGIC, 30),
};

enum {
	IOCTL_DPC_RGB_SET_FORMAT 		= _IO(IOC_R_MAGIC,  0),
	IOCTL_DPC_RGB_GET_FORMAT 		= _IO(IOC_R_MAGIC,  1),
	IOCTL_DPC_RGB_SET_POSITION 		= _IO(IOC_R_MAGIC,  2),
	IOCTL_DPC_RGB_SET_ADDRESS 		= _IO(IOC_R_MAGIC,  3),
	IOCTL_DPC_RGB_SET_ENABLE 		= _IO(IOC_R_MAGIC,  4),
	IOCTL_DPC_RGB_SET_DISABLE 		= _IO(IOC_R_MAGIC,  5),
	IOCTL_DPC_RGB_SET_ALPHABLEND 	= _IO(IOC_R_MAGIC,  6),
	IOCTL_DPC_RGB_GET_ALPHABLEND 	= _IO(IOC_R_MAGIC,  7),
	IOCTL_DPC_RGB_SET_TRANSCOLOR 	= _IO(IOC_R_MAGIC,  8),
	IOCTL_DPC_RGB_GET_TRANSCOLOR 	= _IO(IOC_R_MAGIC,  9),
	IOCTL_DPC_RGB_SET_INVERTCOLOR 	= _IO(IOC_R_MAGIC, 10),
	IOCTL_DPC_RGB_GET_INVERTCOLOR 	= _IO(IOC_R_MAGIC, 11),
	IOCTL_DPC_RGB_SET_BACKCOLOR 	= _IO(IOC_R_MAGIC, 12),
	IOCTL_DPC_RGB_GET_BACKCOLOR 	= _IO(IOC_R_MAGIC, 13),
	IOCTL_DPC_RGB_SET_INVALIDZONE 	= _IO(IOC_R_MAGIC, 14),
	IOCTL_DPC_RGB_SET_ROTATE	 	= _IO(IOC_R_MAGIC, 15),
};

enum {
	IOCTL_DPC_LAYER_SET_TYPE 		= _IO(IOC_E_MAGIC, 0),
	IOCTL_DPC_LAYER_GET_TYPE 		= _IO(IOC_E_MAGIC, 1),
	IOCTL_DPC_LAYER_SET_ENABLE 		= _IO(IOC_E_MAGIC, 2),
	IOCTL_DPC_LAYER_SET_DISABLE 	= _IO(IOC_E_MAGIC, 3),
	IOCTL_DPC_DEVICE_WAIT_VSYNC 	= _IO(IOC_E_MAGIC, 4),
	IOCTL_DPC_DEVICE_SET_OUT_FORMAT	= _IO(IOC_E_MAGIC, 5),
	IOCTL_DPC_DEVICE_GET_OUT_FORMAT	= _IO(IOC_E_MAGIC, 6),
	IOCTL_DPC_DEVICE_OUT_ENABLE		= _IO(IOC_E_MAGIC, 7),
	IOCTL_DPC_DEVICE_OUT_DISABLE	= _IO(IOC_E_MAGIC, 8),
};

#endif	/* __DPC_H__ */