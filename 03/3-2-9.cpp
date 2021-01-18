#include "../std_lib_facilities.h"

int main()
{
    string str1="";
    while (true)
    {
        /* code */
        cout<<"Enter a string:\n";
        cin>>str1;
        if(str1=="zero")
            cout<<"0\n";
        else if(str1=="one")
            cout<<"1\n";
        else if(str1=="two")
            cout<<"2\n";
        else if(str1=="three")
            cout<<"3\n";
        else if(str1=="four")
            cout<<"4\n";
        else
        {
            cout<<"not a number I know!";
            break;
        }
        
    }
    
}