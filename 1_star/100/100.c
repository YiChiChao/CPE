#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//determine whether it is power of 2
int isPowerBy2_(int n)
{   int i = 0;
    int count = 1;
    for (i= 1; i <= 32; i *= 2, count++) {
        if (n == i) return count;
    }           
    return 0;
}
//get the cycle-length of num
int cycle_recur(int num){
    int check;
    if ((check = isPowerBy2_(num)) != 0){
        return check;
    }
    if(num%2 == 1){
        check = cycle_recur(3*num+1)+1;
    }else{
        check = cycle_recur(num/2)+1;
    }
    return check;
}
int main(){
    int a, b;
    int x, y;
    int ans = 0;
    int i = 0;
    while(scanf("%d %d", &a, &b) != EOF){
        ans = 0;
        //exchange the order if a > b
        if(a > b){
            x = b;
            y = a;
        }else{
            x = a;
            y = b;
        }
        for(i = x; i <= y; ++i){
            int temp = cycle_recur(i);
            if(temp > ans)ans = temp;
        }
        printf("%d %d %d\n", a, b, ans);
    }
    return 0;
}

