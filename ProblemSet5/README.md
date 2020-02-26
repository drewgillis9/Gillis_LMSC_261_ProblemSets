###Project Name

Problem Set 5

###Submitted by

Drew Gillis

###For Course

LMSC-261

###Due Date

04:00:00 PM on 2/26/2020

###Submission Date

03:11:00 PM on 2/26/2020

###Files Included

* LoremIpsum.txt
* LoremIpsumCopy.txt
* ProblemSet5.1
* ProblemSet5.1.c
* README.md

###Purpose

The purpose of this problem set was to understand how to open and close files, and how to use `fgetc` and `fputc` to take characters of text in, and output them into a separate file.

###Description

The Problem Set 5.1 had us working with a text file, titled LoremIpsum.txt, to practice with using `fopen`, `fclose`, `fgetc`, and `fputc` to work between multiple text files and for the general prupose of file work inside of C. First, we had to open the 2 separate files, one in read mode and one in write mode, and give conditions if they were not opening. Then, we specified that if the two files both opened, that the text from LoremIpsum.txt needed to transfer to LoremIpsumCopy.txt. This was done by firest extracting the text as characters between A and Z from the inital file, and reading each character one by one inside the code. Then character by character, it had to be put back into the second file. We used while and if statements to set conditions for when the code needed to either import or export characters into each file. Our error commands were run with `return `, which would let us know if something was wrong by returning the integer value we placed inside of its brackets.

###Build and Run Commands

There are no build and run commands outside of compiling and running the code itself.
