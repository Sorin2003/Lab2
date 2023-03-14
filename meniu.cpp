//
// Created by sampa on 3/7/2023.
//
#include <iostream>
#include "functions.h"
using namespace std;

int meniu() {
    int op = 100;
    int *v;
    int n;
    while(op != 0){
        cout << "1. Citire" << endl;
        cout << "2. Afisare" << endl;
        cout << "3. Secventa pentru care oricare doua numere vecine scazute vecine sunt prime" << endl;
        cout << "4. Secventa cu numere din interval" << endl;
        cout << "0. Iesire" << endl;
        cout << "Alege o varianta:";

        cin >> op;
        switch(op) {
            case 0:
                del(v);
                return 0;
            case 1:{ ///citire
            cout << "Cate numere doriti sa aiba vectorul:";
            cin>>n;
            v = new int[n+1];
            v[0] = n;
            citire(v);
                break;}
            case 2: ///afisarea{
                afisare(v);
                cout << endl;
                break;
            case 3: ///p5
                cmlsprime(v);
                break;
            case 4: ///p6
                cmlsinterval(v);
                break;
        }
    }
}

