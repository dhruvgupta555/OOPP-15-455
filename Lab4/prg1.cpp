#include <bits/stdc++.h>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item>& cart)
{
    cout << "\nName\tQuantity\tPrice\n";

    for (const auto& item : cart)
    {
        cout << item.name << "\t"
             << item.quantity << "\t\t"
             << item.price << endl;
    }
}

int main()
{
    vector<Item> cart =
    {
        {"Laptop", 1, 55000},
        {"Mouse", 2, 800},
        {"Keyboard", 1, 1500},
        {"Headphones", 2, 2000}
    };

    displayCart(cart);

    return 0;
}
