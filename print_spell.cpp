#include<iostream>
using namespace std;
int print_spell(int n,string str [])
{
    if (n==0) // base case
    return n;

print_spell(n/10,str); // recursive call
int num=n%10;
cout<<str[num]<<" ";  
}
int main()
{
    int n;
    cout<<"Enter your number  :";
    cin>>n;
    string str[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN",
    "EIGHT","NINE"};
  
  
print_spell(n,str);
}