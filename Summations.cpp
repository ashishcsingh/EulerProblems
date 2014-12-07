/*
 * Summations.cpp
 *
 *  Created on: Nov 29, 2014
 *      Author: acs
 */

#include <set>
#include <cassert>
#include <iostream>

#include "Summations.h"

using namespace std;

namespace euler {

/*
 * Name: sumToNum()
 * Description: Compute sum of all numbers till $number
 */
double sumToNum(int number) {
   return SumOfAllMultiples::sumToNum(number);
}

SumOfAllMultiples::SumOfAllMultiples() {
   // TODO Auto-generated constructor stub
}

SumOfAllMultiples::~SumOfAllMultiples() {
   // TODO Auto-generated destructor stub
}


/*
 * Name: sumToNum()
 * Description: Compute sum of all numbers till $number
 */
double SumOfAllMultiples::sumToNum(int number) {
   return number * (number + 1)/2;
}

/*
 * Name: sumOfMultiples()
 * Description: Compute sum of all numbers below $max and multiple of $multiple
 */
double SumOfAllMultiples::sumOfMultiples(int multiple, int max) {
   double countMultiples = max/multiple;
   return multiple * sumToNum(countMultiples);
}

/*
 * Name: solution()
 * Description: Compute sum of multiples of 3 and 5 below $input
 */
double SumOfAllMultiples::solution(double input) {
   double finalSum = 0;

   // Input is not inclusive
   input--;

   // Sum multiples of 3 and 5 below $input
   finalSum += sumOfMultiples(3, input);
   finalSum += sumOfMultiples(5, input);
   // Subtract common multiples of 3 and 5 below $input
   finalSum -= sumOfMultiples(3 * 5, input);

   return finalSum;
}


/*
 * Name: test()
 * Description: Self tests
 */
bool SumOfAllMultiples::test() {
   int input, output;
   bool result;

   input = 10;
   output = solution(input);
   cout<<"SumOfAllMultiples for "<<input<< " : "<<output<<endl;
   assert(output == 23);
   result = output == 23;

   input = 1000;
   output = solution(input);
   cout<<"SumOfAllMultiples for "<<input<< " : "<<output<<endl;

   return result;
}

/*
 * Name:         solution()
 * Description:  Calculate difference in sums of square till N
 */
double DifferenceOfSquares::solution(double input) {
   double sumOfSquares = 0;
   for(long i=1; i<=input; ++i) {
      sumOfSquares += i*i;
   }
   double sum = 0;
   for(long i=1; i<=input; ++i) {
      sum += i;
   }
   return sum*sum - sumOfSquares;
}

/*
 * Name:         solution()
 * Description:  print self test
 */
bool DifferenceOfSquares::test() {
   int input, output;
   bool result;

   input = 10;
   output = solution(input);
   cout<<"DifferenceOfSquares for "<<input<< " : "<<output<<endl;
   assert(output == 2640);
   result = output == 2640;

   input = 100;
   output = solution(input);
   cout<<"DifferenceOfSquares for "<<input<< " : "<<output<<endl;

   return result;
}



} /* namespace euler */
