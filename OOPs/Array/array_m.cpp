#include "array.h"

int main()
{
    int size_array;

    cout << "Give the size of Array: ";
    cin >> size_array;

    Array a1(size_array);
    Array a2(size_array);
    Array res_add(size_array);
    Array res_subtract(size_array);
    Array res_multiply(size_array);

    cin >> a1;
    cout << "A1 INPUT OVER" << endl;
    cin >> a2;
    cout << "A2 INTPUT OVER" << endl;

    cout << "First array is : ";
    cout << a1;
    cout << "Second array is : ";
    cout << a2;

    res_add=a1+a2;
    cout << "Addition result is : ";
    cout << res_add;

    res_subtract=a1-a2;
    cout << "Subtraction result is : ";
    cout << res_subtract;

    res_multiply=a1*a2;   
    cout << "Multiplication result is : ";
    cout << res_multiply;

    return 0;
}