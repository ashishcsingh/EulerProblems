/*
 * Summations.h
 *
 *  Created on: Nov 29, 2014
 *      Author: acs
 */

#ifndef SUMMATIONS_H_
#define SUMMATIONS_H_

#include "EulerProblem.h"

namespace euler {

// Multiples of 3 and 5
class SumOfAllMultiples: public EulerProblem {
protected:
   // Calculate sum of all numbers multiple of $multiple below $max.
   double sumOfMultiples(int multiple, int max);
public:
   virtual ~SumOfAllMultiples();
   // Implementing EulerProblem interface
   virtual double solution(double input);
   // Self check
   virtual bool test();
   // static for letting other classes consume it
   // Calculate sum till $number starting 1, [n*(n+1)/2]
   static double sumToNum(long number);
};

// Sum square difference
class DifferenceOfSquares: public EulerProblem {
public:
   virtual ~DifferenceOfSquares();
   virtual bool test();
   virtual double solution(double input);
   // Calculate sum of squares  (2$i + 1)($i + 1)*$i/6
   static long sumOfSquares(long numer);
};

// Calculate sum till $number starting 1, [n*(n+1)/2]
long sumToNum(long number);
// Calculate of squares till $number
long sumOfSquares(long number);

} /* namespace euler */

#endif /* SUMMATIONS_H_ */
