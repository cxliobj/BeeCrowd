#include <iostream>
#include <iomanip>

double weight1 = 3.5, weight2 = 7.5;

double average(double grade1, double grade2)
{
    return (grade1 * weight1 + grade2 * weight2) / (weight1 + weight2);
}

int main()
{
    double grade1, grade2;
    std::cin >> grade1 >> grade2;

    if (grade1 < 0.0 || grade1 > 10.0 ||
        grade2 < 0.0 || grade2 > 10.0) 
        { return 1; }

    std::cout << std::fixed;
    std::cout << std::setprecision(5);

    std::cout << "MEDIA = " << average(grade1, grade2) << std::endl;

    return 0;
}