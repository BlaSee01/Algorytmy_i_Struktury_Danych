#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a;
    int dzielniki = 0;
    cout << "Podaj liczb�: ";
    cin >> a;

    for(int i = 2; i <= a ; i++){
        if(a%i==0)  dzielniki++;
    }

    if(dzielniki > 2){
        cout << "Nie jest liczb� pierwsz�!";
    }else{
        cout << "Jest liczb� peirwsz�!";
    }

    return 0;
}
