# Welcome to My Ngram
***

## Task

Based on the specifications and requirements provided, you need to create a C program called my_ngram that takes one or multiple strings as arguments
and counts the number of occurrences per character. The output should display each character and the number of times it appears, in alphanumerical order. 
Your program should be compiled with the flags -Wall -Wextra -Werror, and your makefile should have a clean and fclean rule.
Here's an example implementation of my_ngram that meets the specifications and requirements.
In this implementation, we first initialize an array called counts with size 256 (which is the number of possible characters in ASCII) and set all counts to 0. 
We then loop through all arguments (excluding the program name) and all characters in each argument, incrementing the count for each character in the counts array. 
Finally, we loop through all counts and print out the non-zero counts in alphanumerical order.

## Description

This Makefile has a rule to compile the my_ngram program with the specified flags and dependencies, as well as rules for cleaning up object and binary files. 
To compile the program, you can simply run make, and to clean up object and binary files, you can run make clean or make fclean.
The code you provided is a Makefile. Make is a utility that automatically builds executable programs and libraries from source code by reading files called Makefiles,
 which specify how to derive the target program. The Makefile consists of rules that tell the make utility how to build the target program. 
 Here is a brief explanation of each line of the Makefile you provided

## Installation

CFLAGS = -g -Wall -Wextra -Werror
This line sets the compilation flags. -g adds debugging information to the executable, -Wall enables all compiler warnings, -Wextra enables additional compiler warnings, and -Werror treats warnings as errors.
This line is a rule that specifies how to build the $(TARGET) executable. It depends on the $(SRC) rule, which is the source file(s) for the program. 
The $@ and $^ are automatic variables that represent the target and dependencies of the rule, respectively. This line tells the make utility to compile $(SRC) using $(CC) with $(CFLAGS), and output the executable to $(TARGET).

## Usage

This line is a phony target. It specifies that fclean is not a file, but a rule. Phony targets are typically used for housekeeping tasks like cleaning the project directory.

makefile
Copy code
clean:
    rm -f $(TARGET)
This line is a rule that specifies how to clean the project directory. It removes the $(TARGET) executable file.

makefile
Copy code
fclean: clean
This line is a rule that specifies how to force-clean the project directory. It depends on the clean rule, and removes any files created during the build process.

makefile
Copy code
re: fclean all
This line is a rule that specifies how to rebuild the project. It depends on the fclean and all rules, and removes any existing files, then builds the executable from scratch.

I hope this explanation helps! Let me know if you have any further questions.




### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
