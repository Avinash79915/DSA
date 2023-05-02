#include<iostream>
using namespace std;
   
 int get_fact( int n)
{
    if(n<=1)
    return 1;

   // int next_fact = get_fact(n-1);
    //long int ans = n* next_fact;
    return n*get_fact(n-1);
}
int main ()
{
   cout<<get_fact(10);
}