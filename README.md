## Task
The basic problem is in the implementing project logic, counting  the number of  the characters in string and giving  the amout of their occurrency in alphabetical order.

## Description
I set up a C project with necessary libraries (stdio.h, string.h,).I created a function like  c_occurrences. This allows the program to handle characters outside the standard ASCII range.



## Installation
git clone https://github.com/yourusername/my_ngram.git
cd my_ngram
gcc -o counter_characts my_ngram.c

## Usage
When the program is executed, it checks if at least one argument (the text to analyze) is provided. If not, it prints a usage message indicating how to run the program and exits with a return code of 1. If an argument is provided, the program calls the c_occurrences function with the provided text as an argument. Inside c_occurrences, it initializes an array 'k' of size 128 (for extended ASCII characters) with all elements set to 0. It then iterates over each character in the provided text, increments the corresponding element in k based on the ASCII value of the character, and counts the occurrences of each character.After counting all occurrences, the program iterates over the k array and prints the ASCII character and its count if the count is greater than 0. This prints out a list of characters along with the number of times each character appears in the input text.
