## Overview
This C program counts the occurrences of each character in the input strings provided as command-line arguments.The provided C code is a simple yet effective program designed to count the occurrences of each character in a collection of strings passed as command-line arguments. This program utilizes an array (count) to keep track of the frequency of each ASCII character.

## Features
- Counts the occurrences of each character in the input strings
- Supports multiple input strings provided as command-line arguments

## Description
In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech. The items can be phonemes, syllables, letters, words or base pairs according to the application. The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may also be called shingles.

Google Inc. has used this technique to improve the completion of its Search Engine. The program was developed by Jon Orwant and Will Brockman and released in mid-December 2010.

My Ngram will take 1 or multiple strings as arguments.

It will display, one per line, each character and the numbers of times it appears.

Order will be alphanumerical.
## Getting Started
To get started with this program, simply compile the code using a C compiler and run the executable with the input strings as command-line arguments.

### Installation
1. Make sure you have a C compiler installed on your system (e.g., GCC).
2. Clone the repository or download the source code.

To compile the code, use a C compiler such as GCC:
```bash
gcc  -Wall -Wextra -Werror  -o my_ngram my_ngram.c or make.
```

### Usage

1. Open a terminal and navigate to the directory containing the source code.
2. Run the program, providing the input text and specifying the desired n-gram length:
```bash
./my_ngram "test" "test2"
```