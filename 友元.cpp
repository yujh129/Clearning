#include<iostream>
using namespace std;
#include<string>

class Buliding{
friend class GoodGay;
public:
    Buliding(){
        SittingRoom="客厅";
        BedRoom="卧室";
    }
    string SittingRoom;
private:
    string BedRoom;
};

class GoodGay{
public:
    GoodGay(Buliding& buliding){
        m_buliding=new Buliding;
        *m_buliding=buliding;
    }
    void visit(){
        cout<<"正在访问"<<m_buliding->SittingRoom<<endl;
        cout<<"正在访问"<<m_buliding->BedRoom<<endl;
    }
    Buliding* m_buliding; 
};

void test01(){
    Buliding building;
    GoodGay goodgay(building);
    goodgay.visit();
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
