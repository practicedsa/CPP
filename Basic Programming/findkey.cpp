#include<bits/stdc++.h>
using namespace std;

int bsearch(vector <int> arr, int key)
{
    int l=0, index=-99999;
    int u=arr.size();

    while(l<=u)
    {
        int m=(l+u)/2;

        if(key<arr[m])
            u=m-1;

        if(key>arr[m])
            l=m+1;

        if(key==arr[m])
        {
            index=m;
            break;
        }
    }

    return index;
}
int main()
{
    int size, res, num, key;
    vector <int> arr;

    cout<<" Enter array size : ";
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cin>>num;
        arr.push_back(num);
    }

    cout<<" Enter search element : ";
    cin>>key;

    res=bsearch(arr, key);

    cout<<" Index of key : "<<res;

    return 0;
}