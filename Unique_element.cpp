#include<iostream>
using namespace std;

int unique(int Arr[],int size)
{
    int ans=0;
    for(int i=0;i<5;i++)
    {
        ans=ans^Arr[i];
    }
    return ans;
}

int main()
{
    int Arr[100];
    int size;
    cout<<"ENter size :";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<"  ";
    }
    cout<<unique(Arr,size);
}