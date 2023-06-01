# wordCounter

The program is designed to count the number of words in a given body of text. It prompts the user to enter a text input, reads the input, and analyzes the text to identify individual words. It considers any sequence of characters separated by spaces, tabs, or newlines as a word. The program then determines the total count of words in the input and displays the result on the screen.

## How It Works...

- Upon execution, the program prompts the user to enter a body of text. It uses the fgets function to read the input from the user, allowing for input of up to 999 characters.

- Once the text input is obtained, the program proceeds to analyze the text and count the number of words present. It accomplishes this by iterating through each character in the input string.

- The countWords function is responsible for counting the words in the text. It maintains a counter variable and a boolean flag named inWord to keep track of whether the program is currently within a word or not.

- As it iterates through the characters, it checks if the character is a whitespace (space, tab, or newline). If it encounters a whitespace character, it sets the inWord flag to false, indicating that the program is not currently within a word.

- When a non-whitespace character is encountered and the inWord flag is false, it implies the start of a new word. The program increments the word count and sets the inWord flag to true.

- The iteration continues until the end of the string, considering each character along the way. Once the end of the string is reached, the final word count is obtained.

- The program then displays the word count to the user, providing them with an accurate measurement of the number of words in the entered text.
