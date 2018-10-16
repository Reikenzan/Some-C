// This class demonstrates the big three(Copy Constructor, Assignment Operator
// and Destructor.
#include <iostream>
using namespace std;
class String
{
public:
   String();                                // Default constructor
   String(const char p[]);                  // Simple constructor
   String(const String& right);             // Copy constructor
   ~String();                               // Destructor
   String& operator=(const String& right);  // Assignment operator
   String& operator+=(const String& right);
   int length() const;
   char& operator[](int index);
   char operator[](int index) const;
   friend ostream& operator<<(ostream& out, String& s);
private:
   char* buffer;
   int len;
};

