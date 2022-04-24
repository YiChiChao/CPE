#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define ll long long int
int getCarry(ll a, ll b){
    if(a == 0 || b == 0)return 0;

    int ans = 0;
    bool cin = false;

    while(a > 0 || b > 0){
        if(a%10 + b%10 + (int)cin >= 10){
            cin = true;
            ans++;
        }
        else{
            cin = false;
        }
        a /= 10;
        b /= 10;
    }
    return ans;
}


int main(){
    ll a, b;
    int carry = 0;
    while(fscanf(stdin, "%lld %lld", &a, &b)!= EOF){
        if(a == 0 && b == 0)return 0;
        carry = getCarry(a, b);
        if(carry == 0) fprintf(stdout, "No carry operation.\n",carry);
        else (carry == 1) ? fprintf(stdout, "%d carry operation.\n",carry) : fprintf(stdout, "%d carry operations.\n",carry);
    }
    return 0;
}