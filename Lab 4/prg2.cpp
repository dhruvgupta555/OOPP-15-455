#include <bits/stdc++.h>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

double calculateTotal(const vector<Item>& cart)
{
    double total = 0;

    for (const auto& item : cart)
    {
        total += item.quantity * item.price;
    }

    return total;
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

    cout << "Total Amount Payable = Rs. "
         << calculateTotal(cart) << endl;

    return 0;
}
