#include <iostream>
#include <assert.h>
#include "string.h"
#include <cstdlib>
#include <fstream>
#include <iomanip>

#include "Header.h"
#include "Functions.cpp"
using namespace std;

//MAIN PART

int main()
{
	doblist charc;
	string entry;
	cout<<"Enter a line of characters"<<endl;
	cout<<"# => delete the most recent character. \n ";
	cout<<"Input --> ";
	cin>>entry;
	int size =entry.size();
	char x[size];
	int i = 0;
	char ch;
	while ( i<size)
	{
		ch = entry[i];
		charc.append(ch);
		++i;
		};
	 
	assert(charc.check_Empty());
	charc.remove_last();
	cout<<charc;
	
	return 0;
}


