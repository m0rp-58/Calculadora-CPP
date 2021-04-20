#include <iostream>
int main () {
    do{
        float num1=0,num2=0;
        std::cout << "=======================" << std::endl;
        std::cout << "  M0rp's Calculator" << std::endl;
        std::cout << "=======================" << std::endl;
        std::cout << "Type the first number : ";
        std::cin >> num1;
        std::cout << "\nType the second number : ";
        std::cin >> num2;
        if(!num2){return -1;};
        std::cout << "\n\nA soma -> " << numero1 + numero2;
        std::cout << "\nA subtracao -> " << numero1 - numero2;
        std::cout << "\nA divisao -> " << numero1 / numero2;
        std::cout << "\nA multiplicacao -> "<< numero1 * numero2;
    }while(true);
    return 0;
}
