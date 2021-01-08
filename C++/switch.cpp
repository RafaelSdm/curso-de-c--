#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 7;

    switch (num)
    {
    case 12:
        cout<<"o numero informado é o 12";
        break;
    case 6:
        cout<<"o numero informado é 6";
        break;
    case 7:
        cout<<"o numero informado é o 7";
        break;

    
    default:
        cout<<"o numero informado não entá entre os switch";
        break;
    }
    return 0;
}
