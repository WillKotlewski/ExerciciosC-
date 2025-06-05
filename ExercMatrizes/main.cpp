#include <iostream>

using namespace std;

int main()
{
    float mat[5][5];
    for(int l=0;l<5;l++){
        for(int c=0;c<5;c++){
            cout << "Digite um numero para a matriz: ";
            cin >> mat[l][c];
        }
    }
    for(int l=0;l<5;l++){
        for(int c=0;c<5;c++){
            cout << mat[l][c] << " ";
        }
        cout << "\n";
    }
    for(int l=0;l<5;l++){
        for(int c=0;c<5;c++){
            if(mat[l][c] > 100){
                mat[l][c] = 0;
            }
        }
    }
    cout << "\n";
    for(int l=0;l<5;l++){
        for(int c=0;c<5;c++){
            cout << mat[l][c] << " ";
        }
        cout << "\n";
    }
    return 0;
}
