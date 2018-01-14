#ifndef List_H
#define List_H

#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>

using namespace std;

const int MAX = 8;
namespace CSCI301_list
{
class List

{    
   
   
public: 
	 
	
    typedef char[MAX + 1] word;

              
    word wd;

	
	 // CONSTRUCTORS
      List( ) { first = NULL; }           // Inline
      List( const List& source );         // Copy constructor

    // DESTRUCTOR
      ~List( );
      
      //Member Function
	
	
	int get_count(int count);
	
		
	void insert(ifstream& in_f);
	
	 
	
	//Friend Function
	friend std::ostream operator << (ostream& out_s,const List& l);
	
private:
		
	  struct Node
	  { 
	    word wd;
        int count;
	  	Item data;
	  	Node *next;
	  	
	  };
	  Node *first;
	  
	  void help_insert(Node* &p, word fileacc)
	  Node* get_node(const Item& word, Node* link,int count); 

};
}
#endif
