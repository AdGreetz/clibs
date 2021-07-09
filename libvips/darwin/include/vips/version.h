/* Macros for the header version.
 */

#ifndef VIPS_VERSION_H
#define VIPS_VERSION_H

#define VIPS_VERSION		"8.11.0"
#define VIPS_VERSION_STRING	"8.11.0-Wed Jun  9 18:20:35 UTC 2021"
#define VIPS_MAJOR_VERSION	(8)
#define VIPS_MINOR_VERSION	(11)
#define VIPS_MICRO_VERSION	(0)

/* The ABI version, as used for library versioning.
 */
#define VIPS_LIBRARY_CURRENT	(55)
#define VIPS_LIBRARY_REVISION	(0)
#define VIPS_LIBRARY_AGE	(13)

#define VIPS_CONFIG		"enable debug: no, enable deprecated library components: yes, enable modules: yes, enable docs with gtkdoc: no, gobject introspection:  yes, RAD load/save: yes, Analyze7 load/save: yes, PPM load/save: yes, GIF load:  yes, generate C++ docs: no, use fftw3 for FFT: yes, accelerate loops with orc: yes, ICC profile support with lcms: yes (lcms2), zlib: yes, text rendering with pangocairo: yes, font file support with fontconfig: yes, EXIF metadata support with libexif: yes, JPEG load/save with libjpeg: yes (pkg-config), JXL load/save with libjxl: no (dynamic module: no), JPEG2000 load/save with libopenjp2: yes, PNG load with libspng: yes, PNG load/save with libpng: yes (pkg-config libpng >= 1.2.9), 8bpp PNG quantisation: yes, TIFF load/save with libtiff: yes (pkg-config libtiff-4), image pyramid save: yes, HEIC/AVIF load/save with libheif: yes (dynamic module: yes), WebP load/save with libwebp: yes, PDF load with PDFium:  no, PDF load with poppler-glib: yes (dynamic module: yes), SVG load with librsvg-2.0: yes, EXR load with OpenEXR: yes, slide load with OpenSlide: yes (dynamic module: yes), Matlab load with matio: yes, NIfTI load/save with niftiio: no, FITS load/save with cfitsio: yes, Magick package: MagickCore (dynamic module: no), Magick API version: magick7, load with libMagickCore: yes, save with libMagickCore: yes"

/** 
 * VIPS_SONAME:
 *
 * The name of the shared object containing the vips library, for example
 * "libvips.so.42", or "libvips-42.dll".
 */

#include "soname.h"

/* Not really anything to do with versions, but this is a handy place to put
 * it.
 */
#define VIPS_EXEEXT ""
#define VIPS_ENABLE_DEPRECATED 1

#endif /*VIPS_VERSION_H*/
