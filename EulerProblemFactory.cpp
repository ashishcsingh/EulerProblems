/*
 * EulerProblemFactory.cpp
 *
 *  Created on: Nov 29, 2014
 *      Author: acs
 */

#include "EulerProblemFactory.h"

#include "Primes.h"
#include "Summations.h"

namespace euler {

EulerProblemFactory::EulerProblemFactory() {
   // TODO Auto-generated constructor stub

}

EulerProblemFactory::~EulerProblemFactory() {
   // TODO Auto-generated destructor stub
}

/*
 * Name:        createEulerProblem
 * Description: Factory method to create EulerProblem implementation
 *              Add new entry below for new implementation
 */
EulerProblem *EulerProblemFactory::createEulerProblem(int id) {
   switch(id) {
   case 1:
      return new SumOfAllMultiples();
      break;
   case 3:
      return new LargestPrimeFactor();
      break;
   case 6:
      return new DifferenceOfSquares();
      break;
   case 7:
      return new NthPrimeNumber();
      break;
   case 10:
      return new PrimeSummation();
      break;
   default:
      return nullptr;
   }
}

} /* namespace euler */
