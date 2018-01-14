#ifndef BST_H
#define BST_H
#include <cstdlib>
#include <iostream>
#include "string.h"
using namespace std;

const int MAX = 7;
typedef char Word[MAX + 1];

class Binary_Search
{   

    private:
		//Definig Structure NODE
		struct node
		{
		
		char wd[MAX + 1];
		node* left;
		node* right;
		int count;
		
		};
		
		node* root;
		
		 
		 //Member functions 
		 
		void help_insert(node *&ptr, Word& entry); 
	  //Post-Condition: Char array[] must be sent
	    
		
		//Help Destructor
		void Destroy(node* ptr);
		
		//Help length to get the length of the tree
		int r_length(node* ptr);
		//Post-Condition: A node must be sent
	    //Pre-Condition: Integer value must be returned
		
		//help print function to print recursively
		void bst_print(node* ptr);
		
    public:
		
		Word entry;
		// CONSTRUCTORS
      	Binary_Search( ) { root = NULL; }           // Inline functins
      	
      	//Destructor
		~Binary_Search();
		
	    //Member Functions
		void insert(Word& String);                 //INsert function
		//Post-Condition: A char array[] Word must be called by reference.
		
		
		bool empty(){return root == NULL;};        //Check if the tree is empty
	    //Pre-Condition: Returns a bool value
	    
	    int get_count(Word& target);               //Length Functions
	    //Post-Condition: Char array[] must be sent
	    //Pre-Condition: Integer value must be returned
	    
	    int bst_length();                          //Get the private recursive functions
	    //Pre-Condition: Return an interger value
	    
	    bool is_Present(Word Entry);               //Check if the word is present or not
	    //Post-Condition: char array[] must be sent
	    //Pre-Condition: MUst return a boolean value
	    
	    void Count_of_word();                      //Get the count of the word in the tree
	    //Post-Condition:returns nothing
	    
		void print();                              //Call the private print function
		//Post-Condition:Returns nothing
 
	
};
#endif




