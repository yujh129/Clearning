#include<iostream>
#include<string>
using namespace std;

class Person{
friend ostream& operator<<(ostream& cout,Person& p);
public:
    Person(){
        m_A=0;m_B=0;
    }
    Person (int A,int B):m_A(A),m_B(B)
    {

    }
    Person operator+(Person& p){
        Person temp;
        temp.m_A=this->m_A+p.m_A;
        temp.m_B=this->m_B+p.m_B;
        return temp;
    }
    void print_Person(string p){
        cout<<p<<"的m_A="<<m_A<<endl;
        cout<<p<<"的m_B="<<m_B<<endl;
    }
private:
    int m_A;
    int m_B;
};

ostream& operator<<(ostream& cout,Person& p){
    cout<<"m_A="<<p.m_A<<"\n"<<"m_B="<<p.m_B;
    return cout;
}

void test01(){
    Person p1(10,20);
    Person p2(30,76);
    Person p3=p1+p2;
    //本质
    Person p4=p3.operator+(p2);
    p3.print_Person("p3");
    p4.print_Person("p4");
}

void test02(){
    Person p1(10,20);
    cout<<p1<<endl;
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}
