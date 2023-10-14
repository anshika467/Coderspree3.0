#include<bits/stdc++.h>
using namespace std;
int fibbo(int);
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        scanf("%d",&n);
        int f = fibbo(n);
        printf("%d",f);
        return 0;
        }

int fibbo(int n)
{
        if(n==0){
                return 0;
        }
        else if(n==1){
                return 1;
        }
        else{
                return (fibbo(n-1) + fibbo(n-2));
        }
}