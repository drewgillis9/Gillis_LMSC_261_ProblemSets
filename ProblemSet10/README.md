###Project Name

Problem Set 10

###Submitted by

Drew Gillis

###For Course

LMSC-261

###Due Date

04:00:00 PM on 4/8/2020

###Submission Date

2:56:00 PM on 4/9/2020

###Files Included

* README.md
* ProblemSet10.1.py
* ProblemSet10.2.py
* numbers.csv
* reverse.csv

###Purpose

The purpose of this problem set was to understand how to use lists in Python in combination with csv files, allowing us to work with data much easier than before.

###Description

The Problem Set 10.1 had us create 2 small lists and combine them in alternating fashion. This required simple slicing of the lists in python - no csv required. The part that tripped me up for a bit was getting the list to print with the right formatting. I had to google some tricks on formatting to get rid of the quotes around the new list, and around the individual letters. I converted the whole list to str elements (including the integers) so I could manipulate the list as a whole.

The Problem Set 10.2 had us use 2 .csv files, 'numbers.csv' and 'reverse.csv', to learn how to manipulate .csv files from inside a separate Python file. Figuring out how to interact between the 2 .csv files was definitely my biggest struggle, but finally I figured out how to very efficiently run each line of data from numbers.csv to reverse.csv while reversing the individual lines - in only 3 lines of code. I then had an incredibly inefficient way of finding the averages of each row. - adding each element 0-29 in each row manually. I decided to spend some time to figure out a for loop, which took some time as well. This problem set in particular really helped me with my step-wise thinking.

###Build and Run Commands

Simply performing `python3 *filename*` into terminal will run each code.

###Acknowledgements

I used a couple websites to help with new commands I did not know in Python, and to better help me understand .csv file manipulation. They are listen below.

[.reverse command](https://dbader.org/blog/python-reverse-list)

[Writing .csv Files](https://www.geeksforgeeks.org/writing-csv-files-in-python/)

[Using a for-loop for the sum](https://www.python-course.eu/for_loop.php)

[Formatting 2 decimal points for the averages](https://stackoverflow.com/questions/20457038/how-to-round-to-2-decimals-with-python/20457284#20457284?newreg=5d0e2dddbbbe4a4d9cb0870a1094be32)
