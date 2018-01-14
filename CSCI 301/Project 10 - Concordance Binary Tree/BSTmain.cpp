/* ***************************************************
   Full Name: Prashul Shrestha
   Project #: 10
   Section #: 2
   April 28, 2017.
   
   
   Invariant of the program:
   
   1. A file (.txt) must be present in the location of the main funciton.
   
   Data Structure - Binary Search Tree. 
   A Binary Search Tree (BST) is a tree in which all the nodes follow the
   below-mentioned properties - The left sub-tree of a node has a key less 
   than or equal to its parent node's key. The right sub-tree of a node has 
   a key greater than to its parent node's key.



   ****************************************************
*/



#include <iostream>
#include <fstream>
#include <string.h>
#include "BSTfunctions.cpp"
#include "BST.h"
using namespace std;

int main()
{ 
	Binary_Search BST;       //Class OBject
	//data Memebers
	int count = 1;
    
    Word file;
   
    
    char ch;
	ifstream in_F;
	int index = 0;
	
	cout<<"\n Welcome to the CONCORDANCE program using BINARY SEARCH TREE.\n"<<endl;
	//Opening a File
	in_F.open("content.txt");
	  
    //Getting Each character from the TXT file
     
	in_F.get(ch); 
	
	while( !in_F.eof() )
	{   
	     
	
	    if( ch != ' ' && index < MAX + 1)              //Checking if the ch is space and index is exceding 8 charcters.
	    {   
	        if(isalpha(ch))
	        {   
	           
	        	ch = tolower(ch);
	        	file[index++] = ch;
			}
		
	    }
	    else
		    {
		    	BST.insert(file);
		    	index = 0;
		        for(int i = 0; i < MAX + 1; ++i)         //Setting the char array to be NULL for other characters.
		             file[i] = '\0';
		   	 }
		in_F.get(ch);
	}
	
	in_F.close();
	
	//Printing the list of the Class
	BST.print();
	
	//Printing the distinct length
	cout<<"\nThe File contains " <<BST.bst_length()<<" distinct words."<<endl<<endl;
	
	
	//tO GET THE COUNT OF THE WORD PRESENT IN THE TREE
	BST.Count_of_word();

       
    
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"\nThank you for using the Program. "<<endl;
    cout << " \n Coded By: Prashul Shrestha.";
    
  
	return 0;
}
