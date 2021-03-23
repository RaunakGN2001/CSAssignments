#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    vector<string> v;
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(v[i]>v[j])
            {
                string temp;
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<"\n";
    }
    
    return 0;
    
}