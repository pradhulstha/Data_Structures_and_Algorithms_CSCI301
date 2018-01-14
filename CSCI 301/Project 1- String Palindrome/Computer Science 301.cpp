/* Introduction
   Prashul Shrestha
   13199318
   Section: 2
   Project Number: 1
   
   The following program prompts user of the given sentence by the user is Palindrome or not. */

#include <iostream>
#include <string.h>
#include <string>
using namespace std;

string NewString(char[], int);
string Palindrome(string, char[], int);
void PalCheck(string, string);



int main(){  //variable description
	         string Sentence;
	         string FirstString;
	         string PalString;
	         
	         //prompting the user
	         cout<< " Hello there! "<<endl;
	         cout<< "Today we are going to check whether the ipnutted sentence is Palindromic sentence or not"<< endl<<endl;
	         cout<< " Enter the sentence you want to check"<< endl;
	         cout<<" = ";	
	         
	          char ch;
              char myarray[80];
              cin.get(ch);
              while ( ch >= ' ' )
              { for(int i=0;i<)
                myarray[i]

        cin.get(ch);
      }
	         
	         
	
	        cout<< "You entered : "<< Sentence << endl<<endl;
	         
	        int StringLen;
	        
	        StringLen = Sentence.size(); //checking string length
	        
	        char array[StringLen]; //initializing character array
	         
	        
	        //converting string into char array
	        for(int i=0; i<StringLen; i++)
	        {
	            Sentence[i]= toupper(Sentence[i]);
				array[i]= Sentence[i];
			}
	        
	        cout<< "The Length of the String is : "<<StringLen<<endl<<endl;
	        cout<<"    ************************" << endl << endl;
	        
	        if(StringLen < 80)
			{
	        	FirstString = NewString(array, StringLen);
				PalString= Palindrome(FirstString, array, StringLen);    	    
				PalCheck(FirstString, PalString);
	        	        	
			}
			
			else 
			{
				cout<<"You Entered More than 80 Characters. Please Re-Enter the Sentence."<<endl;
				cout<<"Thank you."<<endl<<endl;
				cout<<"     ************************" << endl << endl;
				main();
			}
	        
	        
	        
			return 0;
	        
}


string NewString(char array[],int StringLen)
{
			 
			 cout<<endl<<endl;
			 
			 //removing characters from the string
			 
			
			int check; 
			char StrArray[StringLen];
			string FirstString;
			
		   for(int i=0; i<StringLen; i++)
		   
		   
		     {
			    check = (int)array[i]; //Stores ASCII Value of the Character
			    
				
				
		   	  if((check>=65 && check<=90 ) || (check>=97 && check<=122))
		   
		        { 
			        
		        	StrArray[i]= array[i];
			        FirstString += StrArray[i]; //Inputs each character as New String.
			        
			    }
			 }
			 
			 
			 cout<< "The Sentence with no Operators = "<< FirstString<<endl;
			 
		
		  return (FirstString);   
		 }
		 
    string Palindrome(string FirstString, char array[], int StringLen)
    {
	        	//Storing the NewString in Character Array.
			int PalLength = FirstString.size();
			 char PalArray[PalLength];
			 string PalString;
			 for(int index=0; index<PalLength; index++)
			 {
			 
			 PalArray[index] = FirstString[index];
		     }
		     
		     //Reversing the String to Check if it is Palindrome or NOT.
		     int RevLength = PalLength-1;
		     
		     for(int index=0; index<PalLength; index++)
			 {
			 
			    PalString += PalArray[RevLength];
			    RevLength--; 
		     }		    
			 
			 
			 
			 cout <<"\n The reveresed sentence is: "<< PalString<< endl<<endl;
			 
     return (PalString);		 
			
    }
    
void PalCheck(string FirstString, string PalString)    
   {
     if(PalString == FirstString)
			{ 
			
			  cout << " The Sentence you inputted is a Palindromic Sentence."<<endl<<endl;
			  cout<<"    ************************" << endl << endl;
			}
		
			else
			{ 
			  
			  cout << " The Sentence you inputted is NOT a Palindromic Sentence."<<endl<<endl;
			  cout<<"    ************************" << endl << endl;
			}
		}
    



