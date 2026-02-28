#include<iostream>
using namespace std;

class Base
{
public:
    Base(){
        cout<<"Base的构造函数"<<endl;
    }
    ~Base(){
        cout<<"Base的析构函数"<<endl;
    }
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son:public Base
{
public:
    Son(){
        cout<<"Son的构造函数"<<endl;
    }
    ~Son(){
        cout<<"Son的析构函数"<<endl;
    }
    int m_D;
};

void test01(){
    Base base;
    Son son;
}

void test02(){
    cout<<sizeof(Base)<<"\n"<<sizeof(Son)<<endl;
}

class BASE{
public:
    BASE(){
        m_A=10;
    }
    int m_A;
    void func(){
        cout<<"BASE-func()"<<endl;
    }
    void func(int a){
        cout<<"BASE-func(int a)"<<endl;
    }
};

class SON:public BASE
{
public:
    SON(){
        m_A=20;
    }
    int m_A;
    void func(){
        cout<<"SON-func()"<<endl;
    }
};

void test03(){
    SON e1;
    cout<<e1.m_A<<endl;
    cout<<e1.BASE::m_A<<endl;
    e1.func();
    e1.BASE::func();
    e1.BASE::func(10);
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    test03();
    return 0;
}
