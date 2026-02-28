#include<iostream>
using namespace std;
#include<string>

class Circle{
public:
    double r;
    double calculateC(){
        return 2*PI*r;
    }
private:
    const double PI=3.1415926;
};

class Student{
public:
    string m_Name;
    int m_id;

    void showStudent(){
        cout<<"姓名:"<<m_Name<<" "<<"学号"<<m_id<<endl;
    }

    void setName(string name){
        m_Name=name;
    }

    void setId(int id){
        m_id=id;
    }
};

int main(int argc, char const *argv[])
{
    Circle c1;
    c1.r=10;
    cout<<"周长为:"<<c1.calculateC()<<endl;

    Student s1;
    s1.setId(1);
    s1.setName("张三");
    s1.showStudent();


    return 0;
}
