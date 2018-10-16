#include <iostream>
using namespace std;
float average(int[], int);
void displayLetterGrade(int[], int);
int main()
{
	int scores[10] = {23, 47, 61, 72, 79, 82, 84, 89, 93, 97};
	cout << "The average of all the scores is: "<< average(scores, 10) << endl;
	displayLetterGrade(scores, 10);
	system("pause");
	return 0;
}

float average(int scores[], int length)
{
	float sum = 0;
	for(int i=0;i < length; i++) sum += scores[i];
	return sum/length; 	   	
}

void displayLetterGrade(int scores[] , int length)
{
	for(int i=0;i < length; i++)
		switch(scores[i])
		{
			case 90 ... 100: cout << scores[i] << " = A"  << endl; break;    	
			case 85 ... 89 : cout << scores[i] << " = B+" << endl; break;    	
			case 80 ... 84 : cout << scores[i] << " = B"  << endl; break;    	
			case 75 ... 79 : cout << scores[i] << " = C+" << endl; break;    	
			case 70 ... 74 : cout << scores[i] << " = C"  << endl; break;    	
			case 60 ... 69 : cout << scores[i] << " = D"  << endl; break;    	
			default:  		 cout << scores[i] << " = F"  << endl; break;    	
    	}
	
	
}

