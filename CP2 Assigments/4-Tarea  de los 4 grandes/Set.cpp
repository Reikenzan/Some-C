#include "Set.h"
Set::Set()
{
	size = NULL;
	elements = NULL;
}
Set::~Set()
{
	//cout << "Deleting the array...\n";
	delete[] elements;
	delete size;
	size = NULL;
	elements = NULL;
}
Set::Set(const Set& b)
{
	if(b.size != NULL)
	{ 
		int s = b.get_size();
		size = new int(s);
		elements = new int[*size];
		for(int i=0;i< s; i++)
		{
			elements[i]= b.elements[i];	//add(b.elements[i]);
		}
	}
}
int Set::get_size() const
{
	return *size;
}
void Set::add(int n)
{
	if(size == NULL)  //if there are no elements in the array
	{
		size = new int(1);  //initialize the size
		elements = new int[*size];   //initialize the array
		elements[*size -1] = n;  //add the number at the end of the array		
	}
	else if(!contains(n))
	{		
		int newSize = (*size +1);  //increment the size
		int* temp = new int[newSize]; //make a temporary array with an added element
		//copy all the elements into the temp array
		for(int i =0; i< *size; i++)     
		{
			temp[i] = elements[i];
		}
		temp[*size] = n; //add the last element passed to the array
		
		delete[] elements;	//delete whatever was in the old array
		delete size; // delete the old size
		size = new int(newSize); //initialize the new size
		elements = new int[*size];	//initialize the elements array with the new size
		// copy all the elements from temp to elements
		for(int i =0; i< *size; i++)    
		{
			elements[i] = temp[i];
		}
	}
	else
	{
		cout << "The number " << n << " is already in the set.\n";
	}
}
Set Set::operator =(Set b)
{
	if(b.size != NULL)
	{ 
	    delete size; //erase whatever in the elements arrays to avoid memory leaks
		delete[] elements;		
		int s = b.get_size();
		size = new int(s);
		elements = new int[*size];
		for(int i=0;i< s; i++)
		{
			elements[i]= b.elements[i];	//add(b.elements[i]);
		}
	}
}
/*void Set::print()
{
    for(int i=0; i<*size; i++)
	{ 
   a = a += b;
   cout << set << endl;
    }	
}*/
void Set::print()
{
	for(int i=0; i<*size; i++)
	{
		cout << elements[i] << endl;
	}
}
bool Set::contains(int n) const
{
	for(int i =0; i< *size;i++)
	{
		if(elements[i]==n)
			return true;
	}
	return false;
}
