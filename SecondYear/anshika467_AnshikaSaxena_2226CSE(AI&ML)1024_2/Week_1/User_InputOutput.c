#include<stdio.h>

int main(){

    // Write your code here.
    char ch;
    scanf("%c",&ch);
    if (ch >= 65 && ch<=90){
        printf("%d",1);
    }
    else if(ch >= 97 && ch <= 122){
        printf("%d",0);
    }
    else{
        printf("%d",-1);
    }
}
