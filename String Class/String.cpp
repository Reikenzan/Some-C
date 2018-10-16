#include "String.h"
//Default Constructor
String::String()
{
   len = 0;
   buffer = NULL; // No need to allocate array to hold zero characters
}

//A Simple Constructor
String::String(const char p[])
{
   // Determine number of characters in string (strlen(p))
   len = 0;
   while (p[len] != '\0')
   len++;
   // Allocate buffer array, remember to make space for NULL character
   buffer = new char[len + 1];
   // Copy new characters (strcpy( buffer, p ))
   for (int i = 0; i < len; i++)
      buffer[i] = p[i];
   buffer[len] ='\0';
}

// Copy Constructor
String::String(const String& right)
{
   int n = right.length();
   buffer = new char[n + 1];
   for (int i = 0; i < n; i++)
      buffer[i] = right[i];
   buffer[n] = '\0';
}

//Destructor
String::~String()
{
   delete[] buffer;
}

// Assignment Operator
String& String::operator=(const String& right)
{
   if (this != &right)
   {
      delete[] buffer; // Get rid of old buffer
      len = right.length();
      buffer = new char[len + 1];
      for (int i = 0; i < len; i++)
         buffer[i] = right[i];
      buffer[len] = '\0';
   }
   return *this;
}

//Concatenation
String& String::operator+=(const String& right)
{
   if (this != &right)
   {
      int new_len = len + right.length();
      char* new_buffer = new char[new_len + 1];
      for (int i = 0; i < len; i++)
         new_buffer[i] = buffer[i];
      for (int i = 0; i < right.length(); i++)
         new_buffer[i + len] = right[i];
      new_buffer[new_len] = '\0';
      delete[] buffer; // Get rid of old buffer
      buffer = new_buffer;
      len = new_len;
   }
   return *this;
}

int String::length() const
{
   return len;
}

char String::operator[](int index) const
{
   return buffer[index];
}

char& String::operator[](int index)
{
   return buffer[index];
}

ostream& operator<<(ostream& out, String& s)
{
   out << s.buffer;
}
