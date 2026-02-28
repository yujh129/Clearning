#include<iostream>
using namespace std;

int fun(int a,int b=10,int c=20){
    return a+b+c;
}

int main(int argc, char const *argv[])
{
    cout<<fun(10)<<endl;
    cout<<fun(10,30)<<endl;
    return 0;
}
