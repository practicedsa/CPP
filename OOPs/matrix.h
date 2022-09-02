#include <iostream>
using namespace std;

class matrix
{
    int *arr;
    int size;

    public:
        matrix(int size);
        void input();
        matrix add(matrix temp);
        void display();
};