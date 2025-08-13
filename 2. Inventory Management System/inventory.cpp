#include <iostream>
#include <vector>
using namespace std;

class Product
{
public:
    int id;
    string name;
    int quantity;
    double price;

    Product(int i, string n, int q, double p) : id(i), name(n), quantity(q), price(p) {}
};

class Inventory
{
    vector<Product> products;
public:
    void addProduct()
    {
        int id, qty; double price;
        string name;
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter product name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter quantity: ";
        cin >> qty;
        cout << "Enter price: ";
        cin >> price;
        products.push_back(Product(id, name, qty, price));
        cout << "Product added successfully.\n";
    }

    void updateStock()
    {
        int id, qty;
        cout << "Enter product ID to update quantity: ";
        cin >> id;
        for (auto &p : products)
        {
            if (p.id == id)
            {
                cout << "Enter new quantity: ";
                cin >> qty;
                p.quantity = qty;
                cout << "Quantity updated successfully.\n";
                return;
            }
        }
        cout << "Product not found.\n";
    }

    void displayInventory()
    {
        cout << "ID\tName\t\tQuantity\tPrice\n";
        for (const auto &p : products)
            cout << p.id << "\t" << p.name << "\t\t" << p.quantity << "\t\t" << p.price << "\n";
    }

    void totalValue()
    {
        double total = 0;
        for (const auto &p : products)
            total += p.quantity * p.price;
        cout << "Total inventory value: $" << total << "\n";
    }
};

int main()
{
    Inventory inv;
    int choice;
    do
    {
        cout << "\n1. Add Product\n2. Update Stock\n3. Display Inventory\n4. Total Value\n5. Exit\nChoice: ";
        cin >> choice;
        switch(choice)
        {
            case 1: inv.addProduct(); break;
            case 2: inv.updateStock(); break;
            case 3: inv.displayInventory(); break;
            case 4: inv.totalValue(); break;
            case 5: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while(choice != 5);
    return 0;
}
