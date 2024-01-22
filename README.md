# Description

"
In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech. The items can be phonemes, syllables, letters, words or base pairs according to the application. The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may also be called shingles.

Google Inc. has used this technique to improve the completion of its Search Engine. The program was developed by Jon Orwant and Will Brockman and released in mid-December 2010.

My Ngram will take 1 or multiple strings as arguments.

It will display, one per line, each character and the numbers of times it appears.

Order will be alphanumerical.
"

# Task

"
The primary task of this project is calculate and print, letters and signs in given words.
This program analyzes command-line arguments, counting the occurrences of each character in the provided strings, and then outputs the results.
"

# Usage

"
my_strlen: Function for calculating the length of a string.
main:

- Initializes the array 'str' to store character frequency.
- Iterates through command-line arguments, updating the frequency array.
- Finally, prints non-zero frequencies along with corresponding characters.
  "

# Installation

"
gcc -o my_ngram my_ngram.c

./my_ngram "arg1" "arg2"

"
