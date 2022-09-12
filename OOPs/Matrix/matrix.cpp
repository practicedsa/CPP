#include "matrix.h";

matrix::matrix(int row, int coloumn)
{
    this->arr = new int*[row];
    this->p = new int[row*coloumn];

    for(int i=0; i<row; i++)
    {
            arr[i]=p+i*coloumn;
    }
}

void matrix::input()
{
    for(int i=0; i<this->size; i++)
    {
        for(int j=0; j<this->size; j++)
            cin>>arr[i][j];
    }
}

matrix matrix::add(matrix temp)
{
    matrix result(this->size);

    for(int i=0; i<this->size; i++)
    {
        for(int j=0; j<this->size; j++)
            result[i][j]=this->arr[i][j]+temp[i][j];
    }

    return result;
}

void matrix::display()
{
    for(int i=0; i<this->size; i++)
    {
        for(int j=0; j<this->size; j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
}