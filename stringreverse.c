#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);


    int length = strlen(inputString);
    if (inputString[length - 1] == '\n') {
        inputString[length - 1] = '\0';
    }

    printf("Original String: %s\n", inputString);

    int strLength = strlen(inputString);
    printf("Length of the string: %d\n", strLength);

    reverseString(inputString);
    printf("Reversed String: %s\n", inputString);

    return 0;
}
