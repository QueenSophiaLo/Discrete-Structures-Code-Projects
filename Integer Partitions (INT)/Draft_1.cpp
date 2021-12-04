// Sophia Godfrey
// Project 3: Integer Partitions (INT)
// C++ Code

// Directions: Let p(n) represent the number of different ways in which coins can be separated into piles
// Compute p(n) for 1≤n≤10.
// Allow the user to choose integer n. Use a recursive formula to calculate p(n).

// Example: five coins can be separated into piles in exactly seven different ways, so p(5)=7
// Note: the piles are always grouped largest to smallest, left to right.
// OOOOO ( 5 = 5 )
// OOOO O ( 5 = 4+1 )
// OOO OO ( 5 = 3+2 )
// OOO O O ( 5 = 3+1+1 )
// OO OO O ( 5 = 2+2+1 )
// OO O O O ( 5 = 2+1+1+1 )
// O O O O O ( 5 = 1+1+1+1+1 )

// Extra Credit: allow n > 10

#include <iostream>
using namespace std;

int NumberOfPiles(int n) {
    int p[n]; // array created to store values
    int m = 0; // index of last element
    p[m] = n; // initialize value
    int i = 0; // counter
    
while (true) {
    i++;    // increment counter to include current partition
            // generate the next partition

    int remaining_partitions = 0;
    while (m >= 0 && p[m] == 1) {   // loop finds the rightmost non-one value in the array
    remaining_partitions += p[m];   // updates the number of partitons remaining
    m--;    // decrements index
    }

    if (m < 0)  // when m < 0, all the values are 1 (no remaining partitons)
    break;

    p[m]--; // decrement the array value p[m] 
    remaining_partitions++; // increment number of remaining partitions

    while (remaining_partitions > p[m]) { // when the nunber of partitions remaining is greater than the array length
    p[m + 1] = p[m];    // change position in array
    remaining_partitions = remaining_partitions - p[m];
    m++;    // increment position
    }

    p[m + 1] = remaining_partitions; // Copy remaining_partitions to next position
    m++;    // increment position
    }
return i;
}

int main() {
    int n=0;  // integer n, the number of coins

    cout << "Let p(n) represent the number of different ways in which coins can be separated into piles." << endl;
    cout << "Choose any integer n for which you want to calculate p(n): ";   // User chooses the value
    cin >> n ;  // Input: integer n, the number of coins
    cout << "p(" << n << ")" << " : " << NumberOfPiles(n) << endl; // Output: integer p(n)
    return 0;
}
