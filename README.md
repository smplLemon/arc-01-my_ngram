## My_ngram 
## Description
The purpose of this application is to tally the frequency of each character in a specified text or multiple texts using the concept of n-grams, where n equals 1, indicating individual character consideration.

## Installation
To set up the program, adhere to these steps:

1. Clone the repository or download the source code.
2. Navigate to the project directory using a terminal.
3. Build the program by executing the following command:

```bash
make
```
This command compiles the code, generating the executable file.

## Usage
To employ the program, proceed as follows:

1. Run the executable file with the command:
   Replace text1, text2, etc. with the desired texts for analysis.
    
     ```./my_ngram text1 [text2, text3]```
   

2. The program will then calculate and display the occurrences of each character in the input texts.

## Example

```
ulugbe@ulugbe-2 arc-01-my_ngram % make
gcc  -Wall -Wextra -Werror  -o my_ngram my_ngram.c
ulugbe@ulugbe-2 arc-01-my_ngram % ./my_ngram "asdvcsasd"
a:2
c:1
d:2
s:3
v:1
```