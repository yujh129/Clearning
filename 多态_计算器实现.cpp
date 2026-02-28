#include<iostream>
#include<string>
using namespace std;

class Calculator{
public:
    virtual int GetResult()=0;
    int num1;
    int num2;
};

class Add:public Calculator{
public:
    Add(int num1,int num2){
        this->num1=num1;
        this->num2=num2;
    }
    int GetResult(){
        return num1+num2;
    }
};

class Sub:public Calculator{
public:
    Sub(int num1,int num2){
        this->num1=num1;
        this->num2=num2;
    }
    int GetResult(){
        return num1-num2;
    }
};

class Multi:public Calculator{
public:
    Multi(int num1,int num2){
        this->num1=num1;
        this->num2=num2;
    }
    int GetResult(){
        return num1*num2;
    }
};

class Div:public Calculator{
public:
    Div(int num1,int num2){
        this->num1=num1;
        this->num2=num2;
    }
    int GetResult(){
        if(num2==0){
            cout<<"divisor must not be 0"<<endl;
            return 0;
        }
        return num1/num2;
    }
};

int Calcuate(Calculator& res){
    return res.GetResult();
}

void test01(){
    int num1,num2;
    cin>>num1>>num2;
    Add add(num1,num2);
    Sub sub(num1,num2);
    Multi multi(num1,num2);
    Div div(num1,num2);
    cout<<Calcuate(add)<<endl;
    cout<<Calcuate(sub)<<endl;
    cout<<Calcuate(multi)<<endl;
    cout<<Calcuate(div)<<endl;
}

void test02(){
    Calculator* e=new Add(18,9);
    cout<<e->GetResult()<<endl;
    delete e;
    e=new Sub(18,9);
    cout<<e->GetResult()<<endl;
    delete e;
    e=new Multi(18,9);
    cout<<e->GetResult()<<endl;
    delete e;
    e=new Div(18,9);
    cout<<e->GetResult()<<endl;
    delete e;
}

int main(int argc, char const *argv[])
{
    test02();
    return 0;
}
