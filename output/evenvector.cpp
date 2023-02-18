#include<bits/stdc++.h>
using namespace std;

vector<int>event_generator(vector<int>a)
{
    vector<int>v;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        {
            v.push_back(a[i]);
        }
    }
    return v;
}



int main(){
	
    vector<int>a={2,5,3,8,6};
    vector<int>v=event_generator(a);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

	return 0;
}
