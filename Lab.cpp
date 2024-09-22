#include <iostream>
class Animal {
public:
    Animal() {
        std::cout << "create animal" << std::endl;
    }
    virtual ~Animal() {
        std::cout << "delete animal" << std::endl;
    }
    virtual void sound() {
        std::cout << "animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        std::cout << "dog" << std::endl;
    }
    ~Dog() {
        std::cout << "delete dog" << std::endl;
    }
    void sound() override {
        std::cout << "dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        std::cout << "cat" << std::endl;
    }
    ~Cat() {
        std::cout << "delete cat" << std::endl;
    }
    void sound() override {
        std::cout << "cat meows" << std::endl;
    }
};

int main() {
    Animal* a = new Animal();
    Dog* d = new Dog();
    Cat* c = new Cat();

    a -> sound();
    d -> sound();
    c -> sound();

    delete a;
    delete d;
    delete c;

    return 0;
}
