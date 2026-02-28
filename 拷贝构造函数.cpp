#include<iostream>

class Person{
public:
    Person(){
        std::cout<<"Person的默认构造函数"<<std::endl;
    }
    Person(int age){
        m_age=age;
        std::cout<<"Person的有参构造函数"<<std::endl;
    }
    Person(const Person& p){
        m_age=p.m_age;
        std::cout<<"Person的拷贝构造函数"<<std::endl;
    }
    ~Person(){
        std::cout<<"Person的析构函数"<<std::endl;
    }
    int m_age;
};

void test01(){
    Person p1(10);
    Person p2(p1);
    std::cout<<"age_p1="<<p1.m_age<<std::endl;
    std::cout<<"age_p2="<<p2.m_age<<std::endl;
}

void do_work(Person& p){
    p.m_age=20;
}

void test02(){
    Person p;
    do_work(p);
    std::cout<<"age_p="<<p.m_age<<std::endl;
}

void do_work_(Person p){

}

void test03(){
    Person p;
    do_work_(p);
}

Person _do_work_(){
    Person p(10);
    return p;
}

void test04(){
    Person p1=_do_work_();
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    test03();
    test04();
    return 0;
}
