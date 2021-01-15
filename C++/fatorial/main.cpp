#include <iostream>

using namespace std;

int main()
{
    int  fatorial =0;
    int numero =0;
    cout<< "Informe um numero para ser fatorado:";
    cin>> fatorial;
    int i = 1;
    int resultado =0;

    if(fatorial == 0){
        cout<< "O fatorial de 0 é 1"<<endl;
    }else{

         for(numero = 1; numero<fatorial;numero++){
                i = i *(numero+1);



         }

         cout<< "o fatorial de "<< fatorial<< " eh "<< i;



    }
}
