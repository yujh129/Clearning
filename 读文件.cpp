#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void test01(){
    ifstream ifs;
    ifs.open("text.txt",ios::in);
    if(!ifs.is_open()){
        cout<<"文件打开失败"<<endl;
        return;
    }
    //1.
    // char buf[1024]={0};
    // while (ifs>>buf)
    // {
    //     cout<<buf<<endl;
    // }
    //2.
    // char buff[1024]={0};
    // while(ifs.getline(buff,sizeof(buff))){
    //     cout<<buff<<endl;
    // }
    //3.
    // string buf;
    // while(getline(ifs,buf)){
    //     cout<<buf<<endl;
    // }
    //4.
    // char c;
    // while((c=ifs.get())!=EOF){
    //     cout<<c;
    // }
    ifs.close();
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
