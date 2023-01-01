##the yes_no function takes a string that is a question and determines if the person's
##response to it is either yes or no

def yes_no(querry):
    ans = input(querry)
    while (ans != 'yes') and (ans != 'no'):                             ##determines if the input is not (yes or no)
        print(ans, "is invalid input. Please enter 'yes' or 'no'")
        ans = input(querry)
    return ans                                                          ##returns ans when the it is yes or no

def main():
    question = 'Does this function work(yes/no)?\n'
    answer = yes_no(question)                       ##takes the return value of the yes_no
                                                    ##function and assigns it to answer
    if answer == 'yes':
        print('good')

main()
