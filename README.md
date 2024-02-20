# My Ngram

This program, written in C, calculates the frequency of characters in a given set of strings passed through the command line arguments. It utilizes n-gram analysis, specifically unigrams (single characters), to count the occurrences of each character.

## Usage

To use this program, follow these steps:

1. **Compilation**: Compile the program using a C compiler. For example, using GCC:
    ```
    gcc -o ngram_counter ngram_counter.c
    ```

2. **Execution**: Run the compiled program and pass the strings as command line arguments.
    ```
    ./ngram_counter string1 string2 ...
    ```

## Example

Suppose you want to count the frequency of characters in the strings "hello" and "world", you would run:
    ```
    ./ngram_counter hello world
    ````
The program will output the frequency of each character present in the provided strings.

## Notes

- The program considers only ASCII characters.
- It counts each character's frequency independently, ignoring any other characteristics or patterns.
- Non-alphanumeric characters are also counted.
- The maximum length of the input strings is limited by the `SIZE` constant defined in the code.

Feel free to modify and extend the program according to your needs. Happy coding!

