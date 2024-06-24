#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(){
    ll t;
    cin>>t;
    while(t--){

    //    ll n;
    //    cin>>n;

    //    string s;
    //    cin>>s;

    //    vector<ll>left(n,0), right(n,0);

    //    for(int i=0,j=n-1;i<n;i++,j--){

    //     if(s[i]=='0'){
    //         left[i]= left[i-1]+1;

    //     }
    //     else{
    //         left[i] = left[i-1];
    //     }

    //     if(s[j]=='1'){
    //         right[j]= right[j+1]+1;
    //     }
    //     else{
    //         right[j] = right[j+1];
    //     }

        

    //    }

    ll a, b, m;
    cin >> a >> b >> m;

    ll ans = 0;

    ll x = min(a, b);

    ll range = x + m;

    ans += (range / a);
    
    ans += (range / b);
    

    cout << ans << endl;
    }

}

