###Project Name

MLB Draft Picks And Career Success – A Statistical Regression

###Submitted by

Drew Gillis

###For Course

LMSC-261

###Due Date

05:00:00 PM on 5/5/2020

###Submission Date

2:56:00 PM on 4/9/2020

###Files Included

* README.md
* DESIGN.md
* FinalProject.pptx
* FanGraphs Leaderboard
* draftpicks.csv
* FinalProject.2.ipynb

###Design Description

I made a few decisions for my regressions that strayed from the material we have extensively covered in class. First, I decided to use Pandas instead of CSV library for my data. Pandas imports the data into a data frame with its own formatting that can be read inside of Jupyter Labs, while CSV can open and manipulate files but with much less available formatting to be seen inside the code. By using Pandas, I was able to easily code quick lines of manipulation, and see them in an instant.

I also decided to use Statsmodels to perform my regression, instead of using RScript (which I initially planned on using.) The reason I made this choice was to stay inside Python - these libraries were made for python statistics, and I heard from my brother (who uses Pandas a lot for work) that they are incredibly intuitive and I won't have to run 2 different coding languages for my project.

As for the decision to use Jupyter Labs outside of VSCode, the cell-by-cell reading was incredibly useful to diagnose errors quicker. I found an extension to run Jupyter Labs inside of VSCode, but I did not like the interface as much. The ability to run cell-by-cell changed the way I code, and I plan on using it loads more in the future. I always had issues with running part of my code in VSCode - I would have to comment out an annoyingly large part of code, then have trouble finding which lines were originally commented and which lines weren't. In short, Jupyter Labs streamlined my process.

Some of the libraries that I used were based on recommendations from members of Stack Overflow or other similar websites. Those will be acknowledged in my acknowledgements section of my README.md.