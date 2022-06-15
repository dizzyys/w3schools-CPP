#include <iostream>
using namespace std;

class MyClass
{
public:
	int myNum;
};


int main()
{
	MyClass myObj;
	myObj.myNum = 15;

	cout << myObj.myNum;

	return 0;
}