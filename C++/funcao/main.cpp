#include <iostream>

using namespace std;

bool par(int numero){

    if(numero %2 ==0){
        return true;

    }else{
        return false;

    }

}

int main(int argc, char *argv[])
{
   int n =0;
   cout<< "Informe um numero:"<<endl;
   cin>> n;


   if(par(n)==1){
        cout<< "o numero informado eh par";
   }else{
        cout<<"o numero informado eh impar";

    }


}
