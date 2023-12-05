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

Functional requirements

- Your code must be compiled with -Wall -Wextra -Werror flags.
- Your makefile must be clean and have fclean rules.

Non-functional requirements

- The project must be written and compiled in C and run on a compatible operating system.
- The project must be efficient at the time of dispatch and delivery from memory.
- The project should be easy and have a well-documented code base.

## Installation

You must have the C compiler installed to run this program.
If you don't have a C compiler, you can install the **gcc** compiler on Windows/Linux by running the following command:

```
mingw-get install gcc.
```

```
sudo apt-get install build-essential
```

For Windows users, you can install **MinGW**, which includes the **gcc** compiler.

## Usage

To start using the My Ngram project, follow these steps:

1. Clone the repository:
   git clone https://github.com/<your-username>/my_ngram.git

2. Navigate to the project directory:

   cd my_ngram

3. Build the project using a C compiler like GCC:

   gcc -o my_ngram my_ngram.c

4. Run the compiled executable:

   ./my_ngr

## The Core Team

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
