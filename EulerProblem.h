/*
 * EulerProblem.h
 *
 *  Created on: Nov 29, 2014
 *      Author: acs
 */

#ifndef EULERPROBLEM_H_
#define EULERPROBLEM_H_

namespace euler {

class EulerProblem {
public:
   EulerProblem();
   virtual ~EulerProblem();
   // Must always implement this for the default solution() computation
   virtual double solution(double) =0;
   // Must always implement this for the self tests with basic asserts
   virtual bool test() =0;
};

} /* namespace euler */

#endif /* EULERPROBLEM_H_ */
