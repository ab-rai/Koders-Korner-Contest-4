/*              4.SARA: the gold digger
Sara is as gold digger. She has a very long history of dating rich guys . From her past experience she has analysed that if the number of prime factors of the mobile number of a guy is divisible by 2 then the guy is rich and can be fooled.

As sara is weak in calculations you have to help her to find new targets.

Input Format

first line contain T the number of test cases next t lines contain mobile number N of her potential targets

Constraints

T:1 to 10

N: 10 to 10^12

Output Format

output contain T lines. print "YES" if the guy is a gold digger otherwise print "NO".

Sample Input 0

1
18

Sample Output 0

YES

Explanation 0

AS 18=3*2*3 and has 2 prime factors 2 and 3 . 2 being a even number the number the output is YES

*/
//  *****************  PROGRAM CODE  *****************************s

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll divCnt(ll n){
    ll cnt=0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
        while(n%i==0){
            n=n/i;
        }
        cnt++;
       //     cout<<"cnt,i="<<cnt<<","<<i<<endl;
        }
    }
    if(n!=1)
        cnt++;
    return cnt;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=divCnt(n);
        //cout<<"ans="<<ans<<endl;
        if(ans%2==0)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
