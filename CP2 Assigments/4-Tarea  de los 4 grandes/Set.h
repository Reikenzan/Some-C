#ifndef SET_H
#define SET_H
#include<string>
#include<cstdio>
#include<iostream>
#include <cstdlib>
using namespace std;
class Set
{
public:
	Set(); //defualt
	~Set();  //destructor
	Set(const Set& b); //copy
	Set operator =(Set b); //assigmet operator
	void add(int n);
	bool contains(int n)const;
	int get_size() const;
	
	void print(); //for debugging purposes
private:
	int* elements;
	int* size;
};
#endif
