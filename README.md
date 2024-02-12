## Welcome to my.ngram.c

# Task

The provided code is called "Ngram". This code takes a string and counts the letters in it through a loop, then determines how many letters there are and prints the letter and how many times it occurs in the string to the terminal.
This is the main function of my code.

Library: `<stdio.h>`- standart input output; `<stdlib.h>` -  is the header for the General Purpose Standard Library of C Programming language. It is used to print the strings, integer, character etc on the output screen; `<unistd.h>` - for the sleep() function.

# Description

In the main() function, an array for strings and integers is opened using calloc. Through printf(), the user is asked to enter a word, and the entered word is stored in the string array.
 
The `counting_characters()`: function accepts an array of strings and integers as parameters,using the for loop, it reads the string until it returns '\0', determines whether the letters in it are upper or lower case using the if conditional operator, and increases the index.
    
 Using another for loop the letter and its number are printed.Briefly explained, this function determines whether the letters in the string are uppercase or lowercase, counts them, copies the letter and the number representing how many times it is repeated.

In addition, I used the `sleep()`: function in this code.The sleep() function is a function provided by the C standard library that suspends the execution of a program for a specified number of seconds. It is often used to introduce a delay or pause in the program's execution. This will print one by one to the terminal, that is, when you compile the code, the message will be output in rows instead of all at once.
    
 You will definitely see this when you try using the code.

# Installation

To compile the code, use a C compiler such as gcc. For example:
```

gcc -o Ngram my_Ngram.c
```
# Usage

You must use command line commands to run this code, so whatever standard output file you use, you'll use one of these when compiling: 
```
./a.out 
```