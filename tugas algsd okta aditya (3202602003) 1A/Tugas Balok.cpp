#include <iostream>//balok atau tugas hal 26
using namespace std;
int main() {
	int L,R,V,p,l,t;
	cout << "Masukan Nilai p: ";
	cin >> p;
	cout << "Masukan Nilai l: ";
	cin >> l;
	cout << "Masukan Nilai t: ";
	cin >> t;
	L = 2 * ( (p*l) + (p*t) + (l*t) );
	R = 4 * ( p + l + t );
	V = p * l * t;
	cout << "Luas sisi balok : " << L << endl; 
	cout << "Panjang rusuk balok : " << R << endl; 
	cout << "Volume Balok : " << V << endl; 
	return 0; }
