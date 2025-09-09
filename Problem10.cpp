#include <iostream>
using namespace std;
int main() {
    double dist, eff, price;
    cin >> dist >> eff >> price;
    double cost = (dist / eff) * price;
    cout << "The cost is $" << cost << endl;
    return 0;
}
