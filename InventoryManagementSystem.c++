#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Class representing a single product record
class Product {
public:
    int id;
    string name;
    float price;
    int quantity;

    Product(int id, string n, float p, int q) : id(id), name(n), price(p), quantity(q) {}
};

class InventorySystem {
private:
    vector<Product> products;
    const string filename = "inventory_data.txt";

    // Persistence: Save data to file
    void saveToFile() {
        ofstream outFile(filename);
        for (const auto& p : products) {
            outFile << p.id << " " << p.name << " " << p.price << " " << p.quantity << endl;
        }
    }

    // Persistence: Load data from file
    void loadFromFile() {
        products.clear();
        ifstream inFile(filename);
        int id, qty;
        string name;
        float price;
        while (inFile >> id >> name >> price >> qty) {
            products.emplace_back(id, name, price, qty);
        }
    }

public:
    InventorySystem() { loadFromFile(); }

    void addProduct() {
        int id, qty;
        string name;
        float price;
        cout << "\nEnter ID: "; cin >> id;
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Price: "; cin >> price;
        cout << "Enter Quantity: "; cin >> qty;
        products.emplace_back(id, name, price, qty);
        saveToFile();
        cout << "Product successfully added!\n";
    }

    void displayAll() {
        cout << "\n" << left << setw(10) << "ID" << setw(15) << "Name" << setw(10) << "Price" << "Stock" << endl;
        for (const auto& p : products) {
            cout << left << setw(10) << p.id << setw(15) << p.name << setw(10) << p.price << p.quantity << endl;
        }
    }

    void searchProduct() {
        int id;
        cout << "\nEnter ID to search: "; cin >> id;
        for (const auto& p : products) {
            if (p.id == id) {
                cout << "Found: " << p.name << " | Price: " << p.price << " | Stock: " << p.quantity << endl;
                return;
            }
        }
        cout << "Product not found.\n";
    }
};

int main() {
    InventorySystem ims;
    int choice;
    do {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add Product\n2. Display All\n3. Search Product\n4. Exit\nChoice: ";
        cin >> choice;
        switch(choice) {
            case 1: ims.addProduct(); break;
            case 2: ims.displayAll(); break;
            case 3: ims.searchProduct(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 4);
    return 0;
}