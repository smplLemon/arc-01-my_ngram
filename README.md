# Welcome to My Ngram


## Task
The task of this program is to count the occurrences of each ASCII character in a given string and display the count for each character.

## Description
This C program utilizes an array to store the count of ASCII characters present in a given string. The store_arr function takes in an array (store_1) and a string (argv) as arguments. It iterates through the string, incrementing the count of each ASCII character encountered within the array. The print_store function then prints out the counts of characters that have occurred at least once in the provided string.

The main function initializes an array store with 128 slots (for ASCII characters), using calloc to allocate memory. It contains a sample string str[] ("hello world 109390832"), which is meant to be the input string for character counting. It iterates through the command line arguments (argc) but always uses the same string str[] instead of the arguments passed to the program.

## Installation
To compile and run this program, follow these steps:

Ensure you have a C compiler installed on your system (e.g., GCC for Linux, MinGW for Windows).
Save the provided code in a file, for example, my_ngram.c.
Open a terminal or command prompt and navigate to the directory containing my_ngram.c.
Compile the code using the C compiler. For example:
For GCC on Linux: gcc -o my_ngram my_ngram.c
For MinGW on Windows: gcc -o my_ngram.exe my_ngram.c
Run the compiled executable by typing ./my_ngram (Linux) or my_ngram.exe (Windows) in the terminal or command prompt.
Usage
Upon running the compiled program, it will count the occurrences of ASCII characters in the string "hello world 109390832". The output will display each character along with its count, excluding characters that did not appear in the string.



### The Core Team

