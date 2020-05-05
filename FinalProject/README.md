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

###Purpose

The purpose of my final project, MLB Draft Picks And Career Success - A Statistical Regression, was to find out if there was a correlation between a baseball player's draft pick and their future success, measured in a stat called WAR (Wins After Replacement). Because of variation of experience between players in the league, I also accounted for their years of experience. At the end of the day, I wanted to figure out if draft picks are worth worrying about, or if they should be viewed more as trade pieces.

###Description

To build my project, I first had to manually compose a .csv file (draftpicks.csv) and enter each active non-pitcher's draft pick and years of experience. I was able to find a way to export a .csv including active non-pitchers on the career WAR leaderboard from fangraphs.com - this document is named (FanGraphs Leaderboard, and it was my template for adding draft pick and years.) After I had input the data, I called the .csv into my source code file. 

In order to call in the .csv and use it for statistical regression most efficiently, I wanted to use the Pandas, Matplotlib, and Statsmodels inside of Python. I first had to download Anaconda, an extension that carries these libraries, then decided to use Jupyter Labs for my code instead of VSCode because the creator of Pandas recommends using Jupyter. See: `DESIGN.md`.

I created a variable for the dataframe that draftpicks.csv was converted into, simply called `data`. Each time I wanted to see my progress in front of me, instead of having to do `python3 FinalProject.2.py`, I just entered `data` into a new cell and it would run starting at the cell I had selected. 

I ran into a number of roadblocks along the way. First, I had to get rid of all players that were internationally signed - this means they were not drafted, so they could not fit the model. I also needed to rename my columns to get rid of spaces, because Statsmodels would not read the spaces correctly when I wrote the line for the regression model. I also had to create a logarithmic measurement for fWAR because it was a logarthmically distributed statistic. This didn't make it normally distributed, but made it closer and a more viable option for a regression. Then, once I made the logWAR column, I had to get rid of players with a career fWAR <= 0 because logs cannot take those values. In this process, I ended up losing more players than I hoped for, but thought that ~200 players was still a solid starting number. Lastly, I had to change the draft_pick column to an int column instead of string - originally, the column had values of "intl", all of which were deleted with their entire row.

Once I was ready to run the regressions, I started with logWAR as my DV, and years_exper and draft_pick as my IVs. It proved there was a statistical significance between years played and logWAR (p <= .05), but no significance bwteen draft pick and logWAR. I then wanted to see if there was a correlation between draft pick and years of experience, because if there was, you could argue for a transitive correlation. However, this was nowhere close to the truth (p = .775), proving that among active non-pitcher major league players, there is no significance in a higher draft pick.

This stat may be skewed by the amount of young players in the league, and not having enough statistics on older players. In the future, I will include retired players into this model, and run a separate model for pitchers (their WAR is notoriously skewed). 

###Build and Run Commands

To call the data table, simply write `data` into its own cell, and run starting from the cell desired. At this point, since the code is finished, it will work best to run from the top.

There is a line in place to run a regression between specific variables. To change those variables, follow this format: 

`"DV ~ IV + IV + IV + ..."`

To find out any general information about the data frame, use the line `data.describe()`

###Acknowledgements

Below is a list of links that helped me complete this project. From these links, I learned about new libraries, regressions, certain lines in python, and getting the data itself.

[What is regression?](https://realpython.com/linear-regression-in-python/)

[How to use Pandas Dataframe](https://www.shanelynn.ie/using-pandas-dataframe-creating-editing-viewing-data-in-python/)

[Starting with Jupyter Labs](https://www.pythonlikeyoumeanit.com/Module1_GettingStartedWithPython/Jupyter_Notebooks.html)

[Row and column manipulation](https://www.shanelynn.ie/using-pandas-dataframe-creating-editing-viewing-data-in-python/)

[Confirming active columns in dataframe](https://stackoverflow.com/questions/13148429/how-to-change-the-order-of-dataframe-columns)

[Indexing](https://www.geeksforgeeks.org/indexing-and-selecting-data-with-pandas/)

[Re-Indexing](https://www.geeksforgeeks.org/reindexing-in-pandas-dataframe/)

[Reading Regressions](https://blog.datarobot.com/ordinary-least-squares-in-python)

I'd also like to thank my brother, Jon Gillis, for assistance in this project. His experience with Pandas and Statsmodels helped me with my regressions. We zoom called a few times where I would share my screen with him, and he would guide me in the right direction.
