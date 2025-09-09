#include <iostream>
using namespace std;
int main() {
    int a = 13;
    char b = 'R';
    float first = a / 3.0;
    int second = (int)b;
    float third = (a + b) / 5.0;
    char fourth = b + (a / 10 - 1);
    cout << first << " " << second << " " << third << " " << fourth << endl;
    return 0;
}
