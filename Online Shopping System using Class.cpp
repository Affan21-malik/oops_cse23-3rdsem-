#include <iostream>
#include <iomanip>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    double price;
    int quantity;

public:
    // Constructor
    Product(int id, string name, double p, int q)
    {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    // Calculate price for given quantity
    double calculatePrice(int q)
    {
        return price * q;
    }

    // Calculate price with discount
    double calculatePrice(int q, double discount)
    {
        double total = price * q;
        return total - (total * discount / 100);
    }

    // Display product details
    void display()
    {
        cout << left << setw(10) << productID
             << setw(20) << productName
             << setw(10) << price
             << setw(10) << quantity
             << setw(15) << calculatePrice(quantity)
             << endl;
    }

    // Destructor
    ~Product()
    {
        cout << "Product object " << productID
             << " destroyed." << endl;
    }
};

int main()
{
    Product p1(101, "Laptop", 50000, 1);
    Product p2(102, "Headphones", 2000, 2);
    Product p3(103, "Mouse", 1000, 3);

    cout << fixed << setprecision(2);

    cout << "---------------- ONLINE SHOPPING BILL ----------------\n";
    cout << left << setw(10) << "ID"
         << setw(20) << "Product"
         << setw(10) << "Price"
         << setw(10) << "Qty"
         << setw(15) << "Total" << endl;

    cout << "-------------------------------------------------------\n";

    p1.display();
    p2.display();
    p3.display();

    double total = p1.calculatePrice(1) +
                   p2.calculatePrice(2) +
                   p3.calculatePrice(3);

    double discountBill = p1.calculatePrice(1, 10) +
                          p2.calculatePrice(2, 10) +
                          p3.calculatePrice(3, 10);

    cout << "\nTotal Price: Rs. " << total;
    cout << "\nFinal Price after 10% Discount: Rs. "
         << discountBill << endl;

    return 0;
}