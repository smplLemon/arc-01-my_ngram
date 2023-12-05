# My Ngram Project

## Welcome to My Ngram!

My Ngram project is a collection of utilities that facilitate the generation of Ngram models.
This project provides an alternative approach to traditional text processing methods in the C programming language.

## Table of Contents

- [Task](#task)
- [Description](#description)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)
- [The Core Team](#the_core_team)

## Task

For each exercise, you will have to create a folder and in this folder, you will have additional files that contain your work.
Folder names are provided at the beginning of each exercise under submit directory and specific file names for each exercise are also provided at the beginning of each exercise under submit file(s).

Submit files:

    Makefile - *.c - *.h

### Specifications

Write a program my_ngram; It will count the number of occurrences per character.

### Name

- my_ngram

### Synopsis

- my_ngram text [text2, text3]

## Description

In computational linguistics and probability, an ngram is a contiguous sequence of n items from a given sample of text or speech.
The items can be phonemes, syllables, letters, words or base pairs according to the application.
The ngrams typically are collected from a text or speech corpus. When the items are words, ngrams may also be called shingles.
Google Inc. has used this technique to improve the completion of its Search Engine. The program was developed by Jon Orwant and Will Brockman and released in mid-December 2010.
My Ngram will take 1 or multiple strings as arguments.
It will display, one per line, each character and the numbers of times it appears.
Order will be alphanumerical.

## Requirements

The My Ngram project should meet the following requirements:

Functional Requirements

- The project should implement an Ngram language model in C.
- The project should support unigram, bigram, and higher-order Ngram models.
- The project should allow users to specify the order of the Ngram model.
- The project should allow users to load an Ngram language model from a file.
- The project should allow users to generate a sample text sequence using an Ngram language model.

Non-Functional Requirements

- The project should be written in C and should compile and run on a compliant operating system.
- The project should be efficient in its memory usage and processing time.
- The project should be easy to use and should have a well-documented codebase.

## Installation

To start using the My Ngram project, follow these steps:

1. Clone the repository:
   git clone https://github.com/<your-username>/my_ngram.git

2. Navigate to the project directory:

   cd my_ngram

3. Build the project using a C compiler like GCC:

   gcc -o my_ngram my_ngram.c

4. Run the compiled executable:

   ./my_ngram

## Usage

To use the My Ngram project, you can simply run the compiled executable without any command-line arguments:

1. ./my_ngram

Alternatively, you can specify a file to be processed by providing its path as a command-line argument:

1. ./my_ngram path/to/your/file.txt

By default, the program generates unigrams. To generate higher order Ngrams, you can set the N value by using the -n option:

1. ./my_ngram -n 2

In this example, the program will generate bigrams.

## License

This project is licensed under the [MIT License](LICENSE).

## The Core Team

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
