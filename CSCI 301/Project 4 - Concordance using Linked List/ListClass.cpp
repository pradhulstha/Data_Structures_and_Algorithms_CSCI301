#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>

using namespace std;

namespace const int MAX = 8;
namespace CSCI301_list
{
class List

{    
   
   
public: 
	 
	 typedef string Item;
    typedef string word;

	typedef char Word[MAX+1];
              
	Item data;
	//Node *link;
	
	 // CONSTRUCTORS
      List( ) { first = NULL; }           // Inline
      List( const List& source );         // Copy constructor

    // DESTRUCTOR
      ~List( );
      
      //Member Function
	void insert(const Item& word);
	
	int get_count(int count);
	
	//size_t Length(){return list_length;};
	
	void restore(ifstream& in_f);
	
	 
	//make.empty(){return first = NULL;}
	
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
	  
	  Node* get_node(const Item& word, Node* link,int count); 

};
}
#endif
