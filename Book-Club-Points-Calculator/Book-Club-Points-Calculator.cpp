// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/24/19

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numBooks = 0;
	int numPoints = 0;

	string userInput;
	bool goodInput = false;

	while (goodInput == false) {
		cout << "Please enter the number of books that you read: ";
		cin >> userInput;

		numBooks = stoi(userInput);

		if (numBooks >= 0) {
			goodInput = true;
		}
		else {
			cout << "Please enter a valid number." << endl << endl;
		}
	}

	switch (numBooks)
	{
	case 0:
		numPoints = 0;
		break;
	case 1:
		numPoints = 5;
		break;
	case 2:
		numPoints = 15;
		break;
	case 3:
		numPoints = 30;
		break;
	default:
		break;
	}

	if (numBooks >= 4) {
		numPoints = 60;
	}

	cout << "You earned " << numPoints << " points." << endl;
}
