#include "shell.h"

char *_getenv(const char *name) {
    extern char **environ;

    int i = 0;
    while (environ[i] != NULL) {
        if (strncmp(environ[i], name, strlen(name)) == 0) {
            return environ[i] + strlen(name) + 1;
        }
        i++;
    }

    return NULL;
}
