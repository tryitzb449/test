#include "../std_lib_facilities.h"

int main()
{
    int pen_num = 0, nick_num = 0, dimes_num = 0, quart_num = 0, h_doll_num = 0, doll_num = 0;
    string pen_word = "pennies", nick_word = "nickels", dimes_word = "dimes", quart_word = "quarters";
    for (int i = 0; i < 10; ++i)
    {
        /* code */
        cout << "How many pennies do you have?";
        cin >> pen_num;
        cout << "\nHow many nickels do you have?";
        cin >> nick_num;
        cout << "\nHow many dimes do you have?";
        cin >> dimes_num;
        cout << "\nHow many quarters do you have?";
        cin >> quart_num;
        cout << "\nHow many half dollars do you have?";
        cin >> h_doll_num;
        cout << "\nHow many one-dollar do you have?";
        cin >> doll_num;
        if (pen_num == 1)
            pen_word = " pennie";
        if (nick_num == 1)
            nick_word = " nickel";
        if (dimes_num == 1)
            dimes_word = " dime";
        if (quart_num == 1)
            quart_word = " quarter";
        cout << "You have " << pen_num << pen_word << ".\n"
             << "You have " << nick_num << nick_word << ".\n"
             << "You have " << dimes_num << dimes_word << ".\n"
             << "You have " << quart_num << quart_word << ".\n"
             << "You have " << h_doll_num << " half dollars.\n"
             << "You have " << doll_num << " one-dollar.\n"
             << "The value of all of your coins is "
             //<< pen_num + nick_num * 5 + dimes_num * 10 + quart_num * 25 + h_doll_num * 50 + doll_num * 100
             << "$" << (pen_num + nick_num * 5 + dimes_num * 10 + quart_num * 25 + h_doll_num * 50 + doll_num * 100) / 100.0
             << ".\n";
    }
}