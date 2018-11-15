//Sometimes, we may need to create only one instance of a class.
//provides global point of access to that instance.
//a db connection shared by multiple objects
//Allows control over allocation and destruction of objects.
//provides thread safe access to object's global state.
//Private constructor - makes a class not instantiated
//To solve this find a way using static method
//Requirements - only one instance of a class is created and it is shared among all other objects in an application
//-global access
//-No ownership - no one would be the owner of tat obj. the obj ll have free float..whoevr need can use
//-Lazy initialization
//Adv: - save memory - Single point of access
//eg: a person having multiple desktop appli. he needs a printer to be shared amng all the classes.
//create a singleton class printer and create an global static instance of the same
//now all the application class objects ll share this 
//restrict the instantiation of a class to one object meaning a single instance of a class that can be shared or accessed from multiple.
//thread pool - quad core, four threads, group of threads to perform a task.
//if you have quad core, you can create an obj of thread pool class and just use only four threads. if u try to access more than that no.
//Loggig - when u r logging in a window, username n pass.whenevr u open another tab.. n try address. it ll open same page..singleton
//game settings.. like change settings.. u vont change brightness everywhere. once u do that in a screen, the same ll get reflected through
//so, there throughout application, settings obj ll b maintained as singleton object.
//Pointer in a static variable -Static member functions are not associated with any object. When called, they have no this pointer. 
//Static member functions cannot be virtual, const, or volatile. The address of a static member function may be stored in a regular 
//pointer to function, but not in a pointer to member function
#include <iostream>
#include <string>
 
using namespace std;
 
class GameSetting{
	static GameSetting* _instance;
	int _brightness;
	int _width;
	int _height;
	GameSetting(){
	    _width = 786;//can be set using constructor else call set method and pass val in main
	    _height = 1300;
	    _brightness = 75;
	} 
	// all constructors should be private or public(iff you want to allow inheritance)
 
public:
	static GameSetting* getInstance() {
		if(_instance == NULL) 
			_instance = new GameSetting();
		return _instance;
	}
	void setWidth(int width) {_width = width;}
	void setHeight(int height) {_height = height;}
	void setBrightness(int brightness) {_brightness = brightness;}
 
	int getWidth() {return _width;}
	int getHeight() {return _height;}
	int getBrightness() {return _brightness;}
	void displaySetting() {
		cout << "brightness: " << _brightness << endl;
		cout << "height: " << _height << endl;
		cout << "width: " << _width << endl << endl;
	}
};
 
GameSetting * GameSetting::_instance = NULL;
 
void someFunction () {
	GameSetting *setting = GameSetting::getInstance();
	setting->displaySetting();
}
 
int main() {
 
	GameSetting *setting = GameSetting::getInstance();
	setting->displaySetting();
	setting->setBrightness(100);
	
	someFunction();
	return 0;
}
//The primary responsibility of this getInstance prop is to create singleton instance
//however, we r delaying singleton instance creation till the time getInstance is called.
//This delayed instance creation is called lazy initialization
//this works fine in single threaded environment.
//If multipe threads are trying to access getInstance prop at the same time, then there r chances of creating multiple instances of this
singleton object.
//locks r the best way to control this..to avoid this situation..synchronized
//but the use of synchronized ll increase time..reduce speed.
//Then to avoid this, avoid sync, n use synchronized locks
//Can do thread.sleep.but its waste of time. so, To avoid, do double check..one simpley and inside the synchronized block
//if(instance == null)
//to say sync vd class{
synchronized(classname.class){
if(instance == null)
instance = new classname();
//instead of applyin synchronized there and wasting memory, apply here so that sync is used only at the time of obj creation
//Eager Instanstiation - creating instance at the time of declaration. even if we r not using it is created. no not needed.
- to skip creation of instance at the needed time do lazy instantiation
