#include <iostream>
using namespace std;
int main() {
    int students;
    cin >> students;
    int each = students / 11;   // equal groups
    int last = students % 11;   // remainder goes to last group
    cout << "In first group: " << each << endl;
    cout << "In last group: " << last << endl;
    return 0;
}
