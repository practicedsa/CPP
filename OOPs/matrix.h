#include <iostream>
using namespace std;

class matrix
{
    int **arr;
    int *p;
    int row;
    int coloumn;

    public:
        matrix(int row, int coloumn);
        void input();
        matrix add(matrix temp);
        void display();
};