#include <iostream>
#include "header.h"

using namespace std;

void Store_Queue::enqueue(int Time)
{
	Node* temp;
	temp = new Node;
	temp -> data = Time;
	temp -> next = NULL;
	
	if(first == NULL)
		first = temp;
	    
	
    if(rear == NULL)
      rear = temp;
    
   ++count; 
}


Store_Queue::Item Store_Queue::dequeue()
{
	Item popped;
	Node* temp;
	temp = new Node;
	popped = first -> data;
	temp = first;
	first = first -> next;
	--count;
	delete temp;
	
	if(first == NULL)
	   rear = NULL;
	return popped;
	
	
}


int Store_Queue::Shortest_queue(Store_Queue q[], int queuecount)
{
	int short_line = 0;
	for(int i = 0; i < queuecount; ++i)
	{
		if(q[i].length() < q[short_line].length())
		{
		  short_line = i;
		}
	}
	return short_line;
}
ostream& operator << (ostream& out_s, Store_Queue Line)
{
	Store_Queue::Node* cursor;
	Store_Queue::Item print;
	for ( cursor = Line.first; cursor != NULL && cursor -> next != NULL ; cursor = cursor -> next)
	{
		print = Line.dequeue();
		out_s<< print <<" ";
		Line.enqueue(print);
	}
	if(cursor != NULL)
	{   print = Line.dequeue();
		out_s << print << " ";
		Line.enqueue(print);
	}
	return out_s;
}


/*Store_Queue::size_t Store_Queue::next_index(size_t index)
{
	return (i + 1) % CAPACITY;
}*/
