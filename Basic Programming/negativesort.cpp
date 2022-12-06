#include<bits/stdc++.h>
using namespace std;

int negativefreq(vector<int> &arr)
{

    int c= 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] < 0)
            c++;
        else
            break;
    }
    return c;
}

int main()
{
    int size, res, num;
    vector <int> arr;

    cout<<" Enter array size : ";
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cin>>num;
        arr.push_back(num);
    }

    res=negativefreq(arr);

    cout<<" Frequency of negative integers : "<<res;

    return 0;
}