#include <iostream>
#include <string>
#include <vector> 
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

vector<int> fillvector(int[], int);
void selectionsort(int[], int);

// main function ***********************************************************

int main ()
{ 
int array[] = {63, 42, 27, 111, 55, 14, 66, 9, 75, 87};
vector<int> myvector1; 
myvector1 = fillvector(array, 10);

for(int i=0; i < myvector1.size(); ++i)
{
cout << i+1 << " : " << myvector1[i] << endl;
}

// End of program statements
cout << "Please press enter once or twice to continue...";
cin.ignore().get(); // hold console window open
return EXIT_SUCCESS; // successful termination

}
// end main() **************************************************************

vector<int> fillvector(int array[], int size)
{
vector<int> myvector(size);
//insertionsort(array,size);

for(int i=0; i < size; ++i)
{
myvector[i] = array[i];
}

return myvector;
}

void selectionsort(int arr[], int size)
{
for (int arr = 0; arr < size.length(); ++arr)
	{
		for (unsigned int i = 0; i < size.length() - p - 1; ++i)
		{
			if (arr[i + 1] < arr[i])
			{
				swap(arr[i], arr[i + 1]);
}
}
}
	return EXIT_SUCCESS;
}

    system("PAUSE");
    return EXIT_SUCCESS;
}
