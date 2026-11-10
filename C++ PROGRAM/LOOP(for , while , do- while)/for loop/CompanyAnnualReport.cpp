/*
Author: Amit Gupta
Date: 16-08-2026
Program: Generate annual report for N departments
*/

#include <iostream>
using namespace std;

int main() {
    int departments;
    cout << "Enter number of departments: ";
    cin >> departments;

    double revenue, expense, profit, totalProfit = 0;
    for (int i = 1; i <= departments; i++) {
        cout << "Enter revenue of department " << i << ": ";
        cin >> revenue;
        cout << "Enter expense of department " << i << ": ";
        cin >> expense;
        profit = revenue - expense;

        cout << "Department " << i << " Profit => Rs. " << profit << endl;
        totalProfit += profit;
    }
    cout << "Total Annual Company Profit => Rs. " << totalProfit << endl;
    return 0;
}
