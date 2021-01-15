#include <iostream>

using namespace std;

int main()
{
    int n=0;

    while(n<=100){
        if(n%2==0){
            cout<<"o numero "<< n <<" eh par"<<endl;

        }else{

            cout<< "o numero "<< n<< " eh impar"<<endl;
        }

        n++;
    }

    return 0;
}
