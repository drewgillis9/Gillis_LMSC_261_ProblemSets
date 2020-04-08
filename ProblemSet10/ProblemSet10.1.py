# create numbers list
numbers = [1, 2, 3]

# create letters list
letters = ['a', 'b', 'c']

# define function mergeList with 2 list inputs
def mergeList(numbers, letters):
    # concatenate lists
    merged = letters + numbers
    # next two steps are formatting for alternating elements from lists using slicing
    merged[::2] = letters
    merged[1::2] = numbers
    # make merged elements into string elements in order to manipulate the string. Want to get rid of quotations. 
    merged = ', '.join([str(elem) for elem in merged])
    # syntax for printing the string inside of brackets with no quotations, for the appearance of list.
    print('[%s]' % (merged))

# use function inside of main
def main():
    mergeList(numbers, letters)

# special code seen in slides, otherwise nothing happens
if __name__ == "__main__":
    main()