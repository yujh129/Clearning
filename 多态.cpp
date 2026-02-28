#include<iostream>
using namespace std;

class Animal{
public:
    virtual void speak(){
        cout<<"Animal is speaking"<<endl;
    }
};

class Cat:public Animal{
public:
    void speak(){
        cout<<"Cat is speaking"<<endl;
    }
};

class Dog:public Animal{
public:
    void speak(){
        cout<<"Dog is speaking"<<endl;
    }
};

void doSpeak(Animal& animal){
    animal.speak();
}

void test01(){
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

int main(int argc, char const *argv[])
{
    test01();
    cout<<sizeof(Animal)<<endl;
    return 0;
}
