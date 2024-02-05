/*
Author: Zuhayer Tashin
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/



#include <iostream>
#include <array>
using namespace std;

int main(){


// make an array
int fib[60];
int fib_size = end(fib)-begin(fib); // Finds the number of elements in the array

fib[0] = 0;
fib[1] = 1;
// first two terms are given
cout << fib[0] << endl; // prints out the first fibonacci number
cout << fib[1] << endl; // prints out the second fibonacci number

// and all the following ones can be computed iteratively as
 for(int i = 2; i < fib_size-2; i++){
   
    fib[i] = fib[i-1] + fib[i-2];
    cout << fib[i] << endl;  // prints fib[i] from the third to last term  of the fibonacci sequence


 }

}