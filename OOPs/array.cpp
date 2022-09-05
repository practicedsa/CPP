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

// Array Array::add(Array temp)
// {
//     Array res(this->size);

//     for (int i = 0; i < temp.size; i++)
//     {
//         res.arr[i] = this->arr[i] + temp.arr[i];
//     }

//     return res;
// }

ostream &operator<<(ostream &out, const Array &ob)
{
    out << "The Elements of Array is: " << endl;

    for (int i = 0; i < ob.size; i++)
    {
        out << ob.arr[i] << " ";
    }
    
    out << endl;

    return out;
}

istream &operator>>(istream &in, const Array &ob)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value at " << i << "th Position: ";
        in >> ob.arr[i];
    }

    return in;
}