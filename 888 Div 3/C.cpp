#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    int count1 = 0;
    int count2 = 0;
    int idx1,idx2;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    int num1 = a[0];
    int num2 = a[n-1];
    for(int i =0;i<n;i++)
    {
        if(a[i] == num1)
        {
            count1++;
            if(count1<=k) idx1 = i;
        }
        else if(a[i] == num2)
            count2++;
    }
    int count3 = 0;
    for(int i = idx1+1;i<n;i++)
    {
        if(a[i] == num2) count3++;
    }
    
    if(count1>=k && count3>=k || (count1>=k && num1 == num2)) cout<<"YES\n";
    else cout<<"NO\n"; 

}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}