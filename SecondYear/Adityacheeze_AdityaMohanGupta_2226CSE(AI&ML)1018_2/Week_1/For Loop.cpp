#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
        if(n==0 || n==1){
                return n;
        }
        return fibo(n-1) + fibo(n-2);
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n; cin>>n;
        int ans=fibo(n);
        cout<<ans;
}