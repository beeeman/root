/****************************************************************
* gl.h
*****************************************************************/
#ifndef G__GL_H
#define G__GL_H

/* NOTE: gl.dll is not generated by default. 
 * Goto $CINTSYSDIR/lib/gl directory and do 'sh setup' if you use UNIX. */
#ifndef G__GLDLL_H
#pragma include_noerr "GL/gl.dll"
#endif

#ifndef __MAKECINT__
#pragma ifndef G__GLDLL_H /* G__GLDLL_H is defined in pthread.dll */
#pragma message Note: GL/gl.dll is not found. Do 'sh setup' in $CINTSYSDIR/lib/gl directory if you use UNIX.
#pragma endif
#endif

#endif
