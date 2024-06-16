# @info   gen_c_pro ver.1.0
# @author Vladimir Roncevic <elektron.ronca@gmail.com>
# @brief  Process this file with automake to produce Makefile.in.

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS = \
	-std=c11 \
	-g \
	-pedantic \
	-Wall \
	-Wextra \
	-Wcast-align \
	-Wcast-qual \
	-Wdisabled-optimization \
	-Wformat=2 \
	-Winit-self \
	-Wlogical-op \
	-Wmissing-declarations \
	-Wmissing-include-dirs \
	-Wshadow \
	-Wstrict-overflow=5 \
	-Wundef \
	-Wno-overlength-strings \
	-Wno-unused

bin_PROGRAMS = ckroot

ckroot_SOURCES = \
	main.c

ckroot_LDFLAGS = 

ckroot_LDADD = 

