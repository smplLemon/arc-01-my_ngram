## Welcome to my_ngram

Welcome to my_ngram, a simple C program for analyzing character frequencies in strings.

## Task

The task of my_ngram is to take a list of strings as input and analyze the frequency of characters within those strings. It then prints out the frequency of each character and identifies the character with the highest frequency.

## Description

The program consists of several functions:

- `my_strlen`: Calculates the length of a string.
- `fill_array`: Populates an array with the frequency of characters in a string.
- `print_array`: Prints out the frequency of characters in the array.
- `find_max`: Finds the index of the character with the highest frequency in the array.

## Installation

To compile and run `my_ngram`, you need a C compiler such as `gcc`. Here are the steps:

1. Clone this repository:

```
git clone <repository_url>
```

2. Navigate to the directory containing the source code:

```
cd my_ngram
```

3. Compile the program:

```
gcc -o my_ngram my_ngram.c
```

## Usage

Once compiled, you can use `my_ngram` from the command line. Here's the syntax:

```
./my_ngram <string1> <string2> ...
```

Replace `<string1>`, `<string2>`, etc. with the strings you want to analyze. For example:

```
./my_ngram "hello world" "this is a test"
```

This will analyze the character frequencies in the two provided strings and print out the results.
