# Ngram Text Analysis

This project analyzes text data using N-grams, which are contiguous sequences of n items (characters, words, etc.) in a given text. The frequency of N-grams is calculated to understand patterns and relationships within the text.

## Usage

1. Clone the repository:

bash
git clone https://github.com/yourusername/your_Ngram_project.git

2. Compile the program using a C compiler:

bash
gcc -o ngram_analyzer ngram_analyzer.c

3. Run the program with the text file to analyze and specify the N-gram size:

bash
./ngram_analyzer input_text.txt 3

The program will analyze the text from the input file using 3-grams and output the frequency of each N-gram.