#include<iostream>
using namespace std;

class Animal{
public:
    Animal():m_age(0){}
    int m_age;
};

class Sheep:virtual public Animal{

};

class Camel:virtual public Animal{

};

class Alpaca:public Sheep,public Camel{

};

void test01(){
    Alpaca alpaca1;
    alpaca1.m_age=18;
    cout<<alpaca1.m_age<<endl;
    cout<<Sheep().m_age<<endl;
    cout<<Camel().m_age<<endl;
    cout<<Animal().m_age<<endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
