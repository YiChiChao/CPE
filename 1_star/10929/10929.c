#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[1001];
    int i = 0;
    int odd = 0;
    int even = 0;
    while(scanf("%s", a) != EOF){
        if(!strcmp(a,"0"))break;
        odd = 0;
        even = 0;
        for(i = 0; i < strlen(a); ++i){
            if(i % 2 == 1){
                odd += a[i]-48;
            }else{
                even += a[i]-48;
            }
        }
        if((odd - even)%11 == 0) printf("%s is a multiple of 11.\n", a);
        else  printf("%s is not a multiple of 11.\n", a);;
    }
    return 0;
}