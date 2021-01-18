#include "../std_lib_facilities.h"

int main()
{
    int val1,val2,val3;
    int tmp;
    cout<<"Enter three numbers:";
    cin>>val1>>val2>>val3;
    if(val1>val2)
    {
        tmp=val1;
        val1=val2;
        val2=tmp;
    }
    if(val1>val3)
    {
        tmp=val1;
        val1=val3;
        val3=tmp;
    }
    if(val2>val3)
    {
        tmp=val2;
        val2=val3;
        val3=tmp;
    }
    cout<<"The number sort: "<<val1<<" "<<val2<<" "<<val3;
}