#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argv, char* argc[]) {
    load_shell();

    return 0;
}

void load_shell() {
    while(1) {
        printf("wish> ");
        char *line = NULL;
        size_t linecap = 0;
        ssize_t linelen;
        linelen = getline(&line, &linecap, fp);
        
    }
}