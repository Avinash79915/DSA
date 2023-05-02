#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY"<<endl;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {   
        string a;
        cin>>a;
        v.push_back(a);
    }
    
    for(auto &p:v)
    {
        cout<<p<<" ";
       
    }
   // cout<< v.at(3)<<endl;
    cout<<v.substr(2);
}