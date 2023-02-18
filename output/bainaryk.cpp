#include<bits/stdc++.h>
using namespace std;
int main(){
	
    int n,k;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    int low =0, high = n-1,found=0;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
        {
            found++;
        }
        if(a[mid]>k)
        {
            high=mid-1;
        }
        else
            low= mid+1;

    }
    if(found==2)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
    
	return 0;
}
