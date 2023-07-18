/*
#include<iostream>
using namespace std;
*/

// Your code goes here
class Animal
{
    protected:
    int Age;
    
    public:
    Animal (int a)
    {
        Age = a;
    }
    virtual void Eat()
    {
        cout << "Aninal eats food" << endl;
    }
    int get_Age()
    {
        return Age;
    }
};

class Dog: public Animal
{
    public:
    Dog(int a) : Animal(a) {}
    void Eat()
    {
        cout << "Dog eats meat" << endl;
    }
    int get_Age()
    {
        return Age;
    }
};

class Cat: public Animal
{
    public:
    Cat(int a) : Animal(a) {}
    void Eat()
    {
        cout << "Cat eats meat" << endl;
    }
    int get_Age()
    {
        return Age;
    }
};

/*
int main()  {
   Animal *a;
   Dog dg(8); //making object of child class Dog
   Cat ct(3); //making object of child class Cat
   
   a = &dg;
   a->Eat();
   cout << "Dog's age is: "<<a->get_Age()<<endl;
   a= &ct;
   a->Eat();
   cout << "Cat's age is: "<<a->get_Age()<<endl;
   return 0;
}
*/
