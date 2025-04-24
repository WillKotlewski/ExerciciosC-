#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    cout << "Digite 2 números" << endl;
    cin >> n1 >> n2;
    if(n1%2==0){
        if(n2%2==0){
            cout << "Os 2 são pares.";
        } else {
            cout << n1 << " é par e " << n2 << " é impar";
        }
    } else if(n2%2==0){
        cout << n1 << " é impar e " << n2 << " é par";
    } else {
        cout << "Os 2 são impares";
    }
    return 0;
}
