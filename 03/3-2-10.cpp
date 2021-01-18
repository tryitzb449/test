#include "../std_lib_facilities.h"

int main()
{
    string operation="";
    double num1,num2;
    while (true)
    {
        /* code */
        cout<<"Enter your operator and tow numbers:\n";
        cin>>operation>>num1>>num2;
        if(operation=="+")
            cout<<"The "<<num1<<" + "<<num2<<" = "<<num1+num2<<" \n";
        else if(operation=="-")
            cout<<"The "<<num1<<" - "<<num2<<" = "<<num1-num2<<" \n";
        else if(operation=="*")
            cout<<"The "<<num1<<" * "<<num2<<" = "<<num1*num2<<" \n";
        else if(operation=="/")
        {
            if(num2==0)
            {
                cout<<"The divisor is no zero!\n";
                break;
            }
            cout<<"The "<<num1<<" / "<<num2<<" = "<<num1/num2<<" \n";
        }
        else
            break;
    }
    

}