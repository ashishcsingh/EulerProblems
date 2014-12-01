/*
 * EulerProblemFactory.h
 *
 *  Created on: Nov 29, 2014
 *      Author: acs
 */

#ifndef EULERPROBLEMFACTORY_H_
#define EULERPROBLEMFACTORY_H_

#include <cstddef>
#include "EulerProblem.h"

namespace euler {

class EulerProblemFactory {
public:
   EulerProblemFactory();
   static EulerProblem *createEulerProblem(int id);
   virtual ~EulerProblemFactory();
};

} /* namespace euler */

#endif /* EULERPROBLEMFACTORY_H_ */
