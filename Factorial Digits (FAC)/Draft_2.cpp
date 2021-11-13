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

// Function to find n!
unsigned long long int NFactorial(unsigned long long int n, unsigned long long int placeholder)	{   // num = variable to find the factorial of
                                            // placeholder = 1
  placeholder = 1;
  for (unsigned long long int i=1 ; i <= n; i++) {
		 placeholder = placeholder * i;
	}
    return placeholder;
}

// Function to find the sum of n! digits
 unsigned long long int SumOfNDigits(unsigned long long int sum, unsigned long long int factorial, unsigned long long int modulus) {
  modulus = 0;      // zero out value
    while(factorial > 0) {    
        modulus = factorial % 10;    
        sum = sum + modulus;    
        factorial = factorial / 10;    
    }    
   return sum;    // returns the sum of n digits
 }


// Function to find the number of trailing zeros of n!
unsigned long long int TralingZeros(unsigned long long int m){
    unsigned long long int trailingzeros = 0;  // clear value
    unsigned long long int y; // placeholder
      while (m > 0) {
      y = m / 10;
      y = y * 10;
        if (m == y) {
             trailingzeros++;  // iterate digit counter
        }
        else {
            return trailingzeros;
        }
      m = m / 10;
    }
  return trailingzeros;
}

 
// Function to find the number of zeros in n!
unsigned long long int NumOfZeros(unsigned long long int m){
    unsigned long long int numofzeros = 0;  // clear value
    unsigned long long int y; // placeholder
      while (m > 0) {
      y = m / 10;
      y = y * 10;
        if (m == y) {
             numofzeros++;  // iterate digit counter
        }
      m = m / 10;
    }
  return numofzeros;
}
// }

// EXTRA CREDIT
// Function to find integer y, where y is the number of the digits in n!
unsigned long long int NumOfDigitsInN(unsigned long long int n) {
    unsigned long long int i = 0;
  while (n > 0) {
      n = n / 10;
      ++i;  // iterate digit counter
  }
  return i;
}

int main() {
    unsigned long long int n; // variable to find the factorial of
    unsigned long long int m; // n!
    unsigned long long int trailingzeros; // the number of trailing zeros in n
    unsigned long long int sum = 0; // the sum of digits in n!
    unsigned long long int placeholder; // i'm just a placeholder value
    unsigned long long int x; // number of zeros in n!
    unsigned long long int y; // number of digits in n!

   cout << "Choose an integer n, where  0 ≤ n ≤ 100 (actually only calculates up to 65!)" << endl;
   cin >> n ;    // Input: user chooses integer n, where 0≤n≤100
    if ( (n<0) && (n>100) ) {
      cout << "That number is invalid, please choose a number above zero but below one hundred" << endl;
      cin >> n ;    // Input: user chooses integer n, where 0≤n≤100
    }
   m = NFactorial(n, placeholder);    // m = n!
   cout << n << "! is... " << m << endl;
   sum = SumOfNDigits(sum, m, placeholder);
   cout << "The sum of the digits in " << n << "! is... " << sum << endl;
   trailingzeros = TralingZeros(m);
   cout << "The number of trailingzeros 0's in " << n << "! is ... " << trailingzeros << endl;    // Output: integer x, where x is the number of the zeros in n!
   x = NumOfZeros(m);
   cout << "The number of zeros in " << n << "! is... " << x << endl;
   y = NumOfDigitsInN(m);
   cout << "The number of digits in " << n << "! is ... " << y << endl;    // EXTRA CREDIT Output
   
   return 0;
}
