#include<iostream>
#include<vector>
using namespace std;

bool short_check(vector<int> v,int index)
// Vector OP
{
    if(index >= v.size())
    {
    
        return true; 

    }
    if (v[index]<v[index-1])
    return false;
    return short_check(v,index+1);
}

int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    vector <int> v(n);
    cout<<"Enter element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    bool ans=short_check(v,1);
    cout<<"YOUR ANSWER IS :"<<ans;
    return 0;

    

}