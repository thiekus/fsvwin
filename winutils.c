/* winutils.c */
/* Windows specific utilities */
/* This part is Copyright (C)2019 Thiekus. Original license applies */

#include <windows.h>
#include <stdlib.h>

/* Convert unix slashes into windows backslashes, used in get_node_info() */
char
*win_fix_path_slashes( char *path )
{
	int i;
	int len = strlen(path);
	for (i = 0; i < len; i++){
		if (path[i] == '/') {
			path[i] = '\\';
		}
	}
	return path;
}

/* WinAPI implementation of get_file_type_desc() function */
int
win_get_file_type_name( const char *file_path, char *desc )
{
	SHFILEINFOA sfi = {0};
	DWORD_PTR hr = SHGetFileInfoA(file_path, FILE_ATTRIBUTE_NORMAL, &sfi, sizeof(sfi),
		SHGFI_USEFILEATTRIBUTES | SHGFI_TYPENAME);
	if (SUCCEEDED(hr)){
		strcpy(desc, sfi.szTypeName);
		return 1;
	}
	return 0;
}