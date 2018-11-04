#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
// virtual keyword.. not typecast of derived class to base class is done
// always retrieve corresponding method in respec derived class
//throw keyword plays a active role
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
