/* spoj 54. Julka */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Size 120
typedef struct{
    int arr[Size];
    int len;
}in;
void init(in *a){
    a->len = 0;
    int i;
    for(i = 0; i < Size; i++)
        a->arr[i] = 0;
}
void create(char *s, in *a){
    int i = strlen(s);
    a->len = i;
    char *p = s;
    while(*p != '\0'){
        a->arr[--i] = *p - '0';
        p++;
    }
}
void print(in *a){
    int i;
    for(i = a->len - 1; i >= 0; i--)
        printf("%d", a->arr[i]);
    printf("\n");
}

void add(in *a, in *b){
    int i = 0;
    int end = a->len > b->len ? a->len : b->len;
    while(i < end){
        a->arr[i] += b->arr[i];
        if(a->arr[i] > 9){
            a->arr[i + 1] += a->arr[i] / 10;
            a->arr[i] %= 10;
        }
        i++;
    }
    if(a->arr[end] != 0)
        a->len = end + 1;
    else
        a->len = end;
}
void sub(in *a, in *b){
    int i = 0;
    int tmp;
    while(i < b->len){
        if(a->arr[i] < b->arr[i]){
            a->arr[i] += 10 - b->arr[i];
            a->arr[i + 1] -= 1;
            tmp = i + 1;
            while(a->arr[tmp] < 0){
                a->arr[tmp] = 9;
                a->arr[tmp + 1] -= 1;
                tmp++;
            }
        }
        else
            a->arr[i] -= b->arr[i];
        i++;
    }
    i = a->len - 1;
    while(a->arr[i] == 0){
        a->len -= 1;
        i--;
    }
}
void div2(in *a){
    int i = a->len - 1;
    int *tmp = (int *)malloc(sizeof(int) * a->len);
    int j = 0;
    int ans = 0;
    while(i >= 0){
        ans = ans * 10 + a->arr[i];
        if(ans >= 2){
            tmp[j] = ans / 2;
            ans = ans % 2;
            i--;
            j++;
        }else{
            tmp[j] = 0;
            j++;
            i--;
        }
        
    }
    a->len = j;
    i = 0;
    if(tmp[i] == 0){
        i++;
        a->len -= 1;
    }
    int k = a->len - 1;
    while(k >= 0){
        a->arr[k] = tmp[i];
        k--;
        i++;
    }
    free(tmp);
}
int main(){
    int ct = 10;
    char a[200];
    char b[200];
    in *k = (in *)malloc(sizeof(in));
    in *n = (in *)malloc(sizeof(in));
    while(ct--){
        memset(a, 0, sizeof(a));
        memset(a, 0, sizeof(b));
        scanf("%s", a);
        scanf("%s", b);
        init(k);
        init(n);
        create(a, k);
        create(b, n);
        add(k, n);
        div2(k);
        print(k);
        sub(k, n);
        print(k);
    }
    free(k);
    free(n);
    return 0;
}
