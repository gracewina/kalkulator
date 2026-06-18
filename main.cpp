#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, n;
    
    cout << "===============================================" << endl;
    cout << "  Kalkulator Integral Substitusi - Gracewinna  " << endl;
    cout << "  Bentuk: \x14 a * x * (x^2 + b)^n dx          " << endl;
    cout << "===============================================" << endl;
    
    cout << "Masukkan nilai koefisien luar (a): ";
    cin >> a;
    cout << "Masukkan nilai konstanta dalam (b): ";
    cin >> b;
    cout << "Masukkan nilai pangkat (n): ";
    cin >> n;
    
    double kLuar = a / 2.0;
    double pangkatBaru = n + 1.0;
    double kAkhir = kLuar / pangkatBaru;
    
    cout << "\n>>> Langkah-Langkah Penyelesaian <<<\n" << endl;
    cout << "1. Misalkan u = x^2 + " << b << " sehingga du = 2x dx atau x dx = du / 2" << endl;
    cout << "2. Substitusi menghasilkan: " << kLuar << " * \x14 u^" << n << " du" << endl;
    cout << "3. Hasil Integrasi: (" << kLuar << " / " << pangkatBaru << ") * u^" << pangkatBaru << " + C" << endl;
    
    cout << "\n>>> Hasil Akhir <<<" << endl;
    cout << fixed << setprecision(2);
    cout << "F(x) = " << kAkhir << " * (x^2 + " << b << ")^" << pangkatBaru << " + C" << endl;
    cout << "===============================================" << endl;
    
    return 0;
}