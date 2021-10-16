// Sophia Godfrey
// Project 1: The Greatest Common Divisor [GCD]
// C++ code

// Directions: Implement the Euclidean Algorithm to compute the greatest common divisor of any two integers.
// These two integers should be able to be positive, negative, zero, or any combination thereof.
// (Hint: be careful when dealing with zero and/or negative numbers.)

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

int a;
int a1;     // placeholder value for a (a without abs)
int b;
int b1;     // placeholder value for b (b without abs)
int d;
int u;
int v;

bool NumberSign(int firstnum1, int secondnum1){
  if ( (firstnum1>=1) && (secondnum1>=1) ) {
    return true;    // both a and b are positive
  }
  else {
    return false;  // either a or b is zero
  }
}

bool ANumberIsZero(int firstnum2, int secondnum2){
    if ( (firstnum2 == 0) || (secondnum2 == 0) ) {
        return 1;
        }
    else {
        return 0;
    }
}

int FindGCD(int firstnum3, int secondnum3, int thirdnum3){
    while ((firstnum3 % secondnum3) > 0)  {
    thirdnum3 = firstnum3 % secondnum3;
    firstnum3 = secondnum3;
    secondnum3 = thirdnum3;
    }
  return thirdnum3;
}

// Extra Credit Extended Euclidean Algo
int BackwardsSub(int a, int b, int& u, int& v) {
    if (b == 0) {
        u = 1;
        v = 0;
        return a;
    }
    int u1;
    int v1;
    int d = BackwardsSub(b, a % b, u1, v1);
    u = v1;
    v = u1 - v1 * (a / b);
    return d;
}

void OutputResults(int a1, int b1, int a, int b, int thirdnum, int fourthnum, int fifthnum) {
    // Output: integer d, which is the gcd of the two integers inputted by the user
    cout << "GCD(" << a1 << "," << b1 << ") = " << thirdnum << endl;
    
    // Extra Credit:
    cout << "Using backwards subsitution we can find the linear combination of the 2 given integers which sums to their gcd" << endl;
    cout << "au + bv = d" << endl;
    cout << "Where u = " << fourthnum << " and v = " << fifthnum << endl;
    cout << "So... " << a << "(" << fourthnum << ")" << " + " << b << "(" << fifthnum << ")" << " = " << thirdnum << endl;
}


int main() {
    cout << "Enter two numbers to find the GCD between them:" << endl;
    cin >> a >> b;      // Input: user inputs two integers a and b
    a1 = a;
    b1 = b;
    
        if ( ANumberIsZero(a,b) == true ) {     // at least one number is zero
            cout << "GCD(" << a1 << "," << b1 << ") = DNE" << endl;
        }
        else {      // get the absolute value of both inputs
        a = abs(a);
        b = abs(b);
        }
        
        if (NumberSign(a,b) == true) {  // both a and b are positive
            d = FindGCD(a,b,d);   // Finds the GCD
            BackwardsSub(a,b,u,v);    // Performs backwards subsitution
            OutputResults(a1,b1,a,b,d,u,v);   // displays all values
        }
    
    return 0;
}



