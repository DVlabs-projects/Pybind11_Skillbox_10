#include "vector_operations.h"
#include <cmath>

// Реализация функций
std::tuple<double, double, double> add(double x1, double y1, double z1, double x2, double y2, double z2) {
    return {x1 + x2, y1 + y2, z1 + z2};
}

std::tuple<double, double, double> subtract(double x1, double y1, double z1, double x2, double y2, double z2) {
    return {x1 - x2, y1 - y2, z1 - z2};
}

double dot_product(double x1, double y1, double z1, double x2, double y2, double z2) {
    return x1*x2 + y1*y2 + z1*z2;
}

// Реализация класса Vector3D
Vector3D::Vector3D(double x, double y, double z) : x_(x), y_(y), z_(z) {}

double Vector3D::length() const {
    return std::sqrt(x_*x_ + y_*y_ + z_*z_);
}

Vector3D Vector3D::normalize() const {
    double len = length();
    if (len == 0.0) return Vector3D(0, 0, 0);
    return Vector3D(x_/len, y_/len, z_/len);
}

double Vector3D::getX() const { return x_; }
double Vector3D::getY() const { return y_; }
double Vector3D::getZ() const { return z_; }
