## Welcome to my.ngram.c

# Task

This provided code is called "Ngram". It accepts strings, numbers, any characters, counts them through a loop, and outputs to the terminal, counting the number of characters entered. This is the main task of my code.

Library: `<stdio.h>`- standart input output; `<stdlib.h>` -  is the header for the General Purpose Standard Library of C Programming language. It is used to print the strings, integer, character etc on the output screen; `<unistd.h>` - for the sleep() function.

# Description

In the main() function, an array for characters and integers is opened using calloc. Through printf(), the user is asked to enter a sign, number or word  the entered word is stored in an array named `char sign_arr`.
 
The `counting_characters()`: function accepts as parameters a pointer to a character array, an integer representing the number of characters, pointers to an integer array that stores the number of each character, and reads the characters using a binary loop until the index of the characters is equal to '\0'. In the inner loop and calculates the value of the index by multiplying it by 256 and adding the ASCII value of the character.Basically, this code can read any character and count how many times it has been repeated. 

 Next, using a for loop, it prints the character and the number representing how many times it is repeated

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