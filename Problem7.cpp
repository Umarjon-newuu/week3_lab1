#include <iostream>
using namespace std;
int main() {
    double x, y;
    cin >> x >> y;
    double t = (3 * (x * x + 3)) / (y / 4 + 3);
    cout << "t=" << t << endl;
    return 0;
}
