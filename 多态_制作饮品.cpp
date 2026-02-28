#include<iostream>
#include<string>
using namespace std;

class Make{
public:
    void BoilWater(){
        cout<<"冲水"<<endl;
    }
    virtual void Brew(){}
    void PourInToCup(){
        cout<<"倒入杯中"<<endl;
    }
    virtual void AddSeasoning(){}
};

class MakeCoffee:public Make{
public:
    void Brew(){
        cout<<"冲泡咖啡"<<endl;
    }
    void AddSeasoning(){
        cout<<"加糖和牛奶"<<endl;
    }
};

class MakeTea:public Make{
public:
    void Brew(){
        cout<<"冲泡茶叶"<<endl;
    }
    void AddSeasoning(){
        cout<<"加糖"<<endl;
    }
};

void make(Make& make){
    make.BoilWater();
    make.Brew();
    make.PourInToCup();
    make.AddSeasoning();
}

void test01(){
    MakeCoffee coffee;
    MakeTea tea;
    make(coffee);
    make(tea);
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
