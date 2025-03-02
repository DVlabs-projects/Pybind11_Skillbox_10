#include <pybind11/pybind11.h>
#include "vector_operations.h"

namespace py = pybind11;

PYBIND11_MODULE(vectorlib, m) {
    m.doc() = "Vector algebra module";

    // Экспорт функций
    m.def("add", &add, "Add two 3D vectors");
    m.def("subtract", &subtract, "Subtract two 3D vectors");
    m.def("dot_product", &dot_product, "Calculate dot product of two vectors");

    // Экспорт класса Vector3D
    py::class_<Vector3D>(m, "Vector3D")
        .def(py::init<double, double, double>())
        .def("length", &Vector3D::length)
        .def("normalize", &Vector3D::normalize)
        .def_property_readonly("x", &Vector3D::getX)
        .def_property_readonly("y", &Vector3D::getY)
        .def_property_readonly("z", &Vector3D::getZ);
}
