#include <stdio.h>
#include <string.h>

int main() {
    char input[80], output[80];
    printf("Enter a string: ");
    scanf("%s", input);

    int i, j;
    i = j = 0;

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u') {
            output[j] = input[i];
            j++;
        }
    }
    output[j] = '\0';
    printf("Input is %s\n", input);
    printf("Ouput is %s\n", output);
    return 0;
}
