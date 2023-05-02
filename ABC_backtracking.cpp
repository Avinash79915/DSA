#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


void ABC(vector<string>str, string perm,int index)
{
    if(str.size()== 0)
    {
        cout<<perm;
        return ;

    }
    for(int i=0;i<str.size();i++)
    {
        char character= str.at(i);
       char new_character=str.substr(0,i)+str.substr(i+1);
        
        ABC(new_character,perm+character,index+1);    

    }
}
int main()
{
    string str="ABC";
    ABC(str,"",0);

}