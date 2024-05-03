#include <iostream>
#include <vector>
#include <algorithm> 
#include "vozvedenie.h"
#include "checkinput.h"


int main() {
    int input_1;
    
    
    std::cout << "Введите положительное целое число больше 64: ";
    std::cin >> input_1;

   
    if (checkInput(input_1 == 0))
    {
        std::cout << "Число должно быть больше 64." << std::endl; 
        return 0;
    }

    std::vector<int> vec(1, 2); 

   vec = vozvedenie(input_1, vec);

   
    std::cout << "2 в степени " << input_1 << " равно ";
    for (int i = vec.size() - 1; i >= 0; --i) {
        std::cout << vec[i];
    }
    std::cout << "\n";

    return 0;
}