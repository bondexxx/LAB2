#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;
int main()
 {
    int A, B, C;

    std::cout << "Введіть число A: ";
    std::cin >> A;

    std::cout << "Введіть число B: ";
    std::cin >> B;

    std::cout << "Введіть число C: ";
    std::cin >> C;

    int positiveCount = 0;

    if (A > 0) {
        positiveCount++;
    }
    if (B > 0) {
        positiveCount++;
    }
    if (C > 0) {
        positiveCount++;
    }

    if (positiveCount == 2) {
        std::cout << "Рівно два з чисел A, B, C є додатними." << std::endl;
    } else {
        std::cout << "Умова не виконана. Не рівно два з чисел A, B, C є додатними." << std::endl;
    }

    return 0;
}
