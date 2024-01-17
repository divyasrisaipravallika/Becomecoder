#include<bits/stdc++.h>
using namespace std;
void Subset(vector<int> v,int index,vector<int> ans,int size)
{
    if(index >= size)
    {
        for(int i = 0 ; i < ans.size() ; i++) cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    ans.push_back(v[index]);
    Subset(v,index+1,ans,size);
    ans.pop_back();
    Subset(v,index+1,ans,size);
}
int main()
{
    int n;
    cin>>n;
    int data;
    vector<int> v;
    for(int  i = 0 ; i < n ; i++)
    {
        cin>>data;
        v.push_back(data);
    }
    Subset(v,0,{},v.size());
}
