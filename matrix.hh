#pragma once

#include <iostream>
#include <vector>

class Matrix
{
public:
    Matrix(size_t height, size_t width);
    ~Matrix();

    size_t get_w() const;
    size_t get_h() const;

    void fill(float value = 0);
    void randomize(float from, float to);
    void resize(size_t height, size_t width);

    Matrix operator+(const Matrix &m) const;
    Matrix &operator+=(const Matrix &m);

    Matrix operator*(const Matrix &m) const;

    Matrix operator*(float elt) const;
    Matrix &operator*=(float elt);

    std::vector<float> &operator[](size_t index);
    const std::vector<float> &operator[](size_t index) const;

private:
    size_t h_;
    size_t w_;

    std::vector<std::vector<float>> mat_;
};

Matrix operator*(float elt, const Matrix &m);
std::ostream &operator<<(std::ostream &os, const Matrix &m);
