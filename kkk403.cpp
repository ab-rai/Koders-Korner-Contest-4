/*              3.AVENGERS PROBLEM
After the THANOS has wiped out half of the marvel universe the remaining Avengers except the Hulk are assembled together to fight Thanos in New York.

Bruce Banner's alter ego Hulk refuses to help them in this fight. After Thanos arrives, he soon overpowers Avengers. Seeing the massive destruction caused by the Thanos the Bruce Banner's alter ego(hulk) decides to help Avengers . And finally Banner transforms to Hulk. Now Hulk needs to reach avengers as soon as possible. As hulk is good jumper calculate minimum no of jumps hulk need to make to reach the given building where avengers are.

Note : Hulk in one jump can only skip 1 , 5 , 7 , 11 buildings.

Input Format

First line of input contains a no T , no of test cases

Each line of test case contains a no N , denoting the target building

Constraints

1 < = T < = 10

0 <= N <= 100000

Output Format

For each test case print a single line denoting minimum number of jumps to reach N th building from his current position.

Sample Input 0

2
13
16

Sample Output 0

3
2

Sample Input 1

3
1
4
10

Sample Output 1

1
4
2

*/
//  *****************  PROGRAM CODE  *****************************s
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    int arr[]={1,5,7,11};
    while(t--){
        int n;
        //int m=4;
        cin>>n;
        int ans[n+1];
        ans[0]=0;
        for(int i=1;i<=n;i++){
            ans[i]=INT_MAX;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<4;j++){
                if(arr[j]<=i){
                    int temp=ans[i-arr[j]];
                    if(temp!= INT_MAX && temp+1<ans[i])
                        ans[i]=temp+1;
                }
            }
        }
        cout<<ans[n]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

