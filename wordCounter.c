#include <stdio.h>
#include <stdbool.h>

// Function to count the number of words in a string
int countWords(char *text) {
    int count = 0;
    bool inWord = false;

    // Iterate through each character in the string
    while (*text != '\0') {
        if (*text == ' ' || *text == '\n' || *text == '\t') {
            // If the character is a whitespace, set inWord to false
            inWord = false;
        } else if (!inWord) {
            // If the character is not a whitespace and inWord is false,
            // it means a new word has started
            inWord = true;
            count++;
        }

        text++; // Move to the next character
    }

    return count;
}

int main() {
    char text[1000];

    printf("Enter a body of text:\n");
    fgets(text, sizeof(text), stdin);

    int wordCount = countWords(text);

    printf("Number of words: %d\n", wordCount);

    return 0;
}
