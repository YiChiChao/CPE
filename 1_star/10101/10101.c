#include <stdio.h>
#include <stdlib.h>

int represent(long long int input){
    //printf("%lld\n", input);
    if(input == 0){
        return 0;
    }

    if(input / 10000000){
        represent(input / 10000000);
        printf(" kuti");
        if(input %= 10000000){
            printf(" ");
        }
    }
    if(input / 100000){
        printf("%lld lakh", input / 100000);
        if((input %= 100000))printf(" ");   
    }
    if(input / 1000){
        printf("%lld hajar", input / 1000);
        if((input %= 1000))printf(" ");
    }
    if(input / 100){
        printf("%lld shata", input / 100);
        if((input %= 100))printf(" ");
    }
    if(input != 0){
        printf("%lld", input);
    }
    return 1;
}

int main(){
    long long int cin;
    int index = 1;

    while(scanf("%lld", &cin)!= EOF){
        printf("%d. ", index++);
        if(cin != 0){
            represent(cin);
            printf("\n");
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}
//1. 4 kuti 60 hajar kuti 40 lakh 90 hajar
//400600004090000
