#include <bits/stdc++.h>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

void applyDiscount(vector<Item>& cart)
{
    for (auto& item : cart)
    {
        if (item.price > 1000)
        {
            item.price = item.price * 0.90;
        }
    }
}

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

    applyDiscount(cart);

    cout << "Updated Cart Total = Rs. "
         << calculateTotal(cart) << endl;

    return 0;
}
