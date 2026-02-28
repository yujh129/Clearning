#include<iostream>

class Person{
public:
    Person(int height,int age,int weight):height(height),age(age),weight(weight)
    {

    }
    void print_Person(){
        std::cout<<height<<std::endl<<age<<std::endl<<weight<<std::endl;
    }
private:
    int height;
    int age;
    int weight;
};

void test01(){
    Person p(160,18,100);
    p.print_Person();
}

int main(int argc, char const *argv[])
{
    test01();    
    return 0;
}
