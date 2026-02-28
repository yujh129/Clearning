#include<iostream>
using namespace std;

class Person{
public:
    static void func(){
        a=10;
       cout<<"func调用"<<endl;         
    }
    static int a;
};

int Person::a=0;

void test01(){
    //1. 通过对象访问
    Person p;
    p.func();
    //2. 通过类名访问
    Person::func(); 
    cout<<"a="<<Person::a<<endl;
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
