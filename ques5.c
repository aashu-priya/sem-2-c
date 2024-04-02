#include <stdio.h>
#include <string.h>

void find() {
    char line[1000], longestWord[1000], word[1000];
    fgets(line, sizeof(line), stdin);
    
    int i = 0, j = 0;
    while (line[i] != '\0') {
        if (line[i] == ' ' || line[i] == '\n') {
            word[j] = '\0';
            if (strlen(word) > strlen(longestWord)) {
                strcpy(longestWord, word);
            }
            j = 0;
        } else {
            word[j++] = line[i];
        }
        i++;
    }

    printf("Longest word: %s\n", longestWord);
}

int main() {
    printf("Enter a line: ");
    find();
    return 0;
}