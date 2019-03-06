    /*              6.SHAZAM!
    */
    //  *****************  PROGRAM CODE  *****************************s

    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #define ll long long
    #define LT 1000000 //Limit for checking the greatest number to be prime or not
    using namespace std;

    ll primeBool[LT];
    ll ans[100000];
    void seiveErasto(){
        for(int i=2;i*i<=LT;i++){
            if(primeBool[i]){
                for(int j=i*i;j<=LT;j+=i){
                    primeBool[j]=0;
                }
            }
        }
        int ind=0;
        for(int i=2;i<LT;i++){
            if(primeBool[i]){
            ans[ind]=i;
            ind++;
            }
        }
        cout<<ans[ind-1]<<endl;
    }
    int main() {
        ll t;
        for(int i=0;i<LT;i++)
            primeBool[i]=1;
        seiveErasto();
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            cout<<ans[n-1]<<endl;
        }
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        return 0;
    }
