#include "quadrangle.hpp"

Quadrangle::Quadrangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4) : Figure("���������������"), a(side1), b(side2), c(side3), d(side4), A(angle1), B(angle2), C(angle3), D(angle4) {}

void Quadrangle::print_info() {
    std::cout << name << ":" << std::endl;
    std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    std::cout << std::endl;
}