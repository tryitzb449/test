#include "../std_lib_facilities.h"

int main()
{
    int val1=0;
    int val2=0;
    int max_val=0;
    int min_val=0;
    cout<<"Please enter two number:";
    cin>>val1>>val2;
    if(val1>val2)
    {
        max_val=val1;
        min_val=val2;
    }
    else
    {
        max_val=val2;
        min_val=val1;
    }
    cout<<"The max val is :"<<max_val
        <<"\nThe min val is :"<<min_val
        <<"\nThe sum is :"<<val1+val2
        <<"\nThe poor is :"<<val1-val2
        <<"\nThe product is :"<<val1*val2
        <<"\nThe Retio is :"<<val1/val2
        <<"\n";
    keep_window_open();
}