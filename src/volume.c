/*********************************************************************************
 ** Copyright © 2011 - 2020 Petros Koutoupis
 ** All rights reserved.
 **
 ** This file is part of RapidDisk.
 **
 ** RapidDisk is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 2 of the License, or
 ** (at your option) any later version.
 **
 ** RapidDisk is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with RapidDisk.  If not, see <http://www.gnu.org/licenses/>.
 **
 ** SPDX-License-Identifier: GPL-2.0-or-later
 **
 ** @project: rapiddisk
 **
 ** @filename: volume.c
 ** @description: This file contains the general routines of identifying block
 **		  devices and their attributes.
 **
 ** @date: 1Aug20, petros@petroskoutoupis.com
 ********************************************************************************/

#include "common.h"
#include <dirent.h>
#include <malloc.h>
#include <linux/fs.h>
#include <sys/ioctl.h>

#define FILEDATA		0x40
#define BYTES_PER_SECTOR	0x200

