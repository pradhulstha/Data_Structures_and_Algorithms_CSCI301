/* FUll Name: Prashul Shrestha
   Section #: 2
   Project #: 7
   Due Date: 03//2017
   
:- This program implements the use of stacvk to find the prime factorization
   of a number and print it in a descending order.
 */  


#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;
const int CAPACITY = 100;

class Stack
{   
  
    
   public:
   	//Data Members
	
	typedef int Item;
	
	
	//Member Functions
	//Stack(){used = 0;};
	void push(Item Entry);
	int pop();
	bool empty(){return used == 0;};
	bool check_prime(int Div);
	size_t length(){return used;};
	void s_print();
	
	private:
		int data[CAPACITY];
		int used;
		
};
	
#endif


