#include <iostream>
#include<string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chck_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read(void)
{
    cout << "enter the value " << endl;
    cin >> s;
}
void binary::chck_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect input" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "displaying the binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.chck_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}