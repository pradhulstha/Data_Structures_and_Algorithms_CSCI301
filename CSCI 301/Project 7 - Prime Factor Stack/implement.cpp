#include <iostream>
#include <string.h>
#include <assert.h>
#include <cstdlib>
#include "header.h"
using namespace std;


void Stack::push(Item Entry)
{
	 data[used] = Entry;
	 ++used;
	
}

Stack::Item Stack::pop()
{
	Item popped;
	
	popped = data[used];
	--used;
   
	return popped;
}



bool Stack::check_prime(int Div)
{ 
 bool check = true;

for(int j = 2; j< (Div/2); ++j)
{	if( Div % j == 0)
	{ 
	  check = false;
	}
}
	return check;
}
 

void Stack::s_print() 
{  int popped;
    
   //assert(used < CAPACITY);
  for(int i = used; i >= 0; --i)
  {  
    popped = pop();
	cout << popped <<" * ";
  }
  
}
