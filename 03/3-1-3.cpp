#include "../std_lib_facilities.h"

int main()
{
    string first_name=" ";  //用户的名字
    string friend_name=" "; //朋友的名字
    cout<<"Enter the name of the person you want to write to:";
    cin>>first_name;
    cout<<"Enter your friend name:";
    cin>>friend_name;
    cout<<"Dear "<<first_name<<",\n";
    cout<<"  How are you? I am fine. I miss you. I love you!\n";
    cout<<"  Have you seen "<<friend_name<<" lately?\n";
    keep_window_open();
}