#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+9;
int kt[N];
void snt(){
    kt[0]=kt[1]=1;
    for(int i=2;i*i<=N;i++){
        if(!kt[i]){
            for(int j=i*i;j<=N;j+=i){
                kt[j]=1;
            }
        }
    }
}
main()
{
    freopen("BAUOC.INP","r",stdin);
    freopen("BAUOC.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    snt();
    int n,d=0; cin >>n;
    for(int i=1;i*i<n;i++){
        if(!kt[i])d++;
    }
    cout<<d;
    return 0;
}
