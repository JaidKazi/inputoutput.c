#include <stdio.h>
#include <string.h>

int countWords(char *str) {
    int count = 0;
    int isWord = 0; 
    for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            isWord = 0; 
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            if (!isWord) {
                count++;
                isWord = 1; 
            }
        }
    }

    return count;
}

int main() {
    char input_string[1000];
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    input_string[strcspn(input_string, "\n")] = '\0';
    int word_count = countWords(input_string);
    printf("Total number of words: %d\n", word_count);

    return 0;
}
