/* spoj 5240. Area of a Garden */

#include <stdio.h>
#include <math.h>

int main(){
    int ct;
    scanf("%d", &ct);
    int a, b, c;
    double area;
    double s;
    while(ct--){
        scanf("%d %d %d", &a, &b, &c);
        s = (a + b + c) / 2.0;
        area = ((a * a + b * b + c * c) * sqrt(3.0) / 4.0 + 3 * sqrt(s * (s - a) * (s - b) * (s - c))) / 2.0;
        printf("%.2f\n", area);
    }
    return 0;
}
