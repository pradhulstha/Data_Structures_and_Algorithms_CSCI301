#include <iostream>
#include <string.h>
#include <cstdlib>
#include "ListClass.h"
using namespace std;



namespace CSCI301_list
{
void List::restore(ifstream& in_f)
{
	
    Node *last;
    int count = 1;
    in_f >> word;
     first = get_node (word, NULL, count );
    
    last = first;
    in_f >> word;
    
    while (!in_f.eof())
    {
    	last -> next = get_node (word, NULL, count);
    	last = last -> next;
    	in_f >> word;
    	
	}
	

	 in_f.close();
}

/*void List::insert(const Item& word)
{
	 Node *prev;

    
	
	if (first == NULL || word  first -> data )
	
	{
		first = get_node(first, NULL, count);
	
	}
	
	else
	{
		prev = first;
		while(prev != NULL || prev -> next -> data > word)
		{
			prev = prev -> next;
		}
	  prev->next = get_node(word, prev-> next, count);	
	}
	
 } */



ostream& operator << (ostream& out_s, const List& l)
{
	List::Node *p = l.first;
	
	
	out_s<<"(" ;
    for(p= l.first ; p!= NULL && p-> next != NULL; p = p-> next)
	{
		out_s<< p-> data << ", ";
		
	 } 
	 if(p != NULL)
	 {
	 	out_s << p -> data;
	 }
	 
	 out_s <<")";
return out_s;

	}
	
	List::Node* List::get_node(Item& word, Node* link, int count)
{
	Node *temp;
	temp = first;
	temp -> data = word;
	temp -> next = link;
	link = temp;
	
	return link;
	
	
	
	
}
}
