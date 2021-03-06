#include<bits/stdc++.h>

using namespace std;

int mdc(int x, int y) {

    if (x < y) {
        int aux = y;
        y = x;
        x = aux;
    }

    //Se x for múltiplo de y, mds(x,y) = y
    if ((x%y) == 0) return y;

    //se não, recursividade!
    return mdc(y, x%y);
}

int mmc(int x, int y) {

    return x*y/mdc(x,y);

}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    cout << mdc(x, y) << endl;
    cout << mmc(x,y) << endl;
}
