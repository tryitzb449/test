#include "../std_lib_facilities.h"

int main()
{
    cout<<"Please enter your first name and age\n";
    string first_name="???";        //字符串变量（“？？？”表示“不知道名字”）
    //int age=-1;         //整型变量（-1表示“不知道年龄”）
    double age=0.0;
    cin>>first_name>>age;   //读取字符串和整数
    cout<<"Hello,"<<first_name<<"(age"<<age*12<<")\n";
    keep_window_open();

}