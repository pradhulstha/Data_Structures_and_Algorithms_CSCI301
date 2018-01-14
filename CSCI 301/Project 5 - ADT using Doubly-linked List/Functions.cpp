#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>

#include "Header.h"
using namespace std;



//IMPLEMENTATION PART

bool doblist::check_Empty()
{
	bool flag = false;
	if(first -> next == NULL)
	{
		return flag;
	}
	
	else
	{
		flag = true;
		return flag;
	}
}

doblist::node* doblist::get_node(Item& entry,node* forward, node* backward)
{
	node* temp;
	temp = new node;
	temp->data=entry;
	temp->next =forward;
	temp->back =backward;
		return temp;
}

//INSERT FUNCTION
void doblist:: append(Item& entry) 
{
	node *prev , 
	*temp;
	temp =last;
	if(first == NULL){
		first =get_node(entry,first,NULL);
		last = first -> next;
	      
	}
	else
	{   
		prev =first;
		while(prev->next!=NULL)  
			prev =prev->next;   
		prev->next = get_node(entry,prev->next,prev);
		
		last = prev -> next;
		   
	}  
} 




//REMOVE FUNCTION

void doblist::remove_last()
{
	node *t,*p;            //declaring new node
	node *prev;

	prev = last; 
	
	
	
  if(first -> data == '#')  //checking if the first element is '#'
  { node *n;
    n = first;
    
  	first = n -> next;
  	
  	n -> next -> back = NULL;
  	
  	delete n;
  	
  }
  
  //when # is at last
   if(last -> data == '#')
  {
  	node *temp;
  	
  	temp = last -> back;
  	last = temp -> back -> next;
  	temp -> back -> next = NULL;
  	delete temp;
  	
  }
  
  //when two '#' is encountered
  else if(prev -> back -> data == '#' && prev -> back -> back -> data == '#')
   {
   	  node *temp, *s, *p, *q;
   	  
   	  temp = prev -> back;
   	  s = prev -> back -> back;
   	  p = s -> back;
   	  q = p -> back;
   	   prev = q -> back;
   	  q -> back ->next = temp -> next;
   	  delete p;
   	  delete s;
   	  delete temp;
   	  delete q;
   
   }
   
   
  else     //if # is in between the nodes
  { while(prev != first)
      {
         while( prev -> back -> data != '#' && prev ->back != NULL)
    	   {
    	     	prev = prev ->back;
           }
     
	      if (prev -> back !=NULL)
	 	    {
		       node *temp;
	           temp = prev -> back;
	           p = temp -> back;
	           p -> back -> next = prev;
	           prev = p -> back;
	           p -> back -> next = temp -> next;
		       delete temp;
		       delete p;
	     	}
        }
   }
}
 
//FRIEND FUNCTION
ostream& operator << ( ostream& out_s, const doblist & l )
  {
    doblist::node *cursor;
    out_s << "Output: "<<endl;
    out_s << "---->  ";
    for ( cursor=l.first;
          cursor != NULL && cursor->next != NULL;
          cursor=cursor->next )
          {
          	out_s << cursor->data;
          	
          }

    if ( cursor != NULL )
     {
	  out_s << cursor->data<<endl;
     } 
     
     
    return out_s;
  } 
