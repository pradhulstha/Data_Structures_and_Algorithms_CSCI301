#include <iostream>
#include <cstdlib>
#include "implement.cpp"
#include "header.h"

using namespace std;


int main()
{
	//Variable Decleration
	int DURATION;
    int ARV_PROB;
    int Max_TakenTime;
	int trans_time; //to hold the maximum transiction time
	int people; //to hold no. of people 
	int entry_time; //to hold the entry_time for each person
	int wait_sum = 0;
	int wait_time;  //to hold the time a person waits in the queue.
	int queuecount; //to hold number of servers
	int shortest_line;
	int total_people = 0;
	int seed; //to hold the previous rand number
	
	
	cout << "Enter these parameters of the simulation:" << endl;
    cout << " The number of queue/server pairs: ";
    cin >> queuecount;
    
    cout << " The probability that a customer arrives in one tick (%): ";
    cin >> ARV_PROB;
    cout << " The maximum duration of a transaction in ticks: ";
    cin >> Max_TakenTime;
    cout << " The duration of the simulation in ticks: ";
    cin >> DURATION;
    cout << "Enter a random number seed: ";
    cin >> seed;
    srand(seed);
    cout<<"\n n \n";
    
    
    
    Store_Queue Line[queuecount];    //queue for each line
    
    
	int trans_time_arr[queuecount];
	//initializing the time array to hold transisition time for each line.
	 for(int index = 0; index < queuecount; ++index)
	      trans_time_arr[index] = 0;
	      
	      
	      
	      
	for(int time = 0; time < DURATION; ++time)
	{   
		if(rand() % 100 < ARV_PROB)
		   { 
			    shortest_line = shortest_queue(Line, queuecount);  //checking for the shortest queue to add new customer
		 
		        Line[shortest_line].enqueue(time);
		    }
		
	    	
	    	
	   for(int Line_number = 1; Line_number <= queuecount; ++Line_number) 
	   {	
		if(trans_time_arr[Line_number] == 0)    //if the store receptionist is free
		   {
		   	  if(!Line[shortest_line].empty())
		   	     {
		   	   	     entry_time = Line[shortest_line].dequeue();
		   	   	     wait_sum += time - entry_time;
		   	   	     wait_time = time - entry_time;
		   	   	     ++people;
		   	   	     trans_time_arr[Line_number] = rand() % Max_TakenTime + 1;
				  }
		   
	        }
		  else
		       --trans_time_arr[Line_number];
		   
	     }
		//SnapShot of the current figure
		cout<<time <<"  ";
		 	for (int index=0;index < queuecount; ++index)
		 	{  
		 		cout<<"\t"<<trans_time_arr[index]<<"\t"<< Line[index]<<"\n\n";
		 		
		 	}
	
	}
	
	
	//total number of people left in the array of queues
	
	for(int i = 0; i < queuecount; ++i)
	{
		total_people += Line[i].length();
	}
	
	
	
	//output of the end figure
	cout << people << " customers waited an average of "<<wait_sum/people<<" ticks."<<endl;
    cout << "The longest time one customer waited was " << wait_time << " ticks." << endl;
    cout << total_people << " customers remain in the lines." << endl;

    return 0;
}
