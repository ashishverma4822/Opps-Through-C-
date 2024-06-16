#include<bits/stdc++.h>
using namespace std;

// Runtime Polymorphism -> Dynamic Binding
// Function Overriding 

class Animal{
    public:
    Animal(){
        cout<<"i am inside animal constructor"<<endl;
    }
    virtual void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    Dog(){
        cout<<"i am inside dog constructor"<<endl;
    }

    //override
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){
    // Dog a;
    // a.speak();

    // Animal* a = new Animal();
    // a->speak();

    // Dog* a = new Dog();
    // a->speak();

    //Upcasting
    // Animal* a = new Dog();
    // a->speak();

    //Downcasting
    // Dog* b = (Dog*)new Animal();
    // b->speak();

    // Animal* a = new Animal();
    // Dog* b = new Dog(); //called both animal and dog constructor both
    // Dog* c = (Dog*) new Animal();
    // Animal* b = new Dog();

    return 0;
}


// default compiler said that access data member and method function according to the type of pointer
// to access according to the object type add virtual keyword  

// parent* a = new parent();
// parent* a = new child();
// child* a = new child();
// child* a = (child*)new Parent();


// Abstraction 
    // --> [Implementation Hiding]
    // --> Encapsulation is subset of abstraction 
     