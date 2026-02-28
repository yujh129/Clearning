#include<iostream>
using namespace std;

void func(){
    cout<<"调用func()"<<endl;
}

void func(int a){
    cout<<"调用func(int a)"<<endl;
}

int main(int argc, char const *argv[])
{
    func();
    func(10);
    return 0;
}
