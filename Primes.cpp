/*
 *  Primes.cpp
 *
 *  Created on: Nov 30, 2014
 *      Author: acs
 */

#include <cmath>
#include <cassert>
#include <iostream>
#include "Primes.h"


using namespace std;

namespace euler {

PrimeSummation::PrimeSummation() {
   // TODO Auto-generated constructor stub

}

PrimeSummation::~PrimeSummation() {
   // TODO Auto-generated destructor stub
}

/*
 * Name:        getPrimes()
 * Description: Stores primes in $primes
 */
void getPrimes(long limit, std::vector<long>& primes) {
   PrimeSummation::getPrimes(limit, primes);
}


/*
 * Name:        isPrime()
 * Description: Checks if prime in $number
 */
bool isPrime(long number) {
   return LargestPrimeFactor::isPrime(number);
}

/*
 * Name:        test()
 * Description: Self tests
 */
bool PrimeSummation::test()
{
   long input, output;
   bool result;

   input = 10;
   output = solution(input);
   cout<<"PrimeSummation for "<<input<< " : "<<output<<endl;
   assert(output == 17);
   result = output == 17;

   input = 2000000;
   output = solution(input);
   cout<<"PrimeSummation for "<<input<< " : "<<output<<endl;

   return result;
}

/*
 * Name:        solution()
 * Description: Adds all the primes less than $number
 */
double PrimeSummation::solution(double number) {
   vector<long> primes;
   getPrimes(number, primes);
   double sum = 0;
   for(long i = 0; i<primes.size(); ++i) {
      sum += primes[i];
   }
   return sum;
}

/*
 * Name:        getPrimes()
 * Description: Sieve of Eratosthenes implementation to find primes
 *              than $limit and stores in the passed $primes
 */
void PrimeSummation::getPrimes(long limit, vector<long>& primes) {
   long upperBoundSqRoot = (long) sqrt(limit);
   vector<bool> dividable(limit, false);
   for (long i=2; i<=upperBoundSqRoot; ++i) {
      if (!dividable[i]) {
         for (long j=i*i; j<=limit; j+=i) {
            dividable[j] = true;
         }
      }
   }
   for(long i=2; i<=limit; ++i) {
      if(!dividable[i]) {
         primes.push_back(i);
      }
   }
}

/*
 * Name:        solution()
 * Description: finds the largest prime factor for $number
 */
double LargestPrimeFactor::solution(double number) {
   long longNumber = (long) number;
   long upperBound = (long) sqrt(longNumber);
   for (long factor = upperBound; factor >= 2; --factor) {
      if(isPrime(factor) && longNumber%factor == 0) {
         return factor;
      }
   }
   return -1;
}

/*
 * Name:        isPrime()
 * Description: Checks whether the number is prime
 */
bool LargestPrimeFactor::isPrime(long number) {
   long upperBound = (long) sqrt(number);
   // If all the numbers less than sqrt is not divisible
   for (long factor = 2; factor <= upperBound; ++factor) {
      if (number % factor == 0) {
         return false;
      }
   }
   return true;
}

LargestPrimeFactor::LargestPrimeFactor() {
}

LargestPrimeFactor::~LargestPrimeFactor() {
}

/*
 * Name:        test()
 * Description: Self tests
 */
bool LargestPrimeFactor::test()
{
   long input, output;
   bool result;

   input = 13195;
   output = solution(input);
   cout<<"LargestPrimeFactor for "<<input<< " : "<<output<<endl;
   assert(output == 29);
   result = output == 29;

   input = 600851475143;
   output = solution(input);
   cout<<"LargestPrimeFactor for "<<input<< " : "<<output<<endl;

   return result;
}


NthPrimeNumber::NthPrimeNumber() {
}

NthPrimeNumber::~NthPrimeNumber() {
}

/*
 * Name:        solution()
 * Description: finds the Nth $number prime number
 */
double NthPrimeNumber::solution(double number) {
   long nthPrime = 2;
   long count = 1;
   while (count < number) {
      if(isPrime(++nthPrime)) {
         ++count;
      }
   }
   return nthPrime;
}

/*
 * Name:        test()
 * Description: Self tests
 */
bool NthPrimeNumber::test()
{
   long input, output;
   bool result;

   input = 6;
   output = solution(input);
   cout<<"NthPrimeNumber for "<<input<< " : "<<output<<endl;
   assert(output == 13);
   result = output == 13;

   input = 10001;
   output = solution(input);
   cout<<"NthPrimeNumber for "<<input<< " : "<<output<<endl;

   return result;
}

} /* namespace euler */
