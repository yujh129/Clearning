#include<iostream>
using namespace std;

class Cube{

public:

    int calculate_S(){
        return 2*(m_L*m_H+m_H*m_W+m_L*m_W);
    }
    int calculate_V(){
        return m_H*m_L*m_W;
    }
    void set_L(int L){
        m_L=L;
    }
    void set_H(int H){
        m_H=H;
    }
    void set_W(int W){
        m_W=W;
    }
    int get_L(){
        return m_L;
    }
    int get_H(){
        return m_H;
    }
    int get_W(){
        return m_W;
    }
    bool is_Same_byclass(Cube& c){
        return (m_H==c.get_H()&&m_L==c.get_L()&&m_W==c.get_W());
    }
private:
    int m_L;
    int m_W;
    int m_H;
};

bool is_Same(Cube& c1,Cube& c2){
    return (c1.get_H()==c2.get_H()&&c1.get_L()==c2.get_L()&&c1.get_W()==c2.get_W());
}

int main(int argc, char const *argv[])
{
    Cube c1;
    c1.set_H(10);
    c1.set_L(10);
    c1.set_W(10);

    cout<<"面积为："<<c1.calculate_S()<<endl;
    cout<<"体积为："<<c1.calculate_V()<<endl;

    Cube c2;
    c2.set_H(10);
    c2.set_L(10);
    c2.set_W(12);
    
    cout<<"面积为："<<c2.calculate_S()<<endl;
    cout<<"体积为："<<c2.calculate_V()<<endl;

    cout<<is_Same(c1,c2)<<endl;
    cout<<c1.is_Same_byclass(c2)<<endl;
    return 0;
}
