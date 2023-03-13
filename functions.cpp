#include <iostream>
using namespace std;

void citire(int v[100])
{
    int n, i;
    cout << "Cate numere doriti sa aiba vectorul:";
    cin >> n;
    v[0] = n;
    for (i = 1; i<=n; i++)
    {
        cout << "Introduceti un numar:";
        cin >> v[i];
    }
}

void afisare(int v[100])
{
    cout << "In vector se afla:";
    int n, i;
    n = v[0];
    for (i = 1; i<=n; i++)
        cout << v[i] << ",";
}
void cmlsnd(int v[100])
{
    int i, j = 0, v1[100], v2[10], ok = 0, k;
    int n = v[1], fv[100], maxi = 0, maxim, p1, p2, maxii,p1max,p2max,poz1,poz2;
    for (i = 1; i <= n; i++)
        fv[v[i]]++;
    for(i = 0; i <= 99; i++)
        if (maxi < fv[i]){ maxim = i;
            maxi = fv[i];}
    if (maxi == 1)
        afisare(v);
    if (maxi > 1) {
        p1 = v[1];
        for (i = 1; i <= n; i++)
        {
            j++;
            if (v[i] == maxim) {
                ok++;
                if (ok == 1)
                    poz1 = i;
                if (ok == 2)
                    poz2 = i;
            }
            if (ok == 2)
            {
                p2 = i;
                if (j >= maxii) {
                    p1max = p1;
                    p2max = p2;
                    maxii = j;
                }
                ok = 1;
                p1 = poz1 + 1;
                j = i - p1;
                poz1 = poz2;
            }
            p2 = i;
        }
        for (i = p1max; i<=p2max; i++)
            cout << v[i] << " ";
    }
    cout<<endl;

}
