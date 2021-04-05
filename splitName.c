#include <stdio.h>
#include <string.h>

int main() {
    char name[50], first[25], last[25];

    printf("what is your name? ");
    scanf("%s", name);
    first[0] = name [0];

    int i = 1;
    int j = 1;

    for (i = 1; i < strlen(name); i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            break;
        }
        else {
            first[j] = name[i];
            j++;
        }
    }
    first[j] = '\0';

    last[0] = name[i];
    int k = i + 1;
    int h = 1;

    for (k = i +1; name[k] != '\0'; k++) {
        last[h] = name[k];
        h++;
    }
    last[h] = '\0';

    printf("First name: %s\n", first);
    printf("Last name: %s\n", last);
    return 0;


}
