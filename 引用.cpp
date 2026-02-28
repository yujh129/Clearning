#include<iostream>
using namespace std;

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

int& test01(){
    static int a=10;
    return a;
}

void ShowValue(const int& a){
    cout<<a<<endl;
}

int main(int argc, char const *argv[])
{
    int a=10,c=20;
    int& b=a;
    // int c=20;
    // b=c;     这是赋值，不是更改引用    
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    cout<<"address(a)="<<&a<<endl;
    cout<<"address(b)="<<&b<<endl;

    swap(a,c);
    cout<<"a="<<a<<endl;
    cout<<"c="<<c<<endl;

    int& ref=test01();
    cout<<"ref="<<ref<<endl;
    test01()=1000;
    cout<<"ref="<<ref<<endl;
    ShowValue(a);
    
    return 0;
}
