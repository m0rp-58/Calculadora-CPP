#include <iostream>

using namespace std;

int main () {
    bool loop = true;
    while ( loop == true ) {

        int numero1;
        int numero2;

        cout << "=======================" << endl << endl;
        cout << "  M0rp's Calculator" << endl << endl;
        cout << "=======================" << endl << endl;

        cout << "Type the first number : ";
        cin >> numero1;
        if(numero1 <= 0){
            cout << "Desculpe mas voce escreveu um numero negativo ou o numero 0, ou uma letra..." << endl;
            loop = false;
        }else{
            cout << "Type the second number : ";
            cin >> numero2;
            cout << "" << endl;
            cout << "A soma:" << " " << numero1 + numero2 << endl << endl;
            cout << "A subtracao:" << " " << numero1 - numero2 << endl << endl;
            cout << "A divisao:" << " " << numero1 / numero2 << endl << endl;
            cout << "A multiplicacao:" << " " << numero1 * numero2 << endl << endl;

}

}

}
