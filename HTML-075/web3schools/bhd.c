#include <stdio.h>
#include <string.h>

int main() {
    char word[10];
    int i, vowcnt = 0;
    char *ptr = NULL;
    printf("\nEnter a word: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0; // Remove the newline character

    for (i = 0; i < strlen(word); i++) {
        if ((*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'
            || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')) {
            vowcnt++;
        }
        ptr++;
    }
    printf("\nThe word is: %s\nThe number of vowels in the word is: %d", word, vowcnt);
    return 0;
}