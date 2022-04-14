#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a,const void* b){
    const int A = *(int*)a;
    const int B = *(int*)b;
    return A-B;
}
int main (){
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        int sum = 0;
        int pivot;
        int relative_num = 0;
        int relatives[500]={0};
        scanf("%d", &relative_num);
        int i = 0;
        for(i = 0; i < relative_num; ++i){
            scanf("%d", &relatives[i]);
        }
        qsort(relatives, relative_num, sizeof(int), cmp);

        sum = relative_num / 2;
        if(relative_num % 2 == 1){
            pivot = relatives[sum];
        }else{
            pivot = (relatives[sum]+relatives[sum-1])/2;
        } 


        int ans = 0;
        for(i = 0; i < relative_num; ++i){
            ans += (int)abs(relatives[i]-pivot);
        }
        printf("%d\n", ans);    
    }
    
    return 0;
}