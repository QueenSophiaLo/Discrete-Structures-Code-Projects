Project 3: Integer Partitions [INT]

Set Up: Let p(n) represent the number of different ways in which coins can be separated into piles.
For example, five coins can be separated into piles in exactly seven different ways, so p(5)=7.
Notice the piles are always grouped largest to smallest, left to right.

OOOOO                         ( 5 = 5 )

OOOO   O                      ( 5 = 4+1 )

OOO   OO                      ( 5 = 3+2 )

OOO   O   O                   ( 5 = 3+1+1 )

OO   OO   O                   ( 5 = 2+2+1 )

OO   O   O   O                ( 5 = 2+1+1+1 )

O   O   O   O   O             ( 5 = 1+1+1+1+1 )

Directions: Compute p(n) for 1≤n≤10.  Allow the user to choose integer n.
Use a recursive formula to calculate p(n).

Input: integer n, the number of coins (ie: n=5)

Output: integer p(n), the number of ways that the coins can be separated into piles (ie: p(5)=7)

Extra Credit: allow n>10

Warning: Don't use the asymptotic expression; instead, there exist several recursive formulas (where you treat p(n) as a sequence).  Hint: Stirling numbers.

Comment: The general formula(s) for this idea are pretty complex, but you're only asked to compute the values up to n=10.  In those cases, the formula isn't too complex, and it just uses information we've covered in class (sequences & counting). 

