#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
int getinput(int n1, int n2);
int swapTwoValues(float n1, float n2);
//********************

int main()
{
	int num1, num2;
	float fnum1, fnum2;
	num1 = getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

// ******************************
// Implement all your functions here
int getinput(int n1, int n2)
{
	using namespace std;
	cout << "Enter numbers: ";
	cin >> n1 >> n2;

	return 0;
}
int swapTwoValues(float n1, float n2)
{
	return 0;
}
// ******************************