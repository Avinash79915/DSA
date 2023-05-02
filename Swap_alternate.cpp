#include<iostream>
using namespace std;
int reverse(int Arr[],int size)
{
   // int start=0;
    //int end=start+1 ;
    
    for (int i=0;i<size;i+=2)
    {
        if(i+1<=size){
            swap(Arr[i],Arr[i+1]);
        }
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
   
    cout<<"Given Array is :";
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
    cout<<reverse(Arr,size);
    

}