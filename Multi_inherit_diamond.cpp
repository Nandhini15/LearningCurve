#include <iostream>

class LivingThing {
protected:
    void breathe() {
        std::cout << "I'm breathing as a living thing." << std::endl;
    }
};

class Animal : protected LivingThing {
protected:
    void breathe() {
        std::cout << "I'm breathing as an animal." << std::endl;
    }
};

class Reptile : protected LivingThing {
protected:
    void crawl() {
        std::cout << "I'm crawling as a reptile." << std::endl;
    }
};

class Snake : protected Animal, protected Reptile {
public:
    void breathe() {
        std::cout << "I'm breathing as a snake." << std::endl;
    }

    void crawl() {
        std::cout << "I'm crawling as a snake." << std::endl;
    }
};

int main() {
    Snake snake;

    snake.breathe();
    snake.crawl();

    return 0;
}
// here snake class overrides the breathe method from animal and crawl from reptile.
// if both the animal and the reptile has this breathe, then snake ll never know which method to override - diamond problem
// use virtual 
#include <iostream>

class LivingThing {
protected:
    void breathe() {
        std::cout << "I'm breathing as a living thing." << std::endl;
    }
};

class Animal : protected LivingThing {
protected:
    void breathe() {
        std::cout << "I'm breathing as an animal." << std::endl;
    }
};

class Reptile : protected LivingThing {
public:
    void breathe() {
        std::cout << "I'm breathing as a reptile." << std::endl;
    }

    void crawl() {
        std::cout << "I'm crawling as a reptile." << std::endl;
    }
};

class Snake : public Animal, public Reptile {

};

int main() {
    Snake snake;

    snake.breathe();
    snake.crawl();

    return 0;
}

The error is due to the “Diamond Problem” of multiple inheritance. The Snake class does not know which breathe() method to call.

In the first example, only the Animal class had overridden the breathe() method. The Reptile class had not. Hence, it wasn’t very difficult for the Snake class to figure out which breathe() method to call. And the Snake class ended up calling the breathe() method of the Animal class.

In the second example, the Snake class inherits two breathe() methods. The breathe() method of the Animal and Reptile class. Since we haven’t overridden the breathe() method in the Snake class, there is ambiguity.

C++ has many powerful features such as multiple inheritance. But, it is not necessary that we use all the features it provides.

I don’t prefer using multiple inheritance and use virtual inheritance instead.

Virtual inheritance solves the classic “Diamond Problem”. It ensures that the child class gets only a single instance of the common base class.

In other words, the Snake class will have only one instance of the LivingThing class. The Animal and Reptile classes share this instance.

This solves the compile time error we receive earlier. Classes derived from abstract classes must override the pure virtual functions defined in the base class.
