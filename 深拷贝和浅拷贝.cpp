#include<iostream>
using namespace std;

class Person{
public:
    Person(){
        cout<<"Person的无参构造函数"<<endl;
    }
    Person(int a,int h){
        age=a;
        height=new int(h);
        cout<<"Person的有参构造函数"<<endl;
    }
    Person(const Person& p){
        age=p.age;
        //height=p.height---->编译器提供的浅拷贝
        height=new int(*p.height);
        cout<<"Person的拷贝构造函数"<<endl;
    }
    ~Person(){
        if(height!=nullptr){
        delete height;
        height=nullptr;
        }
        cout<<"Person的析构函数"<<endl;
    }
    int age;
    int* height; 
};

void test01(){
    Person p1(18,160);
    cout<<"age_p1="<<p1.age<<" "<<"height_p1="<<*p1.height<<endl;
    Person p2(p1);
    cout<<"age_p2="<<p2.age<<" "<<"height_p2="<<*p2.height<<endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
