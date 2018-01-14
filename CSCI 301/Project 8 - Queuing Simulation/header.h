#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <cstdlib>

using namespace std;
 int typedef Item;
struct Node
		              {
		   	            Item data;
		   	            Node* next;
		              };
		              Node* first;
		              Node* rear;
		              Item count;

class Store_Queue

{

    
   int typedef Item;

   

   public: 
           
           
           //member functions
            
           Store_Queue(){first = NULL;
            rear = NULL;
            count = 0;};
            
            ~Store_Queue(){first = NULL;
            rear = NULL;
            count = 0;};
			
            //public member functions
           void enqueue(Item Time);
           Item dequeue();
           bool empty(){return first == NULL;};
           size_t length(){return count;}	  
           int Shortest_queue(Store_Queue q[], int queuecount);
           
           //friend function
           friend std::ostream& operator << ( std::ostream& out_s, Store_Queue Line);
 
		   private:
		   struct Node
		              {
		   	            Item data;
		   	            Node* next;
		              };
		              Node* first;
		              Node* rear;
		              Item count;
  	  
           
		   
	
};
#endif 
