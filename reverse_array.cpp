#include<iostream>
using namespace std;
int reverse(int Arr[],int size)
{
    int start=0;
    int end=size-1;
    
    while (start<=end)
    {
        swap(Arr[start],Arr[end]);
        start++;
        end--;
        
    }
    cout<<"Reversed Array is :";
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    
    
}
int main ()
{
    cout<<"Enter Size :";
    int size;
    cin>>size;
    int Arr[10];
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
   
    cout<<"Given Array is :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<reverse(Arr,size);

}