#include <stdio.h>
#include<math.h>

int main() {

    int A, B;
    float x,y,z;
    scanf("%d %d", &A, &B);

    x = floor((float)(A / B));
    y = ceil((float)(A / B));
    z = round((float)(A / B));

    printf("floor %d / %d = %.0f\n", A, B,x);
    printf("ceil %d / %d = %.0f\n", A, B,y);
    printf("round %d / %d = %.0f\n", A, B,z);

    return 0;
}
