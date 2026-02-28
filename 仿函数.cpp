#include<iostream>
using namespace std;

class Myprint{
public:
    void operator()(string test){
        cout<<test<<endl;
    }
};

class Add{
public:
    int operator()(int a,int b){
        return a+b;
    }
};

void test01(){
    Myprint myprint;
    myprint("hello world");
}

void test02(){
    //1
    Add add;
    int res=add(10,20);
    cout<<res<<endl;
    //2
    cout<<Add()(10,20)<<endl;
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}
