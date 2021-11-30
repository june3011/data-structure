#include <stdio.h>

// int GCD(int a, int b) {
//     while(b!=0){
//         int r = a%b;
//         a=b;
//         b=r;
//     }
//     return a;
// }
int GCD(int a, int b){
    if(b==0)
        return a;
    else
        return GCD(b, a%b);
}
int LCM(int a, int b){
    return (a*b)/GCD(a,b);
    // return a * (b / GCD(a, b));
    // 곱했다가 나누면 숫자가 너무 커져서 오버플로우가 발생할 수 있기 때문에
    // 한쪽에서 미리 나눠줌
}

int main()
{
    int n1, n2;
    scnaf("%d %d", &n1, &n2);
    printf("%d", LCM(n1, n2))
    printf("%d", GCD(n1, n2))

}