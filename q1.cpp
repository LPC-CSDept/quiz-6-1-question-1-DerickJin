#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
void swapTwoValues(int n1, int n2);
void swapTwoValues(float n1, float n2);
void getinput(int n1, int n2);
void getinput(float n1, float n2);
//********************

#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	float f1, f2;
	getinput(n1, n2);
	getinput(f1, f2);

	return 0;
}
void getinput(int n1, int n2)
{
	cout << "Enter n1 and n2: ";
	cin >> n1 >> n2;
	swapTwoValues(n1, n2);
}

void getinput(float f1, float f2)
{
	cout << "Enter f1 and f2: ";
	cin >> f1 >> f2; 
	swapTwoValues(f1, f2);
}

void swapTwoValues(int n1,int n2)
{
	int one;
	cout<< "Before swap int n1 = " << n1 << " int n2 = " << n2 <<endl;
	one = n1;
	n1= n2;
	n2 = one;
	cout<< "After swap int n1 = " << n1 << " int n2 = " << n2 <<endl;
}

void swapTwoValues(float f1, float f2)
{
	int one;
	cout<<"Before swap float f1 = "<< f1 << " float f2 = " << f2 << endl;
	one = f1;
	f1= f2;
	f2 = one;
	cout<<"After swap float f1 = "<<f1<<" float f2 = "<< f2 << endl;
}

