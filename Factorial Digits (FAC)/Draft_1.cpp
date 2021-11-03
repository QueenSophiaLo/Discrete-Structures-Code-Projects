


https://scanftree.com/programs/cpp/program-to-find-factorial-of-number-in-c/
redo the code lol.... look at this website






// Sophia Godfrey
// Project 2: Factorial Digits [FAC]
// C++ code

// Directions: Given a factorial n!
// Find the sum of its digits, and the number of trailing zeros (ie: the number of zeros at the end of the factorial). 

// Example: Consider the factorial:  5! = 5x4x3x2x1 = 120.  The sum of its digits is 1+2+0 = 3, and the number of zeros at the end of 5! = 120 is 1.  Then here, x = 1 and y = 3.

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

int n; // variable to find the factorial of
int m; // n!
int x; // the number of zeros in n
int y; // the sum of digits in n!

// Function to find n!
int NFactorial(int n1, int g)	{
  cout << n1 << endl;   // CHANGEME AFTER TESTS
  for (int i=1 ; i <= num; i++) {
		 g = g * i;
    cout << n1 << endl;   // CHANGEME AFTER TESTS
	}
  return n1;    // returns the value of n!
}

// Function to find the sum of n! digits
int SumOfNDigits(int n1, int g, int n2) {
  n2 = n1;
  cout << n2 << endl;
  for (int i=1 ; i <= num; i++) {
		n2 = n2 + n1;
    n1 = n1 * i;
    cout << n1 << endl;   // CHANGEME AFTER TESTS
    cout << n2 << endl;   // CHNAGEME AFTER TESTS
	}
  return n2;    // returns the sum of n digits
}

  }

https://stackoverflow.com/questions/45109060/finding-number-of-trailing-zeroes-in-a-number
stack overflow help for finding the number of trailing zeros :)


// Function to find the number of trailing zeros of n!
int TralingZeros(){
  
}


https://www.javatpoint.com/sum-of-digits-program-in-cpp
sum of digits in a number help page

  
// EXTRA CREDIT
// Function to find integer y, where y is the sum of the digits in n!
int SumOfDigitsInN() {
  
}

int main() {
   cout << "Choose an integer n, where  0 ≤ n ≤ 100" << endl;
   cin >> n ;    // Input: user chooses integer n, where 0≤n≤100
    if ( (n<0) && (n>100) ) {
      cout << "That number is invalid, please choose a number above zero but below one hundred" << endl;
      cin >> n ;    // Input: user chooses integer n, where 0≤n≤100
    }
   m = NFactorial(n);    // m = n!
   cout << n << "! is... " << m << endl;


   cout << "The number of 0's in " << n << "! is ... " << x << endl;    // Output: integer x, where x is the number of the zeros in n!
   return 0;
}  
