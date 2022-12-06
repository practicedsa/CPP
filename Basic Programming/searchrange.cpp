#include <bits/stdc++.h>
using namespace std;

vector<int> search_range(vector<int> &arr, int key)
{

    vector<int> a;
    int c = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == key)
        {
            a.push_back(i);
            c++;
            break;
        }
    }
    if (c == 1)
    {
        for (int j = arr.size() - 1; j >= 0; j--)
        {
            if (arr[j] == key)
            {
                a.push_back(j);
                break;
            }
        }
    }
    else
    {
        a.push_back(-1);
        a.push_back(-1);
    }

    return a;
}

int main()
{
    vector<int> a, store;
    int size, n, key;

    cout << " Enter the number of elements : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> n;
        a.push_back(n);
    }

    cout << " Enter key : ";
    cin >> key;

    store = search_range(a, key);
    cout << "\n\n";

    cout << "[" << store[0] << "," << store[1] << "]";

    return 0;
}