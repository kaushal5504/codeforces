#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
// int main(){
//     ll t;
//     cin>>t;

//     while(t--){
//         ll n,a,b;
//         cin>>n>>a>>b;

//         if(b>a*2){

//             cout<<n*a<<endl;

//         }
//         else{
//             if (n % 2 == 0)
//             {
//                 cout << b * (n / 2) << endl;
//             }
//             else
//             {
//                 cout << b * (n / 2) + a << endl;
//             }
//         }

        
//     }
// }


int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,c,d;
        cin>>n>>c>>d;

        vector<ll>a(n*n);

        for(int i=0;i<n*n;i++){
            cin>>a[i];

        }

        sort(a.begin(),a.end());

        vector<vector<ll>>temp(n,vector<ll>(n,0));

        temp[0][0]=a[0];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) continue;
                if(j==0){
                    temp[i][j]=temp[i-1][j]+c;
                }
                else{
                    temp[i][j] = temp[i][j-1]+d;
                }
            }

        }

        vector<ll>b;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b.pb(temp[i][j]);
            }
        }

        sort(b.begin(),b.end());

        if(a==b)
        cout<<"Yes"<<endl;
        else
        {
            cout<<"No"<<endl;
        }
        
        




    }
}

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n,k;
//         cin>>n>>k;

//         vector<ll>a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//         int i=0,j=n-1;

//         ll ans=0;

//         while(min(a[i],a[j])*2<k){
//             if(a[i]<a[j]){
                
//                 ans++;
//                 a[j]-=a[i];
//                 i++;

//                 if(a[j]==0)
//                 {
//                     ans++;
//                     j--;

//                 }

//                 k-=(2*a[i]);



//             }
//             else if(a[i]>a[j]){
                
//                 ans++;

//                 a[i]-=a[j];
//                 j--;
//                 if (a[i] == 0)
//                 {
//                     ans++;
//                     i++;
//                 }

//                 k-=(2*a[j]);
//             }
//             else{
//                 i++;
//                 j--;
//                 ans+=2;
//             }


//         }

//         cout<<ans<<endl;
//     }
// }