#ifndef DOBLIST1_H
#define DOBLIST1_H


#include <iostream>
#include <string.h>



using namespace std;

//HEADER PART 
class doblist
{
	public:
		//TYPEDEF
		typedef char Item;
 		
		 //DEFAULT CONSTRUCTOR
		 doblist(){
		 	first =NULL;
		 	last =NULL;
		 }
		 
		 //	DESTRUCTOR
		 //list~();
		 
		 //A boolean to check if the list is empty.
		 bool check_Empty();
		 
		//Inserting character is a first doubly linked list
		 void append(Item& entry);
		 
	
		 
		 //removes the last item from the list.
		 void remove_last();
		 
		 //Friend Function
		friend std::ostream & operator<<(std::ostream& out_s, const doblist& l);
		
		
 	private:
 		//Initializing the Double linked list
 		struct node
		{
		
			Item data;
			node *next;
			node *back;
		};	
		node *first;
		node *last;
		
		//MEMBER FUNCTION
		node* get_node(Item& entry,node* forward , node* backward);
		
};
#endif
