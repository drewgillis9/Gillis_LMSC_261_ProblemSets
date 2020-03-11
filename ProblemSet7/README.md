###Project Name

Problem Set 7

###Submitted by

Drew Gillis

###For Course

LMSC-261

###Due Date

04:00:00 PM on 3/11/2020

###Submission Date

11:55:20 AM on 3/11/2020

###Files Included

* ProblemSet7.1.c
* ProblemSet7.1.out
* README.md

###Purpose

The purpose of this problem set was to understand how to search for specific characters within a string, and learn how to use the `scanf` function to allow for user inputs.

###Description

The Problem Set 7.1 had us create a code in which the user inputs a character and a string, and the code will look for the character in said string and list how many times it appears. First, I declared my variables and string, then used `scanf` functions for the character and string so that the user could manually input. This part did not work for me in the correct order, so I flipped it to have character before string. I also had to include a buffer in which `scanf` would read a temporary character before attempting to read the string; this kept the code from automatically spitting out the wrong information due to reading the enter key as the first character in the string.

In the second half of my code, I created a while-loop in which as long as the string had not terminated, every time a new character in the string matched the character input by the user, it added one to another variable used in the last step - this was called count, and I used it in my last `printf` function to indicate how. many appearances of the character there were. I found that `scanf` has a problem sometimes with reading spaces in strings because it interprets them as '\0', so I had to look up a new way to write %s in the `scanf` for it to read the spaces and move forward. See acknowledgements below.

###Build and Run Commands

The Problem Set 7.1 requires `clang` to compile the code, then the corresponding `./` to read it back from binary into English.

The user must input first a character when prompted, then a string in which the code will look for said character. The `scanf` function calls for user input, so it is imperative in this code.

###Acknowledgements

When I notated my string using `%s` in my `scanf` function, the code would stop running at spaces, as if a space were the same as `'\0'`. Because of this, I had to look up a different notation of strings that allowed spaces to be read inside of the `scanf` function. The website from which I received assistance is listed below.

[https://www.includehelp.com/c/c-program-to-read-string-with-spaces-using-scanf-function.aspx](https://www.includehelp.com/c/c-program-to-read-string-with-spaces-using-scanf-function.aspx)
