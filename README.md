
## Welcome to my_ngram.c

## Task
Your task is to analyze the frequency of characters in a list of strings provided as arguments.

## Description
The `my_ngram.c` program takes a list of strings as command-line arguments and calculates the frequency of each character present in those strings. It ignores the program name itself and considers the subsequent strings provided as input for analysis.

## Installation
No installation steps are required. You can compile the `my_ngram.c` file using a C compiler like GCC. Here's how you can compile it:

```bash
gcc my_ngram.c -o my_ngram
```

## Usage
Once compiled, you can run the program by providing strings as command-line arguments. Here's how you can use it:

```bash
./my_ngram string1 string2 string3 ...
```

Replace `string1`, `string2`, `string3`, etc. with the strings you want to analyze. The program will then output the frequency of each character present in those strings.

For example:
```bash
./my_ngram hello world
```

Output:
```
h: 1
e: 1
l: 3
o: 2
w: 1
r: 1
d: 1
```

This indicates that in the provided strings "hello" and "world", each character's frequency is displayed accordingly.