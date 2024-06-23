#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9+7;
vector<vector<int>> factorize_k(int z,int mn) {
    vector<vector<int>> triples;
    for(int i = 1;i<=mn;i++)
    {
        for(int j = 1;j<=mn;j++)
        {
            if(z%(i*j) == 0)
                triples.push_back({i,j,(z/(i*j))});
        }
    }
    return triples;
}

int maxDistinctLocations(int x, int y, int z, int k) {
    int mn = max({x,y,z});
    auto triples = factorize_k(k,mn);
    int max_locations = 0;

    for (const auto& triple : triples) {
        int a, b, c;
        a = triple[0];
        b = triple[1];
        c = triple[2];
        //cout<<a<<" "<<b<<" "<<c<<"\n";
        if (a <= x && b <= y && c <= z) {
            int locations = (x - a + 1) * (y - b + 1) * (z - c + 1);
            max_locations = max(max_locations, locations);
            //cout<<max_locations<<"\n";
        }
    }

    return max_locations;
}
void solve()
{
    int x,y,z,k;
    cin>>x>>y>>z>>k;
    cout<<maxDistinctLocations(x,y,z,k)<<"\n";
    
}
 
int32_t main()
{
    fastread();
    int t = 1;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}