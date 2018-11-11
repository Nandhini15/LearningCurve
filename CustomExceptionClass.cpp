#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
// virtual keyword.. not typecast of derived class to base class is done
// always retrieve corresponding method in respec derived class
//const throw keyword - exception in virtual class.. only then the derived class may override the base class and throw its corres method.
 //for(;;) - infinte for loop
 virtual const char* what() const throw()
  {
    return "My exception happened";
  }
};
class Exceptionclass: public myexception
{
  const char* what() const throw()
  {
    return "My Exceptionclass happened";
  }
};

int main () {
  try
  {
    throw Exceptionclass();
  }
  catch (exception& e)
  {
    cout << e.what() << '\n';
  }
  return 0;
}
//
#include <iostream>
#include <exception>
#include<vector>
using namespace std;

int main () {
 vector<int> myList;
myList.push_back(0);	// index 0
myList.push_back(1);	// index 1

// try to access the third element which does not exists
try
{
	myList.at(2);		// index 2
}
catch( exception& e )
{
	cout << "Exception happened" << endl;
}
  return 0;
}
//
#include <iostream>
#include <exception>
#include<vector>
using namespace std;
double divide ( double a, double b)
{
	if ( b == 0 ) // !! Division by zero
    	throw "Division by zero";
    else
    	return a / b;
}
int main () {
try 
{
	double res = divide ( 1, 0);
}
catch ( char* c)
{
	cout << c;
}
  return 0;
}
//

#include <iostream>
#include <exception>
using namespace std;
class MyException : public std::exception
{
int speed;
public:
   const char* what(){
       return "myex";
   }
   void getspeed(){
       cout<<"speed is "<<speed<<endl;
   }
   void setspeed(int speed)
   {
       this->speed = speed;
   }
};
class exception2
{
   	int speed;
   	public:
   	 exception2(){
   	     speed = 0;
   	     cout<<"speed "<<speed<<endl;
   	 }
   	 void accelerate(){
   	     for(;;){
   	         speed += 10;
   	         cout<<speed<<endl;
   	         if(speed >= 250){
   	             MyException m;
   	             m.setspeed(speed);
   	             throw m;
   	         }
   	     }
   	 }
};
int main()
{
    exception2 a;
	try
    {
    	a.accelerate();
    }
    catch (MyException e)
    {
    	std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
  
    return 0;
}
//
#include <iostream>
#include <exception>
using namespace std;
class MyException : public std::exception
{
    public:
	virtual const char * what () const throw()
    {
    	return "C++ Exception";
    }
};
class exception2 : public std::exception
{
    public:
    // exception2(){
    //     cout<<"hi"<<endl;
    // }
   	virtual const char * what () const throw()
    {
        MyException w;
        throw w;
    }
};
int main()
{
    exception2 a;
	try
    {
    	a.what();
    }
    catch (exception w)
    {
    	std::cout << "MyException caught" << std::endl;
        std::cout << w.what() << std::endl;
    }
    
    return 0;
}
