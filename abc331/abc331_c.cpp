#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],b[1000010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i],b[a[i]]+=a[i];
	for(int i=1000000;i>1;i--)b[i-1]+=b[i];
	for(int i=1;i<=n;i++)cout<<b[a[i]+1]<<" ";
    return 0;
}