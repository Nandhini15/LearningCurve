#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
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
