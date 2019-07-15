#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	int Score;
	cout << "Enter score : ";
	cin >> Score;
	cout << "You got a grade ";
	if ((Score <= 100) && (Score >= 90))
    cout << "A" << endl;
	else if ((Score <= 89) && (Score >= 80))
	cout << "B" << endl;
	else if ((Score <= 79) && (Score >= 70))
	cout << "C" << endl;
	else if ((Score <= 69) && (Score >= 60))
	cout << "D" << endl;
	else if ((Score <= 59) && (Score >= 0))
	cout << "F" << endl;
	else if (Score > 100)
	cout << "Error!" << endl;
	else if (Score < 0)
	cout << "Error!" << endl;
	return(0);
 }