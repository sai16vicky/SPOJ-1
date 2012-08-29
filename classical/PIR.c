/* spoj 23. Pyramids */

#include <stdio.h>
#include <math.h>

double tocos(long a, long b, long c);
double volume(double a, double b, double c);

int main(){
    long ab, ac, ad, bc, bd, cd;
    int ct;
    double cosa, cosb, cosc;
    double v;
    scanf("%d", &ct);
    while(ct--){
        scanf("%ld %ld %ld %ld %ld %ld", &ab, &ac, &ad, &bc, &bd, &cd);
        cosa = tocos(ab, ac, bc);
        cosb = tocos(ab, ad, bd);
        cosc = tocos(ac, ad, cd);
        v = ab * ac * ad * sqrt(volume(cosa, cosb, cosc)) / 6;
        printf("%.4f\n", v);
    }
    return 0;
}

double volume(double a, double b, double c){
    return 1 + 2 * a * b * c - a * a - b * b - c * c;
}

double tocos(long a, long b, long c){
    return (a * a + b * b - c * c + 0.0) / (2 * a * b);
}
