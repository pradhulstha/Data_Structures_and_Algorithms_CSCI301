#ifndef BAG1_H
#define BAG1_H

#include <iostream>
#include <cstdlib>   //provides size_t
#include <assert.h>  //provides assert() 


using namespace std;


namespace csci301_Bag
{

     class Bag
  {
	public:

      // TYPEDEF and MEMBER CONSTANT
      static const size_t CAPACITY = 100;   // Maximum size of any Bag
      typedef int Item;                     // datatype of the Bag

      // CONSTRUCTOR
      Bag() { Used_box = 0; }                  // Inline
	

      // MODIFICATION MEMBER FUNCTIONS
      void Empty_list() {Used_box = 0;}
      void Insert_item ( const Item& Entry ); //To inaser items in the bag
      void Remove ( const Item& Search_item ); //To look for the item in the bag
      void Sort();
        
        
        //Friendly function
      friend std::ostream& operator << ( ostream& out_s, const Bag& b); //Accessing the use of << command
	  
      //Bag Addend ( const Bag& b1, const Bag& b2 );
	  
	        // CONSTANT MEMBER FUNCTIONS
	  bool Value_present ( const Item& Target) const;   //returning the boolean for the value present in the bag
      size_t size() const { return Used_box; } // Inline func to return the size of the bag
      size_t Value_Search ( const Item& Position ) const; //Returning the kth element of the bag
      
      private:

      Item data[CAPACITY];                  // An array of Items
      size_t Used_box;                          // How many items in a Bag
	 
	 
	};
}
	  #endif
