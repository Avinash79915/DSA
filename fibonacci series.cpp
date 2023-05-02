#include<iostream>
using namespace std;
int fab(int n )
{
    if (n==0 || n==1)
    return n;

    int ans= fab(n-1) +fab(n-2);
    return ans;

}
int main ()
{
    cout<<fab(4);
}