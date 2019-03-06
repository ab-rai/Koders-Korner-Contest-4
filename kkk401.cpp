/*             1. Triangle Problem Game

ABC is a triangle in which ∠ABC < 90° and AD ⊥ BC. Find the value of BD.

image

Input Format

First line contains an integer t.
Next t lines contain 3 integers AB,BC and AC separated by space.

Constraints

0≤t≤10
0≤AB,BC,AC≤100

Output Format

Print t lines containing integral value of BD

Sample Input 0

1
5 13 9

Sample Output 0

4
*/

//  *****************  PROGRAM CODE  *****************************s


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        float ans=1.0*((a*a)+(b*b)-(c*c))/(2*a*b);
      //  cout<<ans<<endl;
        cout<<int(ans*a)<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
