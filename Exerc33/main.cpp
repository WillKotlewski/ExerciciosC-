#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float menorAltura = 0, maiorAltura = 0, altura = 0, somaAltMulheres = 0;
    int nHomens = 0, nMulheres = 0, nPessoas = 1;
    char sexo;

    while(nPessoas <= 3){
        cout << "\nEscreva F para feminino e M para masculino.\nSexo: ";
        cin >> sexo;
        if(sexo == 'M'){
            nHomens++;
        }
        if(sexo == 'F'){
            nMulheres++;
        }

        cout << "Escreva a altura: ";
        cin >> altura;

        if(sexo == 'F'){
            somaAltMulheres = somaAltMulheres + altura;
        }
        if(maiorAltura < altura){
            maiorAltura = altura;
        }
        if (menorAltura > altura){
            menorAltura = altura;
        }
        nPessoas++;
    }
    cout << "O n�mero de homens � " << nHomens << ".\nA m�dia de altura das mulheres � " << somaAltMulheres / nMulheres << ".\nA maior altura � " << maiorAltura << " e a menor altura � " << menorAltura << endl;

    return 0;
}
