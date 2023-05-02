#include<iostream>
#include<vector>
using namespace std;
int total_subset=0;
int Print_subset(vector<int>input,vector<int>output,int index)
{
   if (index>=input.size())
   {
    for(int i:output)
    cout<<i<<" ";
   }
   return ;


Print_subset(input,output,index+1); // ni lena
output.push_back(input[index]);
Print_subset(input,output,index+1); // lena hai

}

int main()
{
 cout<<"Enter size"<<endl;
 int size;
 cin>>size;

 vector<int>vec(size);
 vector<int>subset;
 cout<<"ENter element"<<endl;
 for(int i;i<size;i++)
 {
    cin>>vec[i];
 }
 cout<<"Power subset is"<<endl;
 Print_subset(vec,subset,0);
 //cout<<"Total subset"<<



}