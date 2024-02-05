#This program prints out the sequence of fibonacci sequences from 0-59 by the user input


def Fibonacci(n):
    if n<= 0:
        print("Incorrect input")
    # First Fibonacci number is 0
    elif n == 1:
        return 0
    # Second Fibonacci number is 1
    elif n == 2:
        return 1
    else:
        return Fibonacci(n-1)+Fibonacci(n-2)
 
# Driver Program
 
def main():
    input_num = int(input("Enter a number: "))
    print(Fibonacci(input_num))

if __name__=="__main__": 
    main() 