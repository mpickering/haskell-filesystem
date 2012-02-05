#ifndef HSSYSTEMFILEIO_UNIX_H
#define HSSYSTEMFILEIO_UNIX_H

#include <dirent.h>

struct dirent *
hssystemfileio_alloc_dirent();

void
hssystemfileio_free_dirent(struct dirent *);

int
hssystemfileio_readdir(DIR *dir, struct dirent *dirent);

char *
hssystemfileio_dirent_name(struct dirent *dirent);

char *
hssystemfileio_getcwd(void);

int
hssystemfileio_isrealdir(const char *);

int
hssystemfileio_copy_permissions(const char *old_path, const char *new_path);

#endif
