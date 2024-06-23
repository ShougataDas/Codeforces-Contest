#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
double getDistance(double x1,double y1,double x2,double y2)
{
    return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}
void solve()
{
    double px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
    double oa = getDistance(0,0,ax,ay);
    double ob = getDistance(0,0,bx,by);
    double pa = getDistance(px,py,ax,ay);
    double pb = getDistance(px,py,bx,by);
    double ab = getDistance(ax,ay,bx,by);
    double ans = 1e9;
    ans = min(ans,max(oa,pa));
    ans = min(ans,max(ob,pb));
    ans = min(ans,max({oa,pb,(ab/2)}));
    ans = min(ans,max({ob,pa,(ab/2)}));
    cout<<setprecision(11)<<ans<<"\n";


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