//Adaptor converts the interface of a class into another interface that the clients expect.
//It helps to make the classes work together that wouldn't otherwise, bcoz of incompatible interfaces.
//Motto - Can re-use existing software if we can modify interface. - change the interface of an existing object
#include <iostream>

// Desired interface (Target)
class Rectangle 
{
  public:
    virtual void draw() = 0;
};

// Legacy component (Adaptee)
class LegacyRectangle 
{
  public:
    LegacyRectangle(int x1, int y1, int x2, int y2) {
        x1_ = x1;
        y1_ = y1;
        x2_ = x2;
        y2_ = y2;
        std::cout << "LegacyRectangle(x1,y1,x2,y2)\n";
    }
    void oldDraw() {
        std::cout << "LegacyRectangle:  oldDraw(). \n";
    }
  private:
    int x1_;
    int y1_;
    int x2_;
    int y2_;
};

// Adapter wrapper
class RectangleAdapter: public Rectangle, private LegacyRectangle 
{
  public:
    RectangleAdapter(int x, int y, int w, int h):
      LegacyRectangle(x, y, x + w, y + h) {
         std::cout << "RectangleAdapter(x,y,x+w,x+h)\n";
      }
    
    void draw() {
        std::cout << "RectangleAdapter: draw().\n"; 
        oldDraw();
    }
};

int main()
{
  int x = 20, y = 50, w = 300, h = 200;
  Rectangle *r = new RectangleAdapter(x,y,w,h);
  r->draw();
}
//LegacyRectangle(x1,y1,x2,y2)
RectangleAdapter(x,y,x+w,x+h)
//Here, we are creating an object of deriv class which points to base classes
//Indirectly we are accessing all the classes
//bcoz Rectangle Adapter does multiple inheritance.. inherits from rec n legrec
//So, it is obvious that we indirectly access all the resources
