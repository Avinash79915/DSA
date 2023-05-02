#include<iostream>
using namespace std;

int Add_Arr(int Arr[],int size)
{
    int add=0;
    for(int i=0;i<size;i++)
    {
    add+=Arr[i];
    }
    return add;
}
int main ()
{
 cout<<"ENTER THE SIZE OF ARRAY"<<endl;
 int size;
 cin>>size;
 int Arr[100];
 for(int i=0;i<size;i++)
 {
    cin>>Arr[i];
 }
 cout<<"ADDITION OF ARRAY IS :"<<Add_Arr(Arr,size);

}