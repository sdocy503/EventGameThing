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
	string answers[4];
	int randomValueOne;
	int randomValueTwo;
	int randomValueThree;
	int randomValueFour;
	string choice;

	//Read files, get questions and answers
	while (questions.size > 0) {
		randomValueOne = rand() % 3;
		randomValueTwo = rand() % 3;
		while (randomValueTwo == randomValueOne) {
			randomValueTwo = rand() % 3;
		}
		randomValueThree = rand() % 3;
		while (randomValueThree == randomValueOne || randomValueThree == randomValueTwo) {
			randomValueTwo = rand() % 3;
		}
		randomValueFour = rand() % 3;
		while (randomValueFour == randomValueOne || randomValueFour == randomValueTwo || randomValueFour == randomValueThree) {
			randomValueFour = rand() % 3;
		}
		answers[randomValueOne] = correctAnswers[0];
		answers[randomValueTwo] = incorrectAnswers[0];
		answers[randomValueThree] = incorrectAnswers[1];
		answers[randomValueFour] = incorrectAnswers[2];

		cout << questions[0] << "\na. " << answers[0] << "\nb. " << answers[1] << "\nc. " << answers[2] << "\nd. " << answers[3] << "\n";
		cin >> choice;
		if(choice == "a")
		questions.erase(questions.begin);
	}
}

