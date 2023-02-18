#include<bits/stdc++.h>
using namespace std;
int main(){
	
    int n,k,l;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k>>l;
    int i=k-1,j=l;
    while (j<n)
    {
        a[i]=a[j];
        i++;
        j++;
    }
    for(i=0;i<n-(l-k+1);i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    
	return 0;
}
