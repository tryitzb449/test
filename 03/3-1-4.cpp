#include "../std_lib_facilities.h"

int main()
{
    char friend_sex=0;
    string first_name=" ";  //用户的名字
    string friend_name=" "; //朋友的名字
    cout<<"Enter the name of the person you want to write to:";
    cin>>first_name;
    cout<<"Enter your friend name:";
    cin>>friend_name;
    cout<<"if your friend is Man please enter 'm',else enter 'f':";
    cin>>friend_sex;
    cout<<"Dear "<<first_name<<",\n";
    cout<<"  How are you? I am fine. I miss you. I love you!\n";
    cout<<"  Have you seen "<<friend_name<<" lately?\n";
    if(friend_sex=='m')
        cout<<"  If you see "<<friend_name<<" please ask him to call me.\n";
    else if(friend_sex=='f')
        cout<<"  If you see "<<friend_name<<" please ask her to call me.\n";
    keep_window_open();
}