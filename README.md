The my_argv_length function calculates the length of the concatenated command-line arguments by iterating through the argv array and counting the number of characters.

The my_ngram function takes a string (argv) and its length (len) and counts the occurrence of each character in the string. It uses a dynamically allocated array str to store the frequency of each character.

The my_mix_array function takes the number of command-line arguments (args) and the argv array. It concatenates all the command-line arguments into a single string using dynamic memory allocation and then calls the my_ngram function to calculate the n-gram frequencies.

In the main function, my_mix_array is called with the argc and argv arguments to calculate the n-gram frequencies for the concatenated command-line arguments.

To use this code, you can compile it and run the resulting executable from the command line. For example:

gcc ngram.c -o ngram
./ngram argument1 argument2 
Replace argument1, argument2, and so on with the desired command-line arguments. The code will calculate the n-gram frequencies for all the concatenated command-line arguments and print the results.

Make sure to include the necessary header files (stdio.h, stdbool.h, stdlib.h, and string.h) and compile the code using a C compiler.