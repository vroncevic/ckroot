/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * ckroot.h
 * Copyright (C) 2017 - 2024 Vladimir Roncevic <elektron.ronca@gmail.com>
 *
 * ckroot is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ckroot is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

#define VERSION "v0.1"

#define CKROOT_VERSION(PROGRAM_NAME) \
	fprintf(stdout, "%s version %s\n", PROGRAM_NAME, VERSION);

#define CKROOT_USAGE(PROGRAM_NAME)               \
	fprintf(                                     \
		stdout,                                  \
		"%s version %s\n"                        \
		"Usage: %s [options]\n"                  \
		"  -h  --help       Display this text\n" \
		"  -V  --version    Display version\n",  \
		PROGRAM_NAME, VERSION, PROGRAM_NAME);
