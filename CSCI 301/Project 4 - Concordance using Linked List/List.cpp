
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>

#include "Listfunction.cpp"
#include "ListClass.h"
using namespace std;
using namespace CSCI301_List;



int main()
{
	List l1;
	char command;
	
  	ifstream from_f;
	from_f.open("LIST.txt");
	cout << "Inside"<<endl;
	l1.restore(from_f);
	from_f.close();
	cout<< "outise";
	cout<< " Enter the command";
	cin >> command;
	cout << " list "<< l1; 
    return 0;	
	 
}
