// spoj 3921. The Great Ball

#include <cstdio>
#include <map>
using namespace std;
typedef long long ll;
int main(){
    int ct, n;
    ll a, b;
    map<ll, int> dt;
    map<ll, int>::iterator idx;
    int ans, sum;
    scanf("%d", &ct);
    while(ct--){
        scanf("%d", &n);
        while(n--){
            scanf("%lld %lld", &a, &b);
            dt[a] = 1;
            dt[b] = -1;
        }
        ans = sum = 0;
        for(idx = dt.begin(); idx != dt.end(); idx++){
            sum += idx->second;
            if(sum > ans)
                ans = sum;
            idx->second = 0;
        }
        printf("%d\n", ans);
    }
    return 0;
}
