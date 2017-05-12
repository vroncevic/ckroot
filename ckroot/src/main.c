/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2017 Vladimir Roncevic <elektron.ronca@gmail.com>
 *
 * check_root is free software: you can redistribute it and/or modify it
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
 * with this program_name.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

#define VERSION "v0.1"

static const struct option long_options[] = {
	{ "help", 0, NULL, 'h' },
	{ "version", 0, NULL, 'V' },
	{ 0, 0, 0, 0 }
};

static const char *program_name;

static void usage(int exit_value) {
	fprintf(
		stdout,
		"%s version %s\n"
		"Usage: %s [options]\n"
		"  -h  --help       Display this text\n"
		"  -V  --version    Display version\n",
		program_name, VERSION, program_name
	);
	exit(exit_value);
}

int main(int argc, char *argv[]) {
	int opt, index;

	program_name = argv[0];
	if((opt = getopt_long(argc, argv, "hv", long_options, &index)) != EOF ) {
		switch(opt) {
			case 'V':
				fprintf(stdout, "%s version %s\n", program_name, VERSION);
				exit(0);
			default:
				usage(0);
				break;
		}
	}

	if(getuid() != 0) {
		return (1);
	}

	return (0);
}

