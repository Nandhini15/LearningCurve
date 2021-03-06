//Provide an interface for creating families of related or dependent objects without specifying their concrete classes.
//Abstract Factory pattern lets a class defer instantiation to subclasses.
//it can be named as Factory and Product Family Method.
//When u need ur system to be independent of creation aof classes.composed or represented
//show just the interfaces not the implementation
//system need to be configured with one of the multiple family of objects.
//derived class overrides the factory method and returns an instance of derived class.
//*The main difference between the two is that with the Abstract Factory pattern, a class 
//delegates the responsibility of object instantiation to another object via composition whereas
//the Factory Method pattern uses inheritance and relies on a subclass to handle the desired object instantiation.*
//both, defer instantiation to sub classes, factory is doing with inheritance,AF is doing with composition.
#include <iostream>

class Button
{
public:
	virtual void paint() = 0;
};
 
class WinButton : public Button 
{
public:
	void paint (){
		std::cout << " Window Button \n";
       }
};
 
class MacButton : public Button 
{
public:
	void paint (){
		std::cout << " Mac Button \n";
       }
};

class iPhoneButton : public Button 
{
public:
	void paint (){
		std::cout << " iPhone Button \n";
       }
};

class ScrollBar 
{
public:
	virtual void paint() = 0;
};
 
class WinScrollBar : public ScrollBar 
{
public:
	void paint (){
		std::cout << " Window ScrollBar \n";
       }
};
 
class MacScrollBar : public ScrollBar 
{
public:
	void paint (){
		std::cout << " Mac ScrollBar \n";
       }
};

class iPhoneScrollBar : public ScrollBar
{
public:
	void paint (){
		std::cout << " iPhone ScrollBar \n";
       }
};


class GUIFactory 
{
public:
	virtual Button* createButton () = 0;
	virtual ScrollBar* createScrollBar () = 0;
};
 
class WinFactory : public GUIFactory 
{
public:
	Button* createButton (){
		return new WinButton;
	}
	ScrollBar* createScrollBar (){
		return new WinScrollBar;
	}
};
 
class MacFactory : public GUIFactory 
{
public:
	Button* createButton (){
		return new MacButton;
	}
	ScrollBar* createScrollBar (){
		return new MacScrollBar;
	}
};
 
class iPhoneFactory : public GUIFactory 
{
public:
	Button* createButton (){
		return new iPhoneButton;
	}
	ScrollBar* createScrollBar (){
		return new iPhoneScrollBar;
	}
};

int main()
{
	GUIFactory* guiFactory;
	Button *btn;
	ScrollBar *sb;

	guiFactory = new MacFactory;
	btn = guiFactory->createButton();
	btn -> paint();
	sb = guiFactory->createScrollBar();
	sb -> paint();

	guiFactory = new WinFactory;
	btn = guiFactory->createButton();
	btn -> paint();
	sb = guiFactory->createScrollBar();
	sb -> paint();

	guiFactory = new iPhoneFactory;
	btn = guiFactory->createButton();
	btn -> paint();
	sb = guiFactory->createScrollBar();
	sb -> paint();

	return 0;
}
//The guiFactory object abstracts the process of creating not just MacScrollBar but also scroll bars for any look-and-feel standard. 
//And guiFactory isn't limited to producing scroll bars or buttons. It can manufacture a full range of widgets including menus,
//text fields etc.
//The guiFactory object abstracts the process of creating not just MacScrollBar but also scroll bars for any look-and-feel standard. 
//And guiFactory isn't limited to producing scroll bars or buttons. It can manufacture a full range of widgets including menus, 
//text fields etc.
