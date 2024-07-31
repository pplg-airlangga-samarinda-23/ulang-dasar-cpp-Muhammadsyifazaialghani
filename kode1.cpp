#include <iostream>
using namespace std;

void cetakData(string nama, string nisn, string jurusan, string tinggiBadan) {

cout << "nama :" << nama << endl;
cout << "nisn :" << nisn << endl;
cout << "jurusan :" << jurusan << endl;
cout << "tinggiBadan" << tinggiBadan << endl;
}

int main() {
    string nama = "Muhammd syifa zai al ghani";
    string nisn = "0085646403";
    string jurusan = "X PPLG";
    string tinggiBadan = "167 cm"; 

cetakData(nama, nisn, jurusan, tinggiBadan);


return 0;
}