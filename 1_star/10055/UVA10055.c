#include <stdio.h>
#define minus(a, b) (a>b)? a-b:b-a

int main(){
    long long int a, b;
    while(scanf("%lld %lld", &a, &b) != EOF){
        printf("%lld\n", minus(a,b));
    }
    return 0;
}