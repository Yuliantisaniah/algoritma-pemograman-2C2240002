#include <iostream>
#include <fstream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c;
    double D, x1, x2;

    cout << "Masukkan nilai koefisien a: ";
    cin >> a;
    cout << "Masukkan nilai koefisien b: ";
    cin >> b;
    cout << "Masukkan nilai koefisien c: ";
    cin >> c;
    
    if (a == 0) {
        cout << "Persamaan bukan persamaan kuadrat (a = 0)." << endl;
        return 0;
    }

    D = b * b - 4 * a * c;

    ofstream outfile("hasil_persamaan.txt");

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        outfile << "Persamaan memiliki dua akar real:" << endl;
        outfile << "Akar 1: " << x1 << endl;
        outfile << "Akar 2: " << x2 << endl;
    } else if (D == 0) {
        x1 = -b / (2 * a);

        outfile << "Persamaan memiliki satu akar real:" << endl;
        outfile << "Akar: " << x1 << endl;
    } else {
        outfile << "Persamaan tidak memiliki akar real." << endl;
    }

    outfile.close();
    
    cout << "Hasil telah disimpan dalam file 'hasil_persamaan.txt'." << endl;

    return 0;
}
