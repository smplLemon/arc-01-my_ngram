## Description
This C program is created to calculate the occurrences of specific character in collection of strings passed as command-line arguments. The program iterates through the ASCII values(from '0' to '127') and counts the occurrences of each element in the provided strings. If an occurrence is found, the program prints the character and its countself.

## Task
The primary task of this program is to analyse multiple strings and output the count of each lowercase English letter present in those strings. The counting function (con) receives a string and a character as parameter, returning the number of occurrences of the specified character in the string. The main function then iterates through the command-line arguments, accumulating counts for each character, and prints the result for characters with non-zero counts.

## Usage
Compile the code: gcc character_counter.c -o character_counter
Run the executable with input strings: ./character_counter string1 string2 string3 ...

Replace string1, string2, string3, etc., with strings you want to analyze.

## Installation
You need to intall C compiler such as GCC you can compile by c compiler because this program written in C language.
