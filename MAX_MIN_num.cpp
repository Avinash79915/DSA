#include<iostream>
#include<limits.h>
using namespace std;

int min (int num[],int size)
{
    int mini=INT_MAX;
    for(int i=0;i<size;i++)
    {
        mini=min(mini,num[i]);
    }
    
    return mini;

}

int max (int num[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
    }
    
    return max;

}
int main()
{
    cout<<"Enter the size of array  :";
    int size;
    cin>>size;
    int num[100];
    cout<<"Enter your values :"<<endl;
    
        for(int i =0;i<size;i++)
        {
            cin>>num[i];
        }
  cout<<"MAXIMUM NUMBER :"<<max(num,size)<<endl;
  cout<<"MINIMUM NUMBER :"<<min(num,size);  
}