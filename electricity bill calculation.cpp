#include <iostream>
using namespace std;

int main() {
    int unit;
    double cost, bill, tax;
    cout<<"Enter number of units consumed: ";
	cin >>unit;
    cout<<"Enter per unit cost: ";
	cin >>cost;
    bill = unit * cost;
    if (bill > 100 && bill < 200) {
        tax = bill * 0.20;
        bill += tax;
    } else if (bill >= 200 && bill < 300) {
        tax = bill * 0.40;
        bill += tax;
    } else if (bill > 300) {
        tax = bill * 0.60;
        bill += tax;
    }
    cout << "Total bill: $" << bill << endl;
    return 0;
}

