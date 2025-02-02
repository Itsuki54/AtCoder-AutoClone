#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n,m,q;
    cin>>n>>m>>q;
    vector<vector<long long >>g(n);

    for(long long  i = 0; i<m;i++){
        long long  u,v;
        cin>>u>>v;
        u--;
        v--;
        g.at(u).push_back(v);
        g.at(v).push_back(u);
    }
    vector<long long >c(n);
    for(long long  i = 0; i<n;i++){
        cin>>c.at(i);
    }

    for(long long  i = 0; i<q;i++){
        long long  s,x;
        cin>>s>>x;
        x--;
        cout<<c.at(x)<<endl;
        if(s == 1){
            for(auto a:g.at(x)){
                c.at(a) = c.at(x);
            }
        }
        else{
            long long  y;
            cin>>y;
            c.at(x) = y;
        }
    }

}