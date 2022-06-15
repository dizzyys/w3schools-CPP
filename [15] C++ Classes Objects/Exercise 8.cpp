#include <iostream>
using namespace std;

class Vehicle
{
public:
	string brand = "Nissan";

	void horn()
	{
		cout << "Beep Beep!";
	}
};

class Car : public Vehicle
{
	public:
		string model = "GT-R R34";
};

int main()
{
	Car myCar;

	myCar.horn();

	cout << myCar.brand + " " + myCar.model;

	return 0;
}