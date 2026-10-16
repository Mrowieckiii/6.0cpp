#include <iostream>
using namespace std;


int main() {
    int n;
    int dodac = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
        dodac += i;
    }

    cout << "\n Suma wynosi:" << dodac << endl;
    return 0;
}