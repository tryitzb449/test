#include "../std_lib_facilities.h"

int main()
{
    int val1;
    cout<<"Enter the number:";
    cin>>val1;
    if(val1%2==0 && val1!=0)
        cout<<"The number "<<val1<<" is an even number";
    else
        cout<<"The number "<<val1<<" is not an even number";
}