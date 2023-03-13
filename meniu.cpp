//
// Created by sampa on 3/7/2023.
//
#include <iostream>
#include "functions.h"
using namespace std;

void meniu() {
    int op = 100;
    int v[100];
    while(op != 0){
        cout << "1. Citire" << endl;
        cout << "2. Afisare" << endl;
        cout << "3. Cea mai lunga secventa de numere distincte" << endl;
        cout << "4. Secventa pentru care oricare doua numere vecine scazute vecine sunt prime" << endl;
        cout << "0. Iesire" << endl;
        cout << "Alege o varianta:";

        cin >> op;
        switch(op) {
            case 1: ///citire
            citire(v);
                break;
            case 2: ///afisarea
                afisare(v);
                cout << endl;
                break;
            case 3: ///iesire
                cmlsnd(v);
                break;
        }
    }
}

