#include <stdio.h>
#include <stdlib.h>
int m;
int compare(void* a, void* b){
    int A = *(int*)a;
    int B = *(int*)b;
    int tempa;
    int tempb;
    if(A%m > B%m)return 1;
    else if(A%m < B%m)return -1;
    else{
        tempa = A % 2;
        tempb = B % 2;
        if(tempa != tempb){
            return(tempa>tempb)?-1 : 1;
        }else if(tempa == 1){
            return(A>B)? -1 : 1;
        }else return(A<B)? -1 : 1;
    }
    return 0;
}
int main(){
    int num[10001]={0};
    int n;
    int i;
    while(~scanf("%d %d", &n, &m)){
        if(n == 0 && m == 0){
            printf("0 0\n");
            break;
        }
        for(i = 0; i < n; ++i){
            scanf("%d", &(num[i]));
        }
        qsort(num, n, sizeof(int), compare);
        printf("%d %d\n", n, m);
        for(i = 0; i < n; ++i){
            printf("%d", num[i]);
            printf("\n");
        }
    }
    return 0;
}