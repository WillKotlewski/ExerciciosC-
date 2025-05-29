#include <iostream>

using namespace std;

int main()
{
    int vetA[8], vetB[8];
    for(int i=0;i<8;i++){
        cout << "Indice "<< i << ". Digite um numero: ";
        cin >> vetA[i];
    }
    for(int i=7;i>=0;i--){
        vetB[7-i] = vetA[i];
    }
    for(int i=0;i<8;i++){
        cout << vetA[i] << " ";
    }
    cout << endl;
    for(int i=0;i<8;i++){
        cout << vetB[i] << " ";
    }
    return 0;
}
