#include <iostream>
#include <iomanip>

#define PI 3.14159

int main()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(4);

    double radius, area;
    std::cin >> radius;

    area = PI * (radius * radius);
    std::cout << "A=" << area << std::endl;

    return 0;
}