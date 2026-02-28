#include<iostream>

class Base{
public:
    static int a;
    static void func(){
        std::cout<<"Base_func()"<<std::endl;
    }
};

int Base::a=10;

class Son:public Base{
public:
    static int a;
    static void func(){
        std::cout<<"Son_func()"<<std::endl;
    }
};

int Son::a=1;

void test01(){
    //1. 通过对象访问
    Son son;
    std::cout<<"son_a="<<son.a<<std::endl;
    std::cout<<"base_a="<<son.Base::a<<std::endl;

    //2. 通过类名访问
    std::cout<<"son_a="<<Son::a<<std::endl;
    std::cout<<"base_a="<<Son::Base::a<<std::endl;
}

void test02(){
    Son son;
    son.Base::func();
    son.func();
    
    Son::Base::func();
    Son::func();
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}
