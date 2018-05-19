#include <iostream>
#include <string>

using namespace std;

int main() {
	string Question1 = "Default",Question2 = "Default",Question3 = "Default",Question4 = "Default",Question5 = "Default";
	
	string Input;

	cout << "HI Welcome to the C++ Quiz\nIf you Whuld like to take the Quiz Press Y\nIf not Press N\n"; // outputs hellow world :b
	cin >> Input;
	if (Input == "N" || Input == "n")
	{
		return 0;
	}
	else if(Input == "Y" || Input == "y")
	{
		
	}
	cin >> Input;
}

void Question1(string Question,string QwencersA, string QwencersB, string QwencersC, string QwencersD)
{
	cout << Question;
	cout << "Your choices are\nA:" + QwencersA+"\nB: Lappy\n"; // The Question
}

