#ifndef VECTOR_OPERATIONS_H
#define VECTOR_OPERATIONS_H

#include <tuple>

// Функции для работы с векторами
std::tuple<double, double, double> add(double x1, double y1, double z1, double x2, double y2, double z2);
std::tuple<double, double, double> subtract(double x1, double y1, double z1, double x2, double y2, double z2);
double dot_product(double x1, double y1, double z1, double x2, double y2, double z2);

// Класс Vector3D
class Vector3D {
private:
    double x_, y_, z_;

public:
    Vector3D(double x, double y, double z);
    double length() const;
    Vector3D normalize() const;
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif
