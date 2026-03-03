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