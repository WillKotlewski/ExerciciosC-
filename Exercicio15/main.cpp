#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    cout << "Digite 2 n�meros" << endl;
    cin >> n1 >> n2;
    if(n1%2==0){
        if(n2%2==0){
            cout << "Os 2 s�o pares.";
        } else {
            cout << n1 << " � par e " << n2 << " � impar";
        }
    } else if(n2%2==0){
        cout << n1 << " � impar e " << n2 << " � par";
    } else {
        cout << "Os 2 s�o impares";
    }
    return 0;
}
