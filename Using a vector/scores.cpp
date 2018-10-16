#include <iostream>
#include <vector>

using namespace std;

float average(vector<int>);
void displayLetterGrade(vector<int>);

int main()
{
	vector<int> scores;
	scores.push_back(23);
	scores.push_back(47);
	scores.push_back(61);
	scores.push_back(72);
	scores.push_back(79);
	scores.push_back(82);
	scores.push_back(84);
	scores.push_back(89);
	scores.push_back(93);
	scores.push_back(97);
	cout << "The average of all the scores is: " << average(scores) << endl;
	displayLetterGrade(scores);
	system("pause");
	return 0;
}

float average(vector<int> scores)
{
	float sum = 0;
	for(int i=0;i < scores.size(); i++) sum += scores[i];
	return sum/scores.size(); 	   	
}

void displayLetterGrade(vector<int> scores)
{
	for(int i=0;i < scores.size(); i++)
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

