#include "Set.h"
Set::Set() //defualt
{
   elements = new int [10];
   limit = 10;
   size = new int (0);
}

Set:: ~Set() //destructor
{
      delete [] elements;
      delete size;
      elements = NULL;
      size     = NULL;
      cout<< "I am destroyed"<<endl;
}

int Set::get_size() const
{
    return *size;
}
bool Set::contains(int n) const
{ 
    if(*size == 0) return false;
    for(int i=0; i<*size; i++)
       if(elements [i]== n) return true; // if(*(elements + i)== n) return true;
       return false;
}
void Set::add(int n)
{
     if(contains (n))return;
     elements [*size] = n;
     (*size)++;
}
Set::Set(const Set& right)//copy constructor
{
   elements = new int [10];
   limit = 10;
   size = new int (*(right.size));
   for(int i=0; i<*size; i++)
      elements [i] = right.elements[i];        
}
Set::Set& operator=(const Set& right)//assigment
{
   if(this != &right)
   {
     delete [] elements;
     delete [] size;
     elements = new int [10];
     limit = 10;
     size = new int (*(right.size));
     for(int i=0; i<*size; i++)
        elements [i] = right.elements[i];
   }
   return *this;
}
Set::void print() const
{
     for(int i=0; i<*size; i++)
        cout<<elements [i]<<endl;
}
