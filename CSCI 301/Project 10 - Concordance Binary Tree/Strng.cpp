#include <string.h>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

const int Max = 7;
typedef char Word[Max + 1];



int main(){

    char string[Max + 1];
     char fileacc[Max + 1];
     
    char ch;
	ifstream from_f;
	
	//Opening a File
	from_f.open("content.txt");
	  
    //Sending each string cHAR Array to the Insert Function
    from_f>>string;
   
    
         
	
	while( !from_f.eof() )
	{  strncpy(arr, string, sizeof(arr)); 
      
       int j = 0;
	   for(int index = 0; index < Max + 1; ++index )
        {   
		    
		     if(isalpha(arr[index]))
			 {   
			 	arr[index] = tolower(arr[index]);
    	        fileacc[j++] = arr[index];
    	         
    	      }
    	     
        }
         cout <<"\nFileacc::  ";
        for(int i = 0; i< Max + 1; ++i)
         {   cout<<fileacc[i];
            fileacc[i] ='\0';
        }
       
		from_f>>string;
	}
	
	from_f.close();
}
