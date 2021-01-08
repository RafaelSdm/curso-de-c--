#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1,n2,soma,mult,resto;
    n1 = 10;
    n2 = 20;
    float div;
    soma = n1+n2;
    mult = n1 *n2;
    div = (float)n1/n2;
    resto = n2 %n1;

    //cout<<soma;
    //cout<<mult;
    //cout<<div;
    cout<<resto;
    return 0;
}
