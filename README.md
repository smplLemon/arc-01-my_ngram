# Welcome to My Ngram

## Task
Your task is to create a program called "My Ngram" which takes a list of strings as input arguments and prints out the frequency of each character in those strings. Additionally, it identifies the character with the highest frequency and prints its index.

## Description
The provided code is a C program that accomplishes the task described above. Here's a brief overview of its functionality:

- The program defines a constant `VID_OBJECT_SIZE` as 128.
- It includes standard libraries `<stdio.h>` and `<stdlib.h>`.
- Defines functions `my_strlen` to calculate the length of a string, `fill_array` to populate an array with the frequency of characters in a string, `print_array` to print out the populated array, and `find_max` to find the index of the character with the highest frequency.
- In the `main` function, it initializes an array `array` with size `VID_OBJECT_SIZE` and fills it by calling `fill_array` function with input arguments provided via the command line. Then, it prints the populated array and finds the character with the highest frequency and prints its index.

## Installation
No installation steps are necessary for this program. You can directly compile and run it using a C compiler like GCC.

## Usage
To use the program, follow these steps:

1. Compile the program using a C compiler. For example, if your source code file is named `my_ngram.c`, you can compile it using GCC with the following command:
   ```
   gcc -o my_ngram my_ngram.c
   ```

2. Run the compiled program with a list of strings as input arguments. For example:
   ```
   ./my_ngram string1 string2 string3 ...
   ```
   Replace `string1`, `string2`, `string3`, etc. with the strings you want to analyze.

3. The program will output the frequency of each character in the provided strings and identify the character with the highest frequency, along with its index.

That's it! You can now use the "My Ngram" program to analyze the character frequencies in strings.