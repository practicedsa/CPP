#include "matrix.h";

int main()
{
    int row_number;
   
    cout<<"Enter number of rows or coloumn : ";
    cin>>row_number;

    matrix m1(row_number);
    matrix m2(row_number);
    matrix result(row_number);

    cout<<"Enter elements for 1st Matrix:-\n";
    m1.input();
    cout<<"Enter elements for 2nd Matrix:-\n";
    m2.input();

    result = m1.add(m2);

    cout<<"1st Matrx\n";
    m1.display();
    cout<<"2nd Matrix\n";
    m2.display();
    cout<<"Result\n";
    result.display();
    
}