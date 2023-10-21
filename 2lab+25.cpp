#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;
int main()
 {
    int K;

    std::cout << "Введіть K (1-365): ";
    std::cin >> K;

    if (K < 1 || K > 365) {
        std::cout << "Помилка: K повинно бути в діапазоні від 1 до 365." << std::endl;
        return 1;
    }

    // 1 січня цього року було четвергом (4)
    // Визначимо, який день тижня буде для K-го дня року
    int dayOfWeek = (3 + K - 1) % 7;

    std::cout << "День тижня для " << K << "-го дня року: " << dayOfWeek << std::endl;

    return 0;
}
