/* Introduction
   Prashul Shrestha
   13199318
   Section: 2
   Project Number: 1
   
   The following program prompts user of the given sentence by the user is Palindrome or not. */
   
   
/* This Program takes String Sentence from the user and then saves it into Character Array.
   The size is calculated using Stringname.size() and if statement is executed for checking maximum characters limit of 80.
   If it's true the Call Function is Executed or the main() fucntion is called by itself.
   The Character ARRAY is passed by reference to first function where the extra characters are removed and saved into FirstString.
   Then, the second call is ececuted in main() where the FirstString and char array[] is passed by reference. 
   In this function, the FirstString is reversed by saving in a char array[].
   In the main(), thirs execution occurs, where the third fucntion CheckPal() is called to check the Given Sentence and Reversed String
   is same or not. */

#include <iostream>
#include <string.h>
#include <string>
using namespace std;

string NewString(char[], int);
//Removes the Extra Character and Stores the Sentence into the Character Array
//Pre-Condition: If the Character is Minimum 80 characters
//Post-Condition: Stores the Extracted Alphabet into new String.

string Palindrome(string, char[], int);
//Reverses the new string and stores into another string.
//Pre-Conditin: Sentence must not exceed 80 characters

void PalCheck(string, string);
//Checks the original String with reversed string.
//Post-Condition: Prints the output after the if-statement exceutes. 



int main()
{  //variable description
	         string Sentence;
	         string FirstString;
	         string PalString;
	         
	         //prompting the user
	         cout<< " Hello there! "<<endl;
	         cout<< "Today we are going to check whether the ipnutted sentence is Palindromic sentence or not"<< endl<<endl;
	         cout<< " Enter the sentence you want to check"<< endl;
	         cout<<" = ";	
	         
	         getline(cin, Sentence); //Inputting the Sentence from the user.
	         
	         
	
	        cout<<"\nYou entered : "<< Sentence << endl<<endl;
	         
	        int StringLen;
	        
	        StringLen = Sentence.size(); //checking string length
	        
	        char array[StringLen]; //initializing character array
	         
	        
	        //converting string into character array
	        for(int i=0; i<StringLen; i++)
	        {
	            Sentence[i]= toupper(Sentence[i]);
				array[i]= Sentence[i];
			}
	        
	        cout<< "The Length of the String is : "<<StringLen<<endl<<endl; //outputting the length of the sentence.
	        cout<<"    ************************" << endl << endl;
	        
	        if(StringLen < 80)  //Checking if the Maximum String Length = 80.
			{
	        	FirstString = NewString(array, StringLen); //Passing of Character Array
				PalString= Palindrome(FirstString, array, StringLen);   //Passing the String and the Character Array.	    
				PalCheck(FirstString, PalString);  //PAssing the two String to the Palindrome Function
	        	        	
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
			    
				
				
		   	  if((check>=65 && check<=90 ) || (check>=97 && check<=122)) //Checking the ASCII Value of the Character.
		   
		        { 
			        
		        	StrArray[i]= array[i];
			        FirstString += StrArray[i]; //Inputs each character into New String.
			        
			    }
			 }
			 
			 
			 cout<< "The Sentence with no Operators = "<< FirstString<<endl; //Prompting the user the removal of characters from array.
			 
		
		  return (FirstString);   
	 }
		 
string Palindrome(string FirstString, char array[], int StringLen)
    {
	      //Storing the NewString in Character Array.
	      
		   	int PalLength = FirstString.size();  //checking the length of characters removed string.
			char PalArray[PalLength];            //initializing new array to reverse the string.
			string PalString;
			
			
			 for(int index=0; index<PalLength; index++)
			 {
			 
			 PalArray[index] = FirstString[index];
			 
		     }
		     
		   //Reversing the String to Check if it is Palindrome or NOT.
		     int RevLength = PalLength-1;
		     
		     for(int index=0; index<PalLength; index++)
			 {
			 
			    PalString += PalArray[RevLength]; //storing each character in a reversed order.
			    RevLength--; 
		     }		    
			 
			 
			 
			 cout <<"\n The reveresed sentence is: "<< PalString<< endl<<endl;
			 
     return (PalString);		 
			
    }
    
void PalCheck(string FirstString, string PalString)    
   {
     if(PalString == FirstString) //Comparing the two string to check if they are same.
			{ 
			
			  cout << " The Sentence you inputted is a Palindromic Sentence."<<endl<<endl; //Output sentence.
			  cout<<"    ************************" << endl << endl;
			}
		
			else
			{ 
			  
			  cout << " The Sentence you inputted is NOT a Palindromic Sentence."<<endl<<endl;
			  cout<<"    ************************" << endl << endl;
			}
	}
    



