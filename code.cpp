#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int t=2;
    if(k<t)
        t=k;
    while(t--)
    {
        sort(arr,arr+n);
        for(int i=0;i<n;i+=2)
        {
            arr[i]=arr[i]^x;
        }
    }
    cout<<*max_element(arr,arr+n)<<" "<<*min_element(arr,arr+n);
    return 0;
}
