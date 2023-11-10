//
//  main.cpp
//  HM-32
//
//  Created by Дмитрий Сергеевич on 10.11.2023.
//

#include <iostream>

//task2
int countOnesInBinary(int N) {
    int count = 0;
    while (N > 0) {
        if (N & 1) {
            count++;
        }
        N = N >> 1;
    }
    return count;
}

//task3
int swapBits(int N, int index1, int index2) {
    // Проверка, что биты в позициях index1 и index2 различны
    if (((N >> index1) & 1) != ((N >> index2) & 1)) {
        // Переключение значений битов на позициях index1 и index2
        int bitMask = (1 << index1) | (1 << index2);
        N ^= bitMask;  // Применение побитового исключающего ИЛИ для изменения битов
    }
    return N;
}


int main(int argc, const char * argv[]) {
    //task1
    unsigned int N;
       std::cout << "Введите число N: ";
       std::cin >> N;

       unsigned int result = 2 << N;
       std::cout << "2^" << N << " = " << result << std::endl;
    
    //task2
    int number;
       std::cout << "Введите число N: ";
       std::cin >> number;

       int res = countOnesInBinary(number);
       std::cout << "Количество единиц в двоичном представлении числа " << number << " : " << res << std::endl;
    
    //task3
    int num, index1, index2;
        std::cout << "Введите число N: ";
        std::cin >> number;
        std::cout << "Введите позицию index1: ";
        std::cin >> index1;
        std::cout << "Введите позицию index2: ";
        std::cin >> index2;

        int re = swapBits(number, index1, index2);
        std::cout << "Результат: " << re << std::endl;





    return 0;
}
