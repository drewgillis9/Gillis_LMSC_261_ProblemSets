import csv

# open up numbers.csv
csv_file = open("numbers.csv", "r")
csv_reader = csv.reader(csv_file)

# open up reverse.csv
csv_new = open('reverse.csv', 'w')
csv_writer = csv.writer(csv_new)

# take reversed csv_reader and dump into csv_writer
for row in csv_reader:
    row.reverse()
    csv_writer.writerow(row)

# close both files, need to reopen csv_new as a read file
csv_file.close()
csv_new.close()

with open('reverse.csv', 'r') as reverseRows:
    for row in list(csv.reader(reverseRows)):
        # reset sum for each row
        sum = 0
        # for loop for each data point (30 columns) making sum for each row
        for i in range(30):
            sum += int(row[i])
        # average equation for each row
        average = float(sum / 30)
        # print that average, formatted to 2 decimal points
        print("The average for this row is: {:0.2f}".format(average))


