#include<bits/stdc++.h>
using namespace std;

// 4 Pillar of OOPs
// Every Pillar are interelated, all are abstraction
// --> 1) Encapsulation
// --> 2) Inheritance
// --> 3) Polymorphism
// --> 4) Abstraction

// Encapsulation -->
    // --> wrapping of data members and member funstion in bigger entity.
    // --> data hiding
    // --> class behave as encapsulation
    // --> showing only esssential data others are hide

// Perfect Encapsulation --> all data members marked private and data members access by getter and setter


// class Animal {
//     private:
//         int age;
//         int weight;

//     public:
//         void eat(){
//             cout<<"Eating"<<endl;
//         }

//         int getAge(){
//             return this->age;
//         }

//         void setAge(int age){
//             this->age = age;
//         }
// };

// int main(){
//     cout<<"Hello World!"<<endl;
//     return 0;
// }

// Inheritance
    // --> Base class/Super class/parent class
    // --> sub class/ child class / derived class
    // --> child class inherit properties from parent class in Inheritance
    // --> syntax: class child : modes of inheritance parent

// class Animal {
//     public:
//         int age;
//         int weight;

//         void eat(){
//             cout<<"Eating"<<endl;
//         }

// };

// class Dog: public Animal{
//     public:
//     void print(){
//         cout<<this->age<<endl;
//     }
// };

// int main(){
//     Dog d1;
//     d1.eat();
//     d1.print();
//     return 0;
// } 



//   Base Class         |              Types of Inheritance                |
//      Ka              |     public      |   protected    |    private    |
// Access Modifier      |                 |                |               |
//                      |                 |                |               |
//     Public           |     public      |   protected    |    private    |
//     protected        |     protected   |   protected    |    private    |
//     private          |     NA          |   NA           |    NA         | 


// TYPES OF Inheritance
//     --> single inheritance
//     --> Multi-level Inheritance
//     --> multiple inheritance
//     --> Hierarchical inheritance
//     --> Hybrid inheritance

// single inheritance

// class Car{
//     public:
//     string name;
//     int weight;
//     int age;

//     void speedup(){
//         cout<<"speeding Up"<<endl;
//     }
    
//     void breakMarro(){
//         cout<<"break maar di"<<endl;
//     }
// };

// class Scarpio : public Car{

// };

// int main(){
//     Scarpio babbarWali;
//     babbarWali.speedup();
//     return 0;
// }

// Scacrpio is a car (inheritance is -> is a realtionship)


//Multi Level inheritance

// class Fruit{
//     public:
//     string name;
// };

// class Mango: public Fruit{
//     public:
//     int weight;
// };

// class Alphanso: public Mango{
//     public: 
//     int sugarLevel;
// };

// int  main(){
//     Alphanso a;
//     cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<endl;
//     return 0;
// }


// Multiple inheritance

// class A{
//     public:
//     int physics;
//     int chemistry;
//     A(){
//         chemistry=100;
//     }
// };

// class B{
//     public:
//     int chemistry;
//     B(){
//         chemistry=410;
//     }
// };

// class C: public A, public B{
//     public:
//     int maths;
// };

// int main(){
//     C obj;
//     cout<<obj.physics<<" "<<obj.A::chemistry<<" "<<obj.maths<<endl;
//     return 0;
// }

// Diamond problem or inheritance ambiguity problem
    // --> if class A,B and C each class contain chemistry data member
    // --> then obj.chemistry, confuse which class data member chemistry will be execute
    // --> we use like this obj.A::chemisty;
    // --> :: scope resolution operaator


// Heirarchical inheritance

// class Car{
//     public:
//     int age;
//     int weight;
//     string name;


//     void speedUp(){
//         cout<<"Speed Up"<<endl;
//     }

// };

// class Scacrpio : public Car{

// };

// class Fortuner : public Car{

// };


// int main(){
//     Scacrpio s1;
//     s1.speedUp();

//     Fortuner s2;
//     s2.speedUp();

//     return 0;
// }


// Hybrid inheritance --> Use more than two inheritance 


//Polymorphism 
    // --> many + form : existing in  many form
    // two types 
        // --> compile time Polymorphism
            //   --> operator overloading
            //   --> function overloading
        // --> run time Polymorphism


// Function Overloading
// class Maths{
//     public:

//     int sum(int a, int b){
//         cout<<"I am the first signature"<<endl;
//         return a+b;
//     }
//     int sum(int a,int b,int c){
//         cout<<"I am the second signature"<<endl;
//         return a+b+c;
//     }
//     int sum(int a,float b){
//         cout<<"I am the third signature"<<endl;
//         return a+b+10;
//     }
// };  


// int main(){
//     Maths obj;
//     cout<<obj.sum(2,5,20)<<endl;
//     cout<<obj.sum(2,5)<<endl;
//     cout<<obj.sum(2,10.5f)<<endl;
//     return 0;
// }

// Operator Overloading
    // playing with operators
    // doing something differnent through the operator
    // check chart which operator can be overloaded
    // for example if a + b --> a is current object , + is function call , input objbect is b
class Param{
    public:
    int val;

    void operator +(Param& obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<(value2-value1)<<endl;
    }
};

int main(){
    Param obj1,obj2;
    obj1.val=10;
    obj2.val=13;

    // this should print the differece betwwen them
    obj1 + obj2;
    return 0;
}