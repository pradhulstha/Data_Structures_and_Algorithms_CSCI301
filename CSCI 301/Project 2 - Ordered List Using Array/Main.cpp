/* Prashul Shrestha
   Project 2
   Section 2
   31st Jan, 2017 */

/*The main program provides the list of commands to the user using another function called void Print().
 The main program uses the Switch-Case to take in the command entered by the user and calls the function
 from another Project2.cpp file and implement the command. The user can insert items into the bag, remove
 the item from the bag, search item if it is present or not, return the kth element of the bag and merge
 two bags into one. The array of bag items in the main function which can be of no more than size of 3 which
  holds the value in different list according to user to make it easy to call the function using reference. */



#include <iostream>
#include <cstdlib> //provides size_t
#include <iomanip>   //provides setw()
#include <fstream>   
#include <cassert>   
#include <assert.h>  //provides assert()

#include "Functions.cpp"
#include "Class.h"

using namespace std;
using namespace csci301_Bag;

const int BAG_total = 3; // Number of Bags that the program manipulates.
void Print();



int main()
{ 
   char Choice;                //recieve command from user
   int value;                 //each value the user inputs
   int bag, bag1, bag2, bag3; // bag indexes 
   int position;               //position of the item 
   
   Bag b[BAG_total];          //initializing array of Length no of Bag to call bags by reference. 
   
   cout<<"Hello User! Let's implement bag using class."<<endl<<endl;
   Print();
   
   do
   {
   	  cout << "\nPlease enter the Command------>";
   	  cin >> Choice;                                 //letting user input the command
   	  
   	  switch(Choice)  //carryout command
   	  {  	           
   	  	case 'i' : cout <<"Inserting the item into the Bag:" <<endl;
   	  	           cout <<"Enter the Value --->";
			       cin >> value;
				   cout <<"Enter the Bag # : ";
				   cin >> bag; 
   	  	           b[bag].Insert_item( value );
   	  	           b[bag].Sort();
				   break;
				   
		case 'e' : cout<<"Enter the Bag # to make it empty: ";
   	  	           b[bag].Empty_list();
   	  	           break;		   
					
		case 'r' : cout << "Enter the value you want to remove --->";
		           cin >> value;
		           cout << "\n Enter the Bag # : ";
				   cin >> bag; 
		           b[bag].Remove(value);
		           b[bag].Sort();
				   break;
				
	    case 's': cout<<"Enter the Bag # you want the length of: ";
		          cin >> bag;
                  cout << "Bag " << setw(1) << bag << " contains "
                       << setw(1) << b[bag].size() << " items." << endl;
                   break;
                              
		case 'f': {cout<<"Enter the value you want to search for: ";
		          cin>>value;
		          cout<<"Enter the Bag # you want to look in: ";
		          cin >> bag;
		          
		          bool Search = false;
		          
		          Search = b[bag].Value_present(value);		          
				   		               
				   	if (Search==true)	
					   {
					   	cout<<" The Value "<<value<< " you are looking for was found in Bag "<<bag<<endl;
					   	
						 }
					else
					   {
					   	cout<< "Sorry, "<<value	<< " is not present in this Bag # "<<bag<<endl;
						  }	
						  
				    break;		  
				}
						  
		case 'k':{
		 
		          size_t Pos_value;
		          cout<<"Enter the Position of the item: ";
		          cin>> position;	
				  cout<<"Enter the Bag # : ";
				  cin >> bag;
				  Pos_value = b[bag].Value_Search(position);	
				  cout<< "The value in the Position "<<position<< " is "<<setw(1)<<Pos_value<<endl;
				  break;		     
			    }
	    case 'a':  cout << "Enter the items in First Bag : ";
				    cin >> bag1;
				    cout<< "Enter the items in Second Bag :";
				    cin >> bag2;
				    
	                bag3 = bag1 + bag2;
	                b[bag3].Sort();
	                cout<< "Bag"<<setw(1)<< bag3 << ":" << b[bag3]<< endl;
	                break;
	                
	    case 'w': cout << "List of items in the bag: ";
		          cin >> bag;
                  cout << "Bag " << setw(1) << bag << ": " << b[bag] << endl;
                  break;
	                
	    case 'm' : Print();
	               break;
	               
	   }
      }while( Choice != 'q');
	   
	   return EXIT_SUCCESS;

   }
 
 
 void Print()
 {
 	
 	cout << endl;
 	cout << "Enter the Command you the program to ";
	cout << "manipulate " << setw(1) << BAG_total << " bags (multisets)";
	cout << "which are initially empty."<<endl;
	cout << "In the following Commands, Value is any integer, and";
	cout << "bag, bag1, bag2, bag3 are number of bags;"<<endl<<endl;
    cout << "e bag -- Re-Initaialize bag n to be empty"<<endl;
    cout << "i value bag -- Insert the Value to the bag. "<<endl;
	cout << "r value -- Remove the value from the bag. "<< endl;
	cout << "s bag -- To return the size of the bag. "<< endl;
	cout << "f value bag -- To find the searching item in the corresponding Bag."<<endl;
	cout << "k value -- To display the kth element of the Bag."<<endl;
	cout << "a bag, bag -- Merge two bags into the third bag. "<< endl;
	cout << "m -- To see this Menu. " << endl;
	cout << "q -- Quit this program." <<endl;
	cout << "--************************--"<<endl<<endl;
	
	     
 }
