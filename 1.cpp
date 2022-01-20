#include<iostream>
#include<vector>
using namespace std;
int main()
{  
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
   {int a;
   cin>>a;
       v.push_back(a);
   }
    /*for(auto it=v.begin();it!=v.end();it++)
    cout<<(*it);*/
    for(int c:v)
    {
        cout<<c;
    }
cout<<n;
    return 0;

}