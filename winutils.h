/* winutils.h */
/* Windows specific utilities */
/* This part is Copyright (C)2019 Thiekus. Original license applies */

#ifndef FSV_WINUTILS_H
#define FSV_WINUTILS_H

#include <windows.h>

char
*win_fix_path_slashes( char *path );

int
win_get_file_type_name( const char *file_path, char *desc );

#endif /* FSV_WINUTILS_H */