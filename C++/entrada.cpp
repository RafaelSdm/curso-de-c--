#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2,resultado;
    char op;

    cout<<"informe um numero:";
    cin>>num1;
    cout<<"informe agora outro numero:";
    cin>>num2;
    cout<<"informe a operação:";
    cin>>op;

    switch (op)
    {
    case '+':
        resultado = num1 + num2;
        cout<<"a soma eh de: " <<resultado<<endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout<<"a sub eh de: "<< resultado <<endl;
        break;

    
    default:
        cout<<"informacao invalida";
        break;
    }

    return 0;
}
