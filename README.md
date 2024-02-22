## Welcome to my.ngram.c

# Task

This provided code is called `"Ngram"`. It accepts strings, numbers and spaces counts them through a loop and calculates the number of characters entered and outputs it to the terminal. This is the main function of my code.

Library: `<stdio.h>`- standart input output; `<stdlib.h>` -  is the header for the General Purpose Standard Library of C Programming language. It is used to print the strings, integer, character etc on the output screen; `<unistd.h>` - for the sleep() function; `<ctype.h>`- header file of the C Standard Library declares several functions that are useful for testing and mapping characters. All the functions accepts int as a parameter, whose value must be EOF or representable as an unsigned char.

# Description

The `int main()` function accepts command-line arguments as parameters. An integer array is opened using calloc, a pointer to characters is opened, and `argv[1]` is set to it.

 Again in int main() it checks whether a character is entered after `./a.out` and if not it warns the user and returns 1.

 The `free()` function closes an array opened for an array of integers

The `counting_characters()`: function accepts order string arguments by parameter, an integer representing the number of characters,and reads the characters using a binary loop until the index of the characters is equal to `'\0'`. In the inner loop and calculates the value of the index by multiplying it by 256 and adding the ASCII value of the character.Basically this code reads numbers and letters and determines how many the count is.Also, in this function, a code is added to check whether the character entered through the conditional operator is a space. That is, this code works for spaces as well.I am a control from the `tolower()` function. This function converts uppercase letters to lowercase letters.

 Next, using a for loop, it prints the character and the number representing how many times it is repeated

In addition, I used the `sleep()`: function in this code.The sleep() function is a function provided by the C standard library that suspends the execution of a program for a specified number of seconds. It is often used to introduce a delay or pause in the program's execution. This will print one by one to the terminal, that is, when you compile the code, the message will be output in rows instead of all at once.
    
 You will definitely see this when you try using the code.

# Installation

To compile the code, use a C compiler such as gcc. For example:
```

gcc -o ngram my_ngram.c
```
# Usage

You must use command line commands to run this code, so whatever standard output file you use, you'll use one of these when compiling: 
```
./a.out 
```
Remember that you enter characters after `./a.out` with a space.
