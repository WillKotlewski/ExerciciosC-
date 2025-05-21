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
    cout << "O número de homens é " << nHomens << ".\nA média de altura das mulheres é " << somaAltMulheres / nMulheres << ".\nA maior altura é " << maiorAltura << " e a menor altura é " << menorAltura << endl;

    return 0;
}
