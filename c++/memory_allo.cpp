#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void incounter(void) { counter = 0; }
    void dislayPrice(void);
    void setPrice(void);
};
void shop ::setPrice(void)
{
    cout << "enter ID of your item no." << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::dislayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item id no. " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop kalu;
    kalu.incounter();
    kalu.setPrice();
    kalu.setPrice();
    kalu.setPrice();
    kalu.dislayPrice();

    return 0;
}