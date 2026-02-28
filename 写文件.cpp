#include<iostream>
#include<fstream>
using namespace std;

void test01(){
    ofstream ofs;
    ofs.open("text.md",ios::out);
    ofs<<"# This is one"<<endl;
    ofs<<"***This is an example***"<<endl;
    ofs.close();
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
