#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]){
    int i = 0;
    int j = 0;

    for (i = 0; i < argc; i++) {

        for (j = i + 1; j < argc; j++) {
            if (!strcmp(argv[i], argv[j])) {
                printf("The matching argument is %s, the positions are %d", argv[i], i);
                break;
            }
        }
        for (j = i + 1; j < argc; j++) {
            if (!strcmp(argv[i], argv[j])) {
                printf(", %d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
