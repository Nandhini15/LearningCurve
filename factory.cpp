//factory -creats objects for u rather u initiating obj directly
//call one func..that ll behave lyk factory func.. ul tell tat func vat type of obj i want.. u can pass string..
//def a if or abstract class n let the sub class decide which class to initiate.
*Static Function Members. By declaring a function member as static, you make it independent of any particular 
object of the class. A static member function can be called even if no objects of the class exist and the static
functions are accessed using only the class name and the scope resolution operator :: *
//ToyFactory.cpp
#ifndef __io__
#define __io__
 
#include <iostream>
using namespace std;
 
#endif
 
#include "Object.cpp"
 
class ToyFactory{
public:
	static Toy * createToy(int type) {
	
	Toy *toy = NULL;
	
	switch(type) {
		case 1:{
			toy = new Car;
			break;
		}
		case 2:{
			toy = new Bike;
			break;
		}
		case 3:{
			toy = new Plane;
			break;
		}
		default:{
			cout << "invalid toy type please re-enter type" << endl;
			return NULL;
		}
	}
 
	toy->prepareParts();
	toy->combineParts();
	toy->assembleParts();
	toy->applyLabel();
	
	return toy;
	}
	
};
//main.cpp ie..Toy class
#ifndef __io__
#define __io__
 
#include <iostream>
using namespace std;
 
#endif
 
class Toy {
protected:
	string name;
	float price;
public:
	virtual void prepareParts()  = 0;
	virtual void combineParts()  = 0;
	virtual void assembleParts() = 0;
	virtual void applyLabel()    = 0;
	virtual void showProduct()   = 0;
};
 
class Car : public Toy {
	// make all constructor private or protected!!
public:
	void prepareParts()  { cout << "Preparing Car Parts" << endl;}
	void combineParts()  { cout << "Combining Car Parts" << endl;}
	void assembleParts() { cout << "Assembling Car Parts" << endl;}
	void applyLabel()      { cout << "Applying Car Label" << endl;  name = "Car"; price = 10;}
	void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};
 
class Bike : public Toy {
	// make all constructor private or protected!!
public:
	void prepareParts()  { cout << "Preparing Bike Parts" << endl;}
	void combineParts()  { cout << "Combining Bike Parts" << endl;}
	void assembleParts() { cout << "Assembling Bike Parts" << endl;}
	void applyLabel()      { cout << "Applying Bike Label" << endl;  name = "Bike"; price = 20;}
	void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};
 
class Plane : public Toy {
	// make all constructor private or protected!!
public:
	void prepareParts()  { cout << "Preparing Plane Parts" << endl;}
	void combineParts()  { cout << "Combining Plane Parts" << endl;}
	void assembleParts() { cout << "Assembling Plane Parts" << endl;}
	void applyLabel()      { cout << "Applying Plane Label" << endl;  name = "Plane"; price = 30;}
	void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};
//client.cpp
#ifndef __io__
#define __io__
 
#include <iostream>
using namespace std;
 
#endif
 
#include "ToyFactory.cpp"
 
int main() {
// client code starts
	int type;
	while(1){
		cout << endl << "Enter type or Zero for exit" << endl;
		cin >> type;
		if(!type)
			break;
		Toy *v = ToyFactory::createToy(type);
		if(v){
			v->showProduct();
			delete v;
		}
	}
	cout << "Exit.." << endl;
// client code ends
	return 0;
}
