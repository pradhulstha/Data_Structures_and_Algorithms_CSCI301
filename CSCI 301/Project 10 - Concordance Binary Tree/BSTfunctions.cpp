#include <iostream>
#include <fstream>
#include<cstdlib>
#include <iomanip>
#include <string.h>
#include "BST.h"

using namespace std;


Binary_Search::~Binary_Search()
{
	Destroy(root);
}

void Binary_Search::Destroy(node* ptr)
{
	if(ptr != NULL)
	{
		Destroy(ptr -> left);
		Destroy(ptr -> right);
		delete ptr;
	}
}



void Binary_Search::insert(Word& String)
{   
  Word fileacc;
  strncpy(fileacc, String, MAX );
  fileacc[MAX + 1] = '\0';
  help_insert(root, fileacc);
	
} 
	
	
//PRIVATE FUNCTION
void Binary_Search::help_insert(node *&ptr, Word& entry ) 
{
	           
	
	
	if (ptr == NULL)
	{   
	    
		ptr = new node;	
		strcpy(ptr->wd, entry); 
		ptr -> count = 1;
		ptr -> left = NULL;
		ptr -> right = NULL;
	}
	
	else if (strcmp(entry, ptr -> wd) < 0 )
	  {
		   help_insert(ptr -> left, entry);
	  }
	  
	else if(strcmp(entry, ptr -> wd) > 0 )
	{
		
		help_insert(ptr -> right, entry);
	}
	
	else 
      {           ptr -> count = ++ptr -> count;
      }
	  
	
}


int Binary_Search:: get_count(Word& Target)
{
	int Count;
	node* p = root;
	while(p != NULL)
	{
		if( strcmp( Target, p -> wd)== 0)
		{    
		    Count = p -> count;
			return Count;
		}
		else if(strcmp( Target, p -> wd) < 0)
		   p = p -> left;
		   
		else 
		   p = p -> right;
	}
}

bool Binary_Search::is_Present(Word Entry)
{    node* p;
     p = root;
	
	

  while( p != NULL)
	{
		if( strcmp( Entry, p->wd)== 0)
		{    
		   return true;
		}
		else if(strcmp( Entry, p->wd) < 0)
		   p = p -> left;
		   
		else 
		   p = p -> right;
	}
	return false;
}


int Binary_Search::bst_length()
{
	return r_length(root);
}


 int Binary_Search::r_length(node* ptr)
{  int length = 0;
	if( ptr == NULL)
	    return 0;
    else
      return r_length(ptr -> left) + 1 + r_length(ptr -> right);
}



  
void Binary_Search::print()
{
	cout << "Word"<<setw(20)<<"Count"<<endl;
    cout <<"-----------------------------"<<endl;
	 bst_print(root);
	cout <<"----------------------------"<<endl; 
}

void Binary_Search::bst_print(node* ptr)
{
  
  
  if ( ptr != NULL)
  {
  	bst_print(ptr -> left);
  	cout<< ptr -> wd << "\t\t\t"<< ptr -> count<<endl;
  	bst_print(ptr -> right);
	  
	  
  }
    
}


void Binary_Search::Count_of_word()
{
		//Getting the count of the word in the list
	Word sen;
	bool check;
	int word_count;
	
	
	cout << "Enter the word: " ;
	cin >> sen;
	check = is_Present(sen);
	
	if(check == true)
	{
		word_count = get_count(sen);
		cout << "\nCount of the word " << sen << " = "<<word_count<<endl;
    }
    
    else
    {
       cout<< " \nSorry! The word is not present. " <<endl<<endl;
       Count_of_word();
    }
       
}





