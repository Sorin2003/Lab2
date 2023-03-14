#include <iostream>

using namespace std;


void citire(int *v)
{
    int i;
    //cin >> n;
    //v = new int[n+1];
    int n;
    n = v[0];
    for (i = 1; i<=n; i++)
    {
        cout << "Introduceti un numar:";
        cin >> v[i];
    }
}


void afisare(int *v)
{
    cout << "In vector se afla:";
    int n, i;
    n = v[0];
    for (i = 1; i<=n; i++)
        cout << v[i] << ",";
}


bool prim(int n)///verifica daca un numar este primm
{
    int i = 2;
    if(n<0)
        n = n * (-1);
    if (n<2)
        return false;
    while(i < n)
    {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}


void cmlsprime(int *v)///5 cea mai lunga secventa in care a-b e nr prim
{
     int i, nr = 0, n, nrmax = 0, j = 0;
     n = v[0];
     for(i=1; i<n; i++) {
         ///cout<<v[i+1]-v[i]<<" "<<prim(v[i + 1] - v[i])<<endl;
         if (prim(v[i + 1] - v[i]))
             nr++;
         if (nr > nrmax) {
             nrmax = nr;
             j = i;
         }
         if (!prim(v[i + 1] - v[i])) {
             nr = 0;
         }
     }
    for(i=j-nrmax + 1; i <= j+1; i++)
    {
        cout<<v[i]<<" ";
    }
     cout << endl;
}


void cmlsinterval(int *v)
{
    int a, b;

    cout << "introdu inceputul intervalului";
    cin >> a;
    cout << "introdu sfarsitul intervalului";
    cin >> b;

    int i, nr = 0, n, nrmax = 0, j = 0;

    n = v[0];

    for (i = 1; i <= n; i++)
    {
        if(a <= v[i] and v[i] <= b){
            ///cout<<v[i]<<" "<<endl;
            nr++;
        }
        else nr = 0;
        if (nr > nrmax) {
            nrmax = nr;
            j = i;
        }
        if (a > v[i] and v[i] > b){
            nr = 0;
        }
    }

    for(i=j-nrmax + 1; i <= j; i++)
    {
        cout<<v[i]<<" ";
    }
    cout << endl;
}


void del(int *v)
{
    delete[] v;
}
