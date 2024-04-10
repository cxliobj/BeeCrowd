#include <iostream>
#include <iomanip>

double weight1 = 2.0, weight2 = 3.0, weight3 = 5.0;

double average(double grade1, double grade2, double grade3)
{
    return (grade1 * weight1 + grade2 * weight2 + grade3 * weight3) / (weight1 + weight2 + weight3);
}

int main()
{
    double grade1, grade2, grade3;
    std::cin >> grade1 >> grade2 >> grade3;

    if (grade1 < 0.0 || grade1 > 10.0 ||
        grade2 < 0.0 || grade2 > 10.0 || 
        grade3 < 0.0 || grade3 > 10.0) 
        { return 1; }

    std::cout << std::fixed;
    std::cout << std::setprecision(1);

    std::cout << "MEDIA = " << average(grade1, grade2, grade3) << std::endl;

    return 0;
}