# Description
This code counts the number of letters in the given command line arguments and prints the number of each letter. I will explain its operation and structure below:
- The code starts from the main function.
- parameters argc and argv represent the number of arguments and arguments entered from the command line.
- count variable is used to store the number of each letter.
- The outer loop checks all characters from '' to 'z'.
- Inner loops check each word in the command line arguments and each letter of those words.
- If a letter is found in one of the arguments, the count variable is incremented by one.
- If the count value is greater than 0, that is, the letter is found at least once, then this letter and its number are printed on the screen.
- In this way, the code counts the number of characters in the command line arguments and prints the result to the screen.
# Task
- The code is used to take arguments from the user's command line and count the number of letters between the arguments. Checks the list of letters in each argument and counts the number of each letter.
# Usage
- The structure of the code is very simple. The letters in the arguments are checked and calculated using two inner loops. Then, the number of each letter is printed on the screen.
# Installation
To install the code, you need to follow these steps:
 - 1. If GCC is not installed, you need to compile it to install it.
 - 2. In the next step, we can open my_ngram.c file
 - gcc my_ngram.c -o my_ngram.exe
 - This command compiles the code and creates an executable named "program".
 - We can check through ./my_ngram
 - The program outputs the number of each letter in the console window.