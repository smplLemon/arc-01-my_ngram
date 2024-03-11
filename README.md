# Ngram

This C program analyzes the frequency of characters in a given set of strings. It calculates the occurrences of each ASCII character within the provided strings and displays the results.

## Usage

To use this program, follow these steps:

1. Compile the program by executing the following command in your terminal:
```
gcc -o ngram ngram.c
```

2. Run the compiled program with your desired strings as arguments. For example:

```
./ngram string1 string2 string3 ...
```
Replace `string1`, `string2`, etc., with the strings you want to analyze.

## Functionality

- `my_isascii`: This function determines the length of a string by iterating through its characters until it reaches the null terminator.
- `my_strlen`: This function calculates the length of a string by incrementing a counter until it encounters the null terminator.
- `my_ngram`: This is the main function responsible for analyzing the frequency of characters in the provided strings. It iterates through each string, counting the occurrences of each ASCII character and storing the counts in an array. Finally, it prints out the counts for each character that occurred at least once.

## Compilation

- The code can be compiled using any standard C compiler, such as `gcc`.

## Example

Suppose you have compiled the program and want to analyze the frequency of characters in the strings "hello" and "world". You would run the program as follows:
```
./ngram hello world
```

The output would display the count of each ASCII character present in the given strings.

## Note

- This program considers only ASCII characters with codes ranging from 0 to 126.
- It ignores non-ASCII characters.

## Contribution

Feel free to contribute to this project by suggesting improvements or reporting any issues you encounter. You can submit your contributions via pull requests or by opening an issue on the project's repository.

