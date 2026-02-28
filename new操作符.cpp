#include<iostream>
using namespace std;

int* fun(){
    int* p=new int(10);
    return p;
} 

void test01(){
    int* p=fun();
    cout<<*p<<endl;
    delete p;
}

void test02(){
    int* arr=new int[10];//10个元素
    for(int i=0;i<10;i++){
        *(arr+i)=100+i;
    }
    for(int i=0;i<10;i++){
        cout<<*(arr+i)<<" ";    
    }
    cout<<"\n";
    delete[] arr;
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}
