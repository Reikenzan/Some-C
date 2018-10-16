#include <iostream>
#include <vector>

using namespace std;

float average(vector<int>);
float alter(vector<int>&);


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
	alter(scores);
	cout << "The average of all the scores is: " << average(scores) << endl;
	system("pause");
	return 0;
}

float average(vector<int> scores)
{
	float sum = 0;
	for(int i=0;i < scores.size(); i++) sum += scores[i];
	return sum/scores.size(); 	   	
}

float alter(vector<int>& scores)
{
	for(int i=0;i < scores.size(); i++) scores[i] += 5;
}

