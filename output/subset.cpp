#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int n1;
    cin>>n1;
    vector<int>a1(n1);
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    sort(a.begin(),a.end());
    sort(a1.begin(),a1.end());
    int i=0,j=0,flag=1;
    
    while (i<n && j<n1)
    {
        if(a[i]<a1[j])
        {
            flag=0;
        }
        if(a[i]==a1[j])
        {
            i++;
        }
        j++;

    }
    if(i<n)
    {
        flag=0;
    }
    else
        flag=1;
    
    if(flag)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    



    return 0;
}