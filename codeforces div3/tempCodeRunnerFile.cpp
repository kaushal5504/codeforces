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
        
        




    }
}