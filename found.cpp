#include<bits/stdc++.h>
using namespace std;



vector<int> marge_sort(vector<int>c)
{
    
    if(c.size()<=1)
    {
        return c;
    }
    int mid=c.size()/2;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<mid;i++)
    {
        a.push_back(c[i]);
    }
    for(int i=mid;i<c.size();i++)
    {
        b.push_back(c[i]);
    }
    vector<int>s_a = marge_sort(a);
    vector<int>s_b = marge_sort(b);
    
    vector<int>s_c;
    int idx1=0;
    int idx2=0;
    for(int i=0;i<c.size();i++)
    {
       
        if(idx1==s_a.size())
        {
            s_c.push_back(s_b[idx2]);
            idx2++;
        }
        else if(idx2==s_b.size())
        {
            s_c.push_back(s_a[idx1]);
            idx1++;
        }
        else if(s_a[idx1] < s_b[idx2])
        {
            s_c.push_back(s_a[idx1]);
            idx1++;
        }
        else
        {
            s_c.push_back(s_b[idx2]);
            idx2++;
        }
    }
   
    return s_c;
}

int main()
{

    int n,k;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    vector<int>ans=marge_sort(a);
    int i=0,j=n-1,pairs=0;
        while (i<j)
        {
            if((ans[i]+ans[j])==k)
            {
                
                pairs++;
                i++;
                j--;
            }
            else if((ans[i]+ans[j])<k)
            {
                i++;
            }
            else
            {
                j--;

            }
        }
    cout<<pairs;
    return 0;
}