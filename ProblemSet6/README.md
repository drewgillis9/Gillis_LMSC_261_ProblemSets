###Project Name

Problem Set 6

###Submitted by

Drew Gillis

###For Course

LMSC-261

###Due Date

04:00:00 PM on 3/04/2020

###Submission Date

02:43:00 PM on 3/04/2020

###Files Included

* ProblemSet6.1.c
* ProblemSet6.2.c
* ProblemSet6.1.out
* ProblemSet6.2.out
* README.md

###Purpose

The purpose of this problem set was to understand how to manipulate arrays of integers and characters to show only certain values, and how to single out certain ASCII values and change them as needed.

###Description

The Problem Set 6.1 had us write the code to perform the Sieve of Eratosthenes for integers between 2 ~ 100. The Sieve finds all prime numbers through integer *n*, which in this case was 100. The code followed a pseudocode inside of Wikipedia, which told us which kinds of loops and variables to use; however, that was not the full story, and we had to work through some other work for sure. We had to create an array for numbers 2 ~ 100, which I honestly had no idea how to do for quite some time. After that, it got a bit easier for me - we created 2 variables i and j such that if i were multiplied by j, it was automatically taken out of the array. This took out all non-primes and set them to 0, which I made my code ignore zeros in the array, thus skipping those values.

The Problem Set 6.2 was much different, but also very similar; we were using strings with characters instead of an integer array, but we were attemting to take out unwanted values from an array, so very related. In this problem set, we created a function that took digits out of a character string by singling out their ASCII values and not printing them with the rest of the string. I then plugged this function into the main function. I have no idea why I am getting a warning - it is something I have done incorrectly with the function, because when I ran the function code without using it as a function, it worked totally fine. Regardless, the warning does not impact the way the code runs, and the correct result still comes out... so please go easy on the grading haha?

###Build and Run Commands

The Problem Sets 6.1 and 6.2 require `clang` to compile the code, then the corresponding `./` to read it back from binary into English.

In 6.2, there is a portion of my code that is in comment form, but to manually compute the string length, I printed out the value and then manually plugged that value into a variable. I left that part of my code in comments because otherwise it runs unnecessary text when you compile and read the .out file. If you want to see exactly what I did, just un-comment that section and run it as normal. I indicated inside of 6.2 with another comment which code needed to be altered.

###Acknowledgements

I used a website that ran a code in C on the Sieve to help out when I got stuck in 6.1. I used it for probably 50% of my code, but had most of the code written, was just confused as to why `i = 0` was not working. I only had to alter the rest to correspond with the new `i = 2`. Here is the link to this website:

https://www.codesdope.com/blog/article/prime-numbers-using-sieve-algorithm-in-c/
