# arc-01-my_ngram

This program counts the occurrences of each character in a set of strings.

## How to use:

1. Save the code as a `.c` file (e.g., `character_counter.c`).
2. Compile the code using a C compiler (e.g., `gcc character_counter.c -o character_counter`).
3. Run the program from the command line, providing one or more strings as arguments (e.g., 
`./character_counter hello world how are you`).

## Example Output:

```
 :1
h:1
e:1
l:3
o:2
w:1
r:2
d:2
a:1
y:1
u:2
```
## Explanation:

- `countCharacters`: This function calculates the total number of characters in a string.
- `counter`: This function analyzes the input strings and creates a record of character frequencies.
- `main`: This function is the program's entry point. It validates user input and coordinates the other functions to process the data.

## Note: 

This program only considers printable ASCII characters (characters between space ' ' and lowercase 'z').