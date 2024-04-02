#include <stdio.h>
#include <string.h>
void swapStrings (char *a, char *b);
int main() {
    char str[] [50] = {"newyork", "japan", "india", "france", "australia"};
    int size = sizeof(str) / sizeof(str[0]);
    for (int i=0; i < size-1; i++) {
        for (int j=0; j < size-i-1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                swapStrings (str[j], str[j + 1]);
            }
        }
    }
    printf("after sorting: \n");
    for(int i = 0; i < size; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}
void swapStrings (char *a, char *b) {
     char temp[50];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}