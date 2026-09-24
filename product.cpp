#include<iostream>
using namespace std;

class Product
{
    int productId;
    string productName;
    float price;
    int monthlySales[12];

public:
    void getData()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter sales for 12 months:\n";
        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlySales[i];
        }   
    }
    int total_quantity()
    {
        int total = 0;
        for(int i=0; i<12; i++)
        {
            total = total + monthlySales[i];
        }
        return total;
    }
    
    float TortalBill()
    {
        return total_quantity() * price;
    }
    void display()
    {
        cout<<"\n.......................\n";
        cout<<"Product ID: " << productId << endl;
        cout<<"Product Name" << productName<< endl;
        cout<<"Price"<<endl;
        cout<<"Total Quantity: "<< total_quantity()<<endl;
        cout<<"Total Bill: "<< TortalBill() << endl;
        cout<<".........................\n";
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product p[10];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        p[i].getData();
    }

    cout << "\n========== PRODUCT DETAILS ==========\n";

    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }

    return 0;
}