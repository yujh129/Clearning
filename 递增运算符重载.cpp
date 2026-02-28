#include<iostream>
using namespace std;

class Myint{
friend ostream& operator<<(ostream& cout,const Myint& myint);
public:
    Myint(){
        m_num=0;
    }
    Myint(int num):m_num(num)
    {

    }
    Myint(const Myint& mynum){
        this->m_num=mynum.m_num;
    }
    //重载前置运算符
    Myint& operator++(){
        m_num++;
        return *this;
    }
    Myint operator++(int){
        Myint temp=*this;
        m_num++;
        return temp;
    }
    Myint& operator--(){
        m_num--;
        return *this;
    }
    Myint operator--(int){
        Myint temp=*this;
        m_num--;
        return temp;
    }
private:
    int m_num;
};

ostream& operator<<(ostream& cout,const Myint& myint){
    cout<<"myint="<<myint.m_num;
    return cout;
} 

void test01(){
    Myint myint1(10);
    cout<<++(++myint1)<<endl;
    cout<<myint1<<endl;
}

void test02(){
    Myint myint2;
    cout<<myint2++<<endl;
    cout<<myint2<<endl;
    cout<<myint2--<<endl;
    cout<<myint2<<endl;
}
    
int main(){
    //test01();
    test02();
    return 0;
}