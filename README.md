# Description
	The my_ngram program is designed to count the frequency of occurrence of characters in the passed text command line arguments. The results are displayed as a list of symbols and their frequencies.

# Task
	Our task is that we must count all the letters and symbols (according to the ASCIII table) and must show how many symbols we use when starting the program. If nothing is output, it should show an error.
# Installation and Usage

1. **Compiling using Makefile:**
- Before using, make sure that you have the GCC compiler installed and the make utility installed.
- Open a terminal and run the command:
      ```
      make
      ```

2. **Launch:**
- After successful compilation, execute the program with text arguments:
  
    ```
	./my_ngram text1 text2
    ```
    Where `text1` and `text2` are text strings to parse.

1. **Results:**
- The program will display the frequency of occurrence of each character in the passed arguments.

2. **Cleaning:**
- Run the command to remove the executable and object files:
    ```
    make clean
    ```
    or for complete cleaning

    ```
    make fclean
    ```
