#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    Person(){
        name="佚名";
        age=0;
    }
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    bool operator==(Person& p){
        if(p.name==this->name&&p.age==this->age){
            return true;
        }
        return false;   
    }
    bool operator!=(Person& p){
        if(*this==p){
            return false;
        }
        return true;
    }
private:
    string name;
    int age;
};

void test01(){
    Person p1("汤姆",18);
    Person p2("汤姆",18);
    cout<<(p1==p2)<<endl;
    cout<<(p1!=p2)<<endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
