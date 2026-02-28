#include<iostream>
using namespace std;

class Person{
public:
    Person(){
        cout<<"Person的无参构造函数"<<endl;
    }
    Person(int a){
        age=a;
        cout<<"Person的有参构造函数"<<endl;
    }
    Person(const Person& p){
        age=p.age;
        cout<<"Person的拷贝构造函数"<<endl;
    }
    ~Person(){
        cout<<"Person的析构函数"<<endl;
    }
    int age;
};

void test01(){
    //1.括号法
    Person pp1;
    Person pp2(19);
    Person pp3(pp2);
    //Person p();会被认为是函数的声明
    //2.显示法
    Person p1;
    Person p2=Person(10);
    Person p3=Person(p2);

    Person(10);//匿名对象，执行完这行后，系统会自动回收它

    //不要利用拷贝构造函数 初始化一个匿名对象
    //eg.Person(p3)----->会被认为是Person p3;
    //3.隐式转换法
    Person p4=10;   //相当于Person p4=Person(10);
    Person p5=p4;   //拷贝构造；
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
