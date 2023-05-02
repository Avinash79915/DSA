#include<iostream>
using namespace std;

int expo(int n)
{ 
   
    if (n==0)
    return 1;
    //cout<<ans;
     int ans= 2*expo(n-1);
     cout<<ans<<" ";
     return ans;


}
int opti_expo()
{

}
int main ()
{
int ans;
    expo(5);
   // cout<<ans;
}