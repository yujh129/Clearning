#include<iostream>
using namespace std;

class Person{
    friend ostream& operator<<(ostream& cout,const Person& p);
public:
    Person(){
        age=new int(0);
    }
    Person(int age){
        this->age=new int(age);
    }
    Person(const Person& person){
        this->age=new int(*person.age);
    }
    Person& operator=(Person& p){
        if(age!=nullptr){
            delete age;
            age=nullptr;
        }
        age=new int(*p.age);
        return *this;
    }
    ~Person(){
        if(this==nullptr){
            return;
        }
        delete age;
        age=nullptr;
    }
private:
    int* age;
};

ostream& operator<<(ostream& cout,const Person& p){
    cout<<"age="<<*p.age;
    return cout;
}

void test01(){
    Person p1(18);
    Person p2(80);
    Person p3;
    p3=p2=p1;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}

