/* spoj 9734. Hacking the random number generator */

#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll llabs(ll n){
    return n < 0 ? (0 - n) : n;
}
int lcomp(const void * a, const void *b){
    return *(ll *)a - *(ll *)b;
}

int main(){
    ll n, k;
    scanf("%lld %lld", &n, &k);
    ll *arr = (ll *)malloc(sizeof(ll) * n);
    ll i, j;
    for(i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    ll count = 0;
    qsort(arr, n, sizeof(ll), lcomp);
    ll large = arr[n - 1];
    ll tmp = 0;
    ll *ptr;
    for(i = 0; i < n; i++){
        tmp = arr[i] + k;
        if(tmp > large)
            break;
        ptr = (ll *)bsearch(&tmp, arr + i + 1, n - i - 1, sizeof(ll), 
                            (int(*)(const void *,const void *))lcomp);
        if(ptr != NULL)
            count++;
    }
    printf("%lld\n", count);
    free(arr);
    return 0;
}
