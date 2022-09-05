#include "array.h"

Array::Array(int size)
{
    arr = new int[size];
    this->size = size;
}

Array::Array()
{
    size = 5;
    arr = new int[size];
}

ostream &operator<<(ostream &out, const Array &ob)
{
    for (int i = 0; i < ob.size; i++)
    {
        out << ob.arr[i] << " ";
    }
    
    out << endl;

    return out;
}

istream &operator>>(istream &in, const Array &ob)
{
    for (int i = 0; i < ob.size; i++)
    {
        cout << "Enter the value at " << i << "th Position: ";
        in >> ob.arr[i];
    }

    return in;
}

Array Array::operator+(const Array &ob)
{

    for (int i = 0; i < this->size; i++)
    {
        this->arr[i] = this->arr[i] + ob.arr[i];
    }

    return *this;
}

Array Array::operator-(const Array &ob)
{
    for (int i = 0; i < this->size; i++)
    {
        this->arr[i] = this->arr[i] - ob.arr[i];
    }

    return *this;
}

Array Array::operator*(const Array &ob)
{
    for (int i = 0; i < this->size; i++)
    {
        this->arr[i] = this->arr[i] * ob.arr[i];
    }

    return *this;
}