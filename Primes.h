/*
 *  Primes.h
 *
 *  Created on: Nov 30, 2014
 *      Author: acs
 */

#ifndef PRIMES_H_
#define PRIMES_H_

#include <vector>
#include "EulerProblem.h"

namespace euler {

class PrimeSummation: public EulerProblem {
public:
   PrimeSummation();
   virtual ~PrimeSummation();
   // Overridden
   virtual bool test();
   virtual double solution(double number);
   // Reusable methods
   // Writes in $primes all primes less than $number
   static void getPrimes(long limit, std::vector<long>& primes);
};


class LargestPrimeFactor: public EulerProblem {
public:
   LargestPrimeFactor();
   virtual ~LargestPrimeFactor();
   // Overridden
   virtual bool test();
   virtual double solution(double number);
   // Reusable methods
   // Checks whether the number is prime
   static bool isPrime(long number);
};

class NthPrimeNumber: public EulerProblem {
public:
   NthPrimeNumber();
   virtual ~NthPrimeNumber();
   // Overridden
   virtual bool test();
   virtual double solution(double number);
};


// Library functions
bool isPrime(long number);
void getPrimes(long limit, std::vector<long>& primes);

} /* namespace euler */

#endif /* PRIMES_H_ */
