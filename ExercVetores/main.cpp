#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int vetA[5], vetB[5], vetC[5];
    for(int i=0; i<5;i++){
        cout << "Digite um numero para o indice " << i << " do vetor A." << endl;
        cin >> vetA[i];
        cout << "Digite um numero para o indice " << i << " do vetor B." << endl;
        cin >> vetB[i];
    }
    for(int i=0; i<5;i++){
        vetC[i] = vetA[i] * vetB[i];
        cout << "\n";
        cout << vetC[i];
    }
    return 0;
}
