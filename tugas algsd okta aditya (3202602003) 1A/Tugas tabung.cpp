#include <iostream>
using namespace std;
int main() {
	const float Phi = 3.14;
	float L,K,V,r,t;
	cout << "Masukan Nilai jari jari: ";
	cin >> r;
	cout << "Masukan Nilai tinggi: ";
	cin >> t;
	L = Phi * r * r;
	K = 2 * Phi * r;
	V = Phi * r * r * t;;
	cout << "luas tutup tabung: " << L << "\n";
	cout << "Keliling Alas Tabung: " << K << "\n";
	cout << "Volume tabung: " << V << "\n";
	return 0;
}
