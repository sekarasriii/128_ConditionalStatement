#include <iostream>
using namespace std;

int main()
{
	float nMath, nFisika, nRerata;
	string status;

	cout << "Masukan nilai Matematika = ";
	cin >> nMath;
	cout << "Masukan nilai Fisika = ";
	cin >> nFisika;

	nRerata = (nFisika + nMath) / 2;

	if (nRerata >= 60) {
		status = "Lulus jalur rerata";
	}
	else if (nMath >= 70) {
		status = "Lulus jalur matematika";
	}
	else {
		status = "Tidak lulus";
	}

	cout << "Status kelulusan = " << status << endl;

}
