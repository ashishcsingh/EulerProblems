/*
 * MainApp.cpp
 *
 *  Created on: Nov 29, 2014
 *      Author: acs
 */

#include <iostream>

#include "EulerProblemFactory.h"

using namespace std;

/*
 * Name:        testEulerProblem
 * Description: Reporting function for Euler problem, it creates Euler Problem
 *              using Factory methods by passing id.
 */
void testEulerProblem(int id) {
   using namespace euler;
   unique_ptr<EulerProblem> problem(EulerProblemFactory::createEulerProblem(id));
   if(!problem.get()) {
      cout<<"Euler problem id: "<<id<<" : not implemented."<<endl;
   }

   if(problem->test()) {
      cout<< "Euler problem id: "<<id<<" : passed"<<endl;
   } else {
      cout<< "Euler problem id: "<<id<<" : failed"<<endl;
   }
   cout<<"----------------"<<endl;
}

int main()
{
   // EulerProblem tests with id
   testEulerProblem(1);
   testEulerProblem(3);
   testEulerProblem(10);
}
