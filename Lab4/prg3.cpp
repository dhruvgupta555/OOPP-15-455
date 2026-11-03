#include <bits/stdc++.h>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

Item findMostExpensiveItem(const vector<Item>& cart)
{
    Item expensive = cart[0];

    for (const auto& item : cart)
    {
        if (item.price > expensive.price)
        {
            expensive = item;
        }
    }

    return expensive;
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

    auto expensive = findMostExpensiveItem(cart);

    cout << "Most Expensive Item: "
         << expensive.name << endl;

    cout << "Unit Price = Rs. "
         << expensive.price << endl;

    return 0;
}
