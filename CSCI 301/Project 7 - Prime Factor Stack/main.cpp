#include <iostream>
#include <string.h>
#include <assert.h>
#include "header.h"
#include "implement.cpp"

using namespace std;

int main()
{
	cout << " Hello! Let's find the Prime Factors of a Number implementing stack."<<endl;
	cout << endl;
	

	//Data Members
	Stack s;
	int prime;
	 
	do{
    cout<<endl<<endl;
	cout << " Enter the Number (0 to stop) : ";
	cin >> prime;
	cout<< endl<< endl;
	int i = 2;
	
     do
     { 
        
     	if(prime % i == 0)
     	{
     		 if(!s.check_prime(i))
     		 {
     		 	s.push(i);
     		 	
			  }
			 prime = (prime / i);
		}
     	 else	
     	    ++i;	
     		
     
	s.push(prime);	
	 }while( i < prime/2);
    
    
	 //cout<< "Check this";
	//if(s.empty())
	
	s.s_print();
	
   }while(prime != 0);
    	
	return EXIT_SUCCESS;
	

	
	
}
