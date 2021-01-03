#include "../std_lib_facilities.h"

int main()
{
    string previous=" ";    //前一个单词，初始化为“不是一个单词”
    string current;         //当前单词
    while (cin>>current)    //读入单词流
    {
        if(previous==current)   //检测当前单词是否和前一个相同
            cout<<"repeated word:"<<current<<'\n';
        previous=current;
        /* code */
    }
    

}