#include<iostream>
using namespace std;

void print_address(int* a){
    cout<<"地址为:"<<a<<endl;
}

int g_a=10,g_b=10;
static int s_g_a=10,s_g_b=10;
const int c_g_a=10,c_g_b=10;

int main(int argc, char const *argv[])
{
    int a=10,b=10;
    static int s_a=10,s_b=10;
    const int c_l_a=10,c_l_b=10;
    //局部变量
    cout<<"局部变量"<<endl;
    print_address(&a);
    print_address(&b);
    //全局变量
    cout<<"全局变量"<<endl;
    print_address(&g_a);
    print_address(&g_b);
    //静态局部变量
    cout<<"静态局部变量"<<endl;
    print_address(&s_a);
    print_address(&s_b);
    //静态全局变量
    cout<<"静态全局变量"<<endl;
    print_address(&s_g_a);
    print_address(&s_g_b);
//常量
    //字符串常量
    cout<<"字符串常量"<<endl;
    cout<<"地址为:"<<&"hello"<<endl;
    //const 修饰的变量
    //const 修饰的全局变量
    cout<<"const修饰的全局变量"<<endl;
    cout<<"地址为:"<<&c_g_a<<endl;
    cout<<"地址为:"<<&c_g_b<<endl;
    //const 修饰的局部变量
    cout<<"const修饰的局部变量"<<endl;
    cout<<"地址为:"<<&c_l_a<<endl;
    cout<<"地址为:"<<&c_l_b<<endl;
    return 0;
}
