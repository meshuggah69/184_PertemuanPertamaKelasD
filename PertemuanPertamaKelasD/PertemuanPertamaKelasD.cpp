// PertemuanPertamaKelasD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{//begin
    
    //numeric nAlas, nTinggi, nLuas
    //display 'Masukan Alasnya= '
    //accept nAlas 
    //display 'Masukan Tingginya= '
    //accept nTinggi
    //compute nLuas = 1/2 * nAlas * nTinggi
    //display 'Luasnya adalah = ' + nLuas

    int nAlas, nTinggi, nLuas;
    double nLuas; 
    cout << "Masukan Alasnya= ";
    cin >> nAlas;
    cout << "Masukan Tingginya= ";
    cin >> nTinggi;
    nLuas = 0.5 * (nAlas * nTinggi);
    cout << "luasnya Adalah= " << nLuas << endl;




}//end

