

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Declare variables to be used by main and functions
static int guessCounter = 0;          // keeps track of how many questions we have asked.
static int midpoint;				  // used by Guess Function to store the midpoint of the range (lows and highs)
static char answer;					  // to hold user answer y/n 

void Guess(int low, int high);
string center(string input, int width);

int main(int argc, char** argv)  
{
	
	cout << endl << center("Number Finder", 80) << endl << endl;
	cout << "Please think of a number between 1 and 1000000 and write it down (or remember it if you have good memory). "
		 << "I will find your number through a series of questions. "
		 << "\n\nClick enter when you're ready." << endl;
	cin.ignore();	 
	
	Guess(1,1000000);

	if(guessCounter > 1)
		cout << endl << "It took " << guessCounter << " questions to find your number." << endl << endl;
	else
		cout << endl << "I guessed your number on the first try!." << endl;
	

	return 0;
}

// Guess
// Precondition: Picked number must lie within the desired range.
// Postcondition: The function will find the number through a series of questions.
void Guess(int low, int high)
{	
	// The stopping point is when the low equals the high
	// There is only one possible number and the function can proceed to guess the number
	if(low == high)
	{
		cout << "The number you chose is " << low << "!" << endl << endl;
	}
	
	// If low < high 
	else if(low < high)
	{
		midpoint = (low + high) / 2;	// then we should calculate the midpoint
		
		cout << "Is the number you chose " << midpoint << "? (y/n)" << endl; // and ask whether the midpoint
		cin >> answer;									// is the number they chose, thus ending the function.
		guessCounter++;									// increase counter by 1
		
		// If this is the correct number
		if(answer == 'y')
		{
			cout << "Yay I found the number! " <<endl << endl;  // End the function displaying success
		}
		// If midpoint is not the correct number
		else if(answer == 'n')
		{
			// Ask whether the correct number is higher than the midpoint they were shown
			cout << "Is the number you chose higher than " << midpoint << "? (y/n)"<< endl;
			cin  >> answer;
			guessCounter++;								// increase counter by 1
			
			// If midpoint is higher
			if(answer == 'y')
			{
				Guess((midpoint+1), high);  // Call the function recursively with a new low (midpoint+1)
											// making the problem smaller and smaller until the base case is reached or the number is found
			}
			// If midpoint is lower
			else if(answer == 'n')
			{
				Guess(low, (midpoint-1));	// Call the function recursively with a new high (midpoint-1)
											// making the problem smaller and smaller until the base case is reached or the number is found
			}
		}
	}
}

// Centers the string on the screen of desired width
string center(string input, int width) 
{ 
	return string((width - input.length()) / 2, ' ') + input;
}


