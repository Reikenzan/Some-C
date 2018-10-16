#include "Worker.h"

Worker::Worker()
{}
Worker::Worker(string name, int compid, string dept, int ssnum)
{
  this->name = name;
  this->compid = compid;
  this->dept = dept;
  this->ssnum =ssnum;
}
double Worker::compute_pay() const
{

}
string Worker::getName() const
{
  return name;
}
int Worker::getCompID() const
{
  return compid;    
}    
string Worker::getDepartment() const
{
  return dept;
}       
int Worker::getSocialSecurityNumber() const
{
  return ssnum;
}  
