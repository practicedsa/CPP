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

void Array::take_input()
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value at " << i << "th Position: ";
        cin >> arr[i];
    }
}

void Array::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

Array Array::add(Array temp)
{
    Array res(this->size);

    for (int i = 0; i < temp.size; i++)
    {
        res.arr[i] = this->arr[i] + temp.arr[i];
    }

    return res;
}