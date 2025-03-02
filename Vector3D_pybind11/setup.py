from setuptools import setup, Extension
import pybind11

module = Extension(
    'vectorlib',
    sources=['src/bindings.cpp', 'src/vector_operations.cpp'],
    include_directories=['include', pybind11.get_include()],
    language='c++',
    extra_compile_args=['-std=c++11'],
)

setup(
    name='vectorlib',
    version='0.1',
    ext_modules=[module],
)
