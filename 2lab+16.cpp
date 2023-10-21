#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;
int main()
{
cout << "\n Math.1. \n";
const double pi = 3.141592; // визначення дійсної константи
double x, num, denom, sin2, y; // декларація дійсних змінних
// введення данних
cout << "Real argument x = ";
cin >> x;
// підрахунок
num = pow(log(x * x + cos(37 * pi / 180)), 3); // чисельник
sin2 = pow(sin(x * x), 3); // проміжна змінна
denom = sin2 + sqrt(fabs(1 - 2 * cos(x) + cos(x * x))); // знаменник
y = num / denom;
// виведення результату
cout << "Function y = " << y << endl;
return 0;
}