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

class SumOfAllMultiples: public EulerProblem {
protected:
   // Calculate sum of all numbers multiple of $multiple below $max.
   double sumOfMultiples(int multiple, int max);
public:
   SumOfAllMultiples();
   virtual ~SumOfAllMultiples();
   // Implementing EulerProblem interface
   virtual double solution(double input);
   // Self check
   virtual bool test();
   // static for letting other classes consume it
   // Calculate sum till $number starting 1, [n*(n+1)/2]
   static double sumToNum(int number);
};

} /* namespace euler */

#endif /* SUMMATIONS_H_ */
