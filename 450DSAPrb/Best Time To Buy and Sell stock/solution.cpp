#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> price(n);
    cout << "Enter prices for each day: ";
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    int maxProfit = 0;
    int bestBuy = price[0];

    for (int i = 1; i < n; i++) {
        if (price[i] > bestBuy) {
            maxProfit = max(maxProfit, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }

    cout << "Maximum Profit = " << maxProfit << endl;

    return 0;
}
