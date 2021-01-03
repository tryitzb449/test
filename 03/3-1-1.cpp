#include "../std_lib_facilities.h"

int main()
{
    string first_name=" ";  //用户的名字
    cout<<"Enter the name of the person you want to write to:";
    cin>>first_name;
    cout<<"Dear "<<first_name<<",\n";
    keep_window_open();
}