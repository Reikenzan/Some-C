#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


string sort(string strIn);

int main(int argc, char *argv[])
{
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

string sort(string strIn)
{
	for (unsigned int p = 0; p < strIn.length(); ++p)
	{
		for (unsigned int i = 0; i < strIn.length() - p - 1; ++i)
		{
			if (strIn[i + 1] < strIn[i])
			{
				swap(strIn[i], strIn[i + 1]);
			}
		}
	}
	return strIn;
}

