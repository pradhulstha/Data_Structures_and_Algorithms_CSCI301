#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/* Recursion is a programming technique in which a function calls itself. 
   Recursion is another way of implementing repetitive computations of associating loops.
   It is more efficient than loops but, the time consumption may not vary. 
   In recursion, the function is called to solve a problem, a recursive function passes a 
   smaller version (or versions) of the problem to another instance (or other instances) of itself,
   then uses the results returned by the recursive call or calls to build a solution to the original problem.
   It can be used to find the Palindrome words, check the value present in an array, and so on.
	
*/

/* int GCD() 
   pre-condition = values must be passed to the function
   post-condition = the number must be greater than 1 or 0 and integer must be passed.
   
   int is_Palindrome() 
   pre-condition = the array must not be empty
   post-condition = bool value must be returned 
   
   int Prime_fact()
   post-conidtion = the number must be greater than 1 and return the factors.  
    
	
   */


int pal = 1;
int array[50];


int GCD(int entry, int entry2)
{   int m = entry;
    int n = entry2;
    
	if (m == 0 || m == 1)
	{
		cout<< "Enter # greater than 1 or 0"<<endl;
	}
	
	else if (m > n)
	{
		GCD(m-n, n);
	}
	
	else if(m < n)
	{
		GCD(m, n-m);
		
	}
	
	else if( m == n)
	{
	return m;
		
	}
}

int is_Palindrome(char array[], int Length, int first, int last)
{

		if(last == 0 )
     	{   
	    cout<<"The array is empty"<<endl;
	   
 	    }     
	else if(first == last && array[first]==array[last])                      //to check if the array comes to end
	{
		
		return pal;
	 }	   	
        	
	else if(array[first] == array[last])                                    //checking each character
	{
		    
	         is_Palindrome(array, Length, first+1, last-1 );
	         
	}
	
	else 
	{	 	
	    
		pal = 2;
	
		return pal; 
	} 
 
 return pal;	  
}


void Pal()
{
	 char ch;
	            string sentence; 
                int arr_length = 0, str_length;
              
                char array[80];                                           //initialing the character array
                int i = 0;
                cout<<" Enter the string you want to check for Palindrome--->";
                
                getline(cin,sentence);
              
                str_length = sentence.size();                                  //getting the length of the string
               
	          
	          for(int j = 0; j < str_length; ++j)
	          {
			     ch = sentence.at(j);                                        //getting each character from the string
                 if (isalpha(ch))                                            //checking if the ch is alphabet or not
			      {
               	
                     
	             
	                 	ch = toupper(ch);                                   //converting the alphabet to Upper-Case
	   	
	                 	array[i] = ch;                                      //Inserting the characters into the array
	                 
	                    ++i;	 	  
	                    ++arr_length;                                       //checking the characters being inputted into the array
	              
	               }
              
               }
              
              
            
              
                int pal;
			    int first = 0;
            	int last = arr_length - 1;
                pal = is_Palindrome(array, str_length, first, last);          //calling the function by value
                
                
				 
				 if(pal == 1 )                                            //checking if the bool is true or false to cout the statement
				 {
				 	cout<< "The String is Palindrome. "<<endl;
				 	
				 }
				 else{
				       cout<< "The string is not Palindrome."<<endl;
                 
  			          }
	             
	             cout<<"*-----------------------*"<<endl;
}






/*int Prime_fact(int array_prime, int length, int prime, int div)
{
	if (prime == 0 || prime == 1)
	{
		cout<< "Enter greater value."<<endl;
	}
	else if ( prime % div == 0)
	{ int i = 0;
		Prime_fact((n/2), m);
	
		array[i] = m;
		++i;
	}
	else if (m < (n/2))
	{
	 Prime_fact(n, ++m);
    }
    
}*/
int main()

{   //Calling Function to output the Greatest Common Divisor of the user given number.

    char command; 
    
    cout    << "  Today, we are going to find the GCD, Check Palindrome String and Prime Factorization of a number. "<<endl<<endl;
    cout    << "  Type 'g' -->get the GCD of two number. "<<endl;
    cout    << "  Type 'p' --> check if the String is Palindrome."<<endl;
	cout	<< "  Type 'f' --> get Prime Factorization of the number."<<endl;
	cout    << "  Type 'm' --> diplay the menu."<<endl;
	cout	<< "  Type 'q' --> quit the program. "<<endl;
	cout	<< "  Thank you."<<endl<<endl;
		  
	
	

do
{ 
    cout<< "Enter the command :";
	cin >> command;
	switch(command)
	{
	 case 'g':{
	             int entry;
                 int entry2, Value;   //initializing to store to values from the user
                 
                 cout<<"Let's get the Greatest Common Divisor of two #'"<< endl;
                 cout << " Please, Enter the 1st # : ";
                 cin >> entry;                                              //storing the first value from the user
    
	             cout <<"Please, Enter the 2nd # :";
	             cin >> entry2;                                             //storing the second value from the user
	             
                 Value = GCD(entry, entry2);                                //calling the function by call by reference
                 cout<< " The Greatest Common Divisor for :" <<endl;
		         cout<< " GCD"<< "( " << entry << ","<< entry2 << " )" << "= " << Value <<endl<<endl;
		         cout<<"*-----------------------*"<<endl;
                 break;
	            
                 }
//Calling the Function to check if the Input String is PALINDROME. 
   case 'p':  {
                Pal();
              	
				 break;
               }



	//Calling Function to Get the Prime Factorization of a Number.
	
/*	case 3:{ int prime;
	         
	         
	         cout<< "Enter the # :";
	         cin >> prime;
	         int div = 2;
	         Prime_Fact(array_prime, 50, prime, div);   
				
      		break;

           }*/
    case 'm': main();
	          break; 
			        
   
   }
}while(command != 'q');
	return 0;
}
