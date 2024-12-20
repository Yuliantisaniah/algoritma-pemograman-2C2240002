#include <iostream>
using namespace std;

int f(int x) {
    return x * x - 2 * x + 5;
}

int main() {
    int A, B;

    cout << "Masukkan A: ";
    cin >> A;
    cout << "Masukkan B: ";
    cin >> B;

    for (int x = A; x <= B; x++) {
        cout << "f(" << x << ") = " << f(x) << endl;
    }

    return 0;
}
