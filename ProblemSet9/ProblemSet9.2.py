# used the commebnted code from 6.2 to help here. changed into python syntax and language

# int main(){
#     int stacks, j;
#     for(stacks = 0; stacks < 8; stacks++){
#         for(j = 0; j <= stacks; j++){
#             printf("#");
#         }
#         printf("\n");
#     }
# }

# naming int variable that holds user input
user_input = int(input("Height: "))

# creating range from 1 - user_input
for stacks in range(1, user_input + 1):
    # setting numerical boundaries
    if user_input >= 1 and user_input <= 8:
        for j in range(stacks):
            print("#", end='')
        print('\n', end='')

# creating error message for user_input outside of boundaries
if user_input >= 9 or user_input <= 0:
    print("Error, enter number between 1 and 8.")

    

