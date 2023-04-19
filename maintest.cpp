#include<iostream>
#include "selectionsort.cpp"
#include <vector>
using namespace std;

int main()
{
    vector<int> sortarray;
    int howbig;
    cin>>howbig;
    Selectionsort v1(sortarray,howbig);
    int n=v1.GetLength();
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.addValue(x);
    }
    v1.BubbleSortDesc();
    v1.ShowVectorpls();
}