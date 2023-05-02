#include<iostream>
using namespace std;

int linear_search(int Arr[],int size,int chabhi)
{
  for(int i=0;i<size;i++)
  {
    if (Arr[i]==chabhi)
    {
       return 1;
    }
  }
    return 0;
}
int main()
{
    cout<<"Enter Size  :";
    int size;
    cin>>size;
    int Arr[100];

    for(int i=0;i<size;i++)
    {
    cin>>Arr[i];
    }
    cout<<"Enter element to be searched  :" ;
    int key;
    cin>>key;

    cout<<linear_search(Arr,size,key);

}