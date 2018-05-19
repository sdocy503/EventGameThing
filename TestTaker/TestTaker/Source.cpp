#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Questions();
int main() {
	string Input;

	cout << "Hi Welcome to the C++ Quiz\nIf you Whuld like to take the Quiz type test\nIf not type N\n"; // outputs hellow world :b
	while (true) {
		cin >> Input;
		if (Input == "N" || Input == "n")
		{
			return 0;
		}
		else if (Input == "test")
		{
			Questions();
		}
		else {
			cout << "Sorry, that's not a valid choice, try again.\n";
		}
	}
}


void Questions()
{
	vector <string> questions; //There are 5 questions, each questions has its own line
	vector <string> correctAnswers; //Each questions has 1 correct answer, each answer is on its own line
	vector <string> incorrectAnswers; //Each questions has 3 incorrect answers, each answer is on its own line

	//Read files, get questions and answers
}

