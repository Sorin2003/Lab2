//
// Created by sampa on 3/14/2023.
//
#include "functions.h"
void teste()
{
    cout << "Incep testele\n";
    assert(prim(2) == true);
    assert(prim(0) == false);
    assert(prim(-2) == true);
    assert(prim(-4) == false);
    assert(prim(3) == true);
    assert(prim(6) == false);
    cout << "Se termina testele\n";
}
