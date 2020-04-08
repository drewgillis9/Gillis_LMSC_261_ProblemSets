import csv
import itertools


csv_file = open("numbers.csv", "r")
csv_reader = csv.reader(csv_file)

    # for row in csv_reader:
    #     print(row)

reverse = open('reverse.csv', 'w')
csv_writer = csv.writer(reverse)

for row in csv_reader:
    csv.writer(reverse).writerows(itertools.islice(csv_reader, 0, 50))

reverse.close()

with open('reverse.csv', 'r') as reverseRows:
    for row in reversed(list(csv.reader(reverseRows))):
        # print (', '.join(row))
        print(row[0:])
        
def get_averages(csv):
    row_sums = None
    with open(reverseRows) as file:
        lines = file.readlines()
        rows_of_numbers = [map(float, line.split(',')) for line in lines]
        sums = map(sum, zip(*columns_of_numbers))
        averages = [sum_item / len(lines) for sum_item in sums]
        return averages

def main():
    get_averages(reverseRows)
    print('The average value of row 1 is {0}'.format(averages))

if __name__ == "__main__":
    main()




    
    
    
    
    
    
    
    
    
    # average = 0
    # sum   = 0
    # def rowSum(reverseRows):
    #     for row in reverseRows:
    #         return sum([int(i) for i in row if i.isdigit()]) 
    #         scores = row[1:]
    #         average = 1.0 * sum / len(scores)
    #         print("The average value of row %d is %f", row, average)

    # rowSum(reverseRows)

csv_file.close()


