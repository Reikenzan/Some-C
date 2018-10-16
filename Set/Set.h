#ifndef SET_H
#define SET_H
#include <iostream>
using namespace std;

class Set
{
public:
    Set(); //defualt
    ~Set();  //destructor
    void add(int n); 
    bool contains(int n) const; 
    int get_size() const;
    Set(const Set& right);  //copy constructor
    Set& operator=(const Set& right); //assigment
    void print() const;
private:
    int* elements;
    int* size;
    int limit;
};
#endif
