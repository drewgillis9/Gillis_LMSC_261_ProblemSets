# create user input and save into str
str = input("Input a string with letters and numbers: ")

# define function removeDigit and use str inside
def removeDigit(string):
    # create a new string using commands below and saving the result into 'final'
    final = ''.join([i for i in str if not i.isdigit()])
    # print the new string
    print(final)

# use function inside of main
def main():
    removeDigit(str)

# special code seen in slides, otherwise nothing happens
if __name__ == "__main__":
    main()