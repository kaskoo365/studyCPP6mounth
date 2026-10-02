#include <iostream>
using namespace std;

int main()
{
	int num;
 //   string str;
 //   cout << "Please enter your name: ";
 //   cin >> str;
	//cout << "Please enter a number: ";
 //   cin >> num;
 //   cout << str << ", Hello! You entered the number: " << num << endl;
    
    //calculator
	string action;
    int numOne, numTwo;

    cout << "Please enter an action, don't use spaces \n(addition, subtraction, multiplication, division): ";
    cin >> action;

    cout << "Please enter the first number: ";
    cin >> numOne;

    cout << "Please enter the second number: ";
    cin >> numTwo;

    if (action == "addition")
    {
		cout << "Anser: " << numOne + numTwo << endl;
    }

    else if (action == "subtraction")
    {
        cout << "Anser: " << numOne - numTwo << endl;
    }

    else if (action == "multiplication")
    {
        cout << "Anser: " << numOne * numTwo << endl;
    }

    else if (action == "division")
    {
        cout << "Anser: " << numOne / numTwo << endl;
    }
}

