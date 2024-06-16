#include<bits/stdc++.h>
using namespace std;

// OOPs : it is type of programming technique that revolve around objects
// Objects : Everything is Object (Entity) which have thier state/properties and behaviour/method 

// WHY OOPS ?
//     --> Relate with real life application
//     --> Easy to understand
//     --> Readibility
//     --> Reusable

// CLASS :
//     --> to make user defined data type
//     --> blueprint
//     --> template 
//     --> actual enitiy is know as objects
//     --> size of empty class is 1 because show their identity (class is exist)

// class Animal {

// };
// int main(){
//     cout<<"Size of Empty Class is: "<<sizeof(Animal)<<endl;
//     return 0;
// }
    
// class Animal{
//     int a;
//     int b;
//     char c;
// };

// int main(){
//     cout<<"Size of Class is: "<<sizeof(Animal)<<endl;
//     return 0;
// }

// it gives output 12 but why ?
// i think the answer should be 9 but correct answer is 12
// show learn padding and greedy alignment

//Access Modifier
    // --> Public -> access everywhere
    // --> Private -> access within a class (it is by default)
    // --> Protected ->
    // It defines the access of scope

// To access the private data in other side then we use getter and setters


// creation of class
class Animal{
    // state or Properties
    private:
    int weight;
    public:
    int age;
    string name;

    //default Constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout<<"constructor called"<<endl;
    }

    //Parameterised constructor
    Animal(int age){
        this->age = age;
        cout<<"Parameterised constructor called"<<endl;
    }

    Animal(int age, int weight){
        this->weight = weight;
        this->age = age;
        cout<<"Parameterised constructor2 called"<<endl;
    }

    Animal(int age, int weight, string name){
        this->weight = weight;
        this->age = age;
        this->name = name;
        cout<<"Parameterised constructor 3 called"<<endl;
    }

    //Copy Constructor
    Animal(Animal &obj){
        this->weight = obj.weight;
        this->age = obj.age;
        this->name = obj.name;
        cout<<"I am inside a copy constructor"<<endl;

    }

    Animal(Animal *obj){
        this->weight = obj->weight;
        this->age = obj->age;
        this->name = obj->name;
        cout<<"I am inside a copy constructor"<<endl;

    }

    //Behaviour
    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){
        cout<<"Sleeping"<<endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight = w;
    }

    // destructor
    ~Animal(){
        cout<<"I am inside a destructor"<<endl;
    }
};

int main(){
    // object creation

    //static
    Animal ramesh;
    // to access property of ramesh use '.' operator
    cout<<"Age of ramesh is: "<<ramesh.age<<endl;
    ramesh.age = 12;
    cout<<"Age of ramesh is: "<<ramesh.age<<endl;
    ramesh.eat();

    ramesh.setWeight(100);
    cout<<"Weight of ramesh is: "<<ramesh.getWeight()<<endl;
    
    //Dynamic Memory

    Animal* suresh = new Animal;
    // new kewword always return address
    suresh->age = 15; //(*suresh).age = 15;
    cout<<"Suresh age is: "<<suresh->age<<endl;

    suresh->eat();

    Animal a;
    Animal* b = new Animal;

    Animal c(100);
    Animal* d = new Animal(100);

    Animal e(100,100);
    Animal* f = new Animal(100,200);

    Animal g(100,100,"hello");
    Animal* h = new Animal(100,200,"hi");

    Animal j = c;
    Animal i(j);

    delete b;
    
    return 0;
}

// this is pointer to current object
// void setWeight(int weight){
//     this->weight = weight;
// }

// Object Creation
//     --> Constructor
//         --> No return type
//         --> name same as class 
//         --> initialise objects
        

// By default the constructor doing shallow copy
// for deep copy we need to write own code

// read this 
// Const Keywords -> var , function
// static -> var , function
// intialisation list 

// Destructor 
//     --> for static --> automatiically call
//     --> for dynamically --> manually
//     --> No return 
//     --> No i/p
//     --> ~classname
