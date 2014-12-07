Euler Problem implementation
============================

Initial Euler problem implementation with 5 problems (IDs: 1, 3, 6, 7, 10).
Ids are serial # assigned as per website: https://projecteuler.net/problems

To add more implement EulerProblem interface with these 2 pure virtual methods
1. double solution(double)  // solves the problem
2. bool test()              // self tests while logging stdout

Details about classes/Files
===========================
Primes.h/cpp has LargestPrimeFactor (3), PrimeSummation (10) and NthPrimeNumber(7) solved.
Summations.h/cpp has SummationOfAllMultiples (1) and DifferenceOfSquares(6) solved.
EulerProblem.h/cpp has Euler interface defined
EulerProblemFactory.h/cpp has Factory implementation defined.
MainApp.cpp has the main() that calls EulerProblemFactory with id.

Execute
=======
1. make
2. ./Euler

Output
======
SumOfAllMultiples for 10 : 23
SumOfAllMultiples for 1000 : 233168
Euler problem id: 1 : passed
----------------
LargestPrimeFactor for 13195 : 29
LargestPrimeFactor for 600851475143 : 6857
Euler problem id: 3 : passed
----------------
DifferenceOfSquares for 10 : 2640
DifferenceOfSquares for 100 : 25164150
Euler problem id: 6 : passed
----------------
NthPrimeNumber for 6 : 13
NthPrimeNumber for 10001 : 104743
Euler problem id: 7 : passed
----------------
PrimeSummation for 10 : 17
PrimeSummation for 2000000 : 142913828922
Euler problem id: 10 : passed
----------------

