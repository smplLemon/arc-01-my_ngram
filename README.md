## Overview

my_ngram.c is a C program that counts the frequency of characters in a given input text file. It can handle multiple input text files and outputs the character frequencies to the standard output.

## Features

* Counts the frequency of all characters in the input text
* Handles both ASCII and extended ASCII characters
* Can process multiple input text files

## Description

The program takes the following command-line arguments:

* text: One or more input text files (comma-separated)

## Getting Started

### Installation

To use my_ngram.c, you will need a C compiler. Once you have a compiler installed, you can compile the program using the following command:

gcc my_ngram.c -o my_ngram

### Usage

To count the frequency of characters in a text file, run the program with the appropriate command-line arguments. For example, to count the frequency of characters in the input file input.txt, you would use the following command:

./my_ngram input.txt

You can also count the frequency of characters in multiple input text files by separating them with commas. For example, to count the frequency of characters in the input files input1.txt, input2.txt, and input3.txt, you would use the following command:

./my_ngram input1.txt,input2.txt,input3.txt

The program will output the character frequencies to the standard output.