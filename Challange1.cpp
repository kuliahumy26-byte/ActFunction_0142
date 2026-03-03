#include <iostream>
using namespace std;

float var_jarijari;
float var_phi = 3.14159;
void first(){
    cout << "masukkan jarijari pada lingkaran = ";
    cin >> var_jarijari;
}
float luas(float jarijari,float phi){
    return phi * jarijari * jarijari;
}
void last(){
    cout << "Hasil luas untuk lingkarang dengan jarijari" << var_jarijari << "adalah:" << luas(var_jarijari,var_phi);
}
int main (){ 
  first();
  last();
} 