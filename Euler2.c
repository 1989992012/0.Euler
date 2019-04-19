/*************************************************************************
	> File Name: Euler2.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月19日 星期五 18时54分22秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 4000000
#include <inttypes.h>

int main() {
    int64_t sum = 0;
    int a = 0, b = 1, c;    
    while(a + b <= MAX_N){
        c = a + b;
        if (c % 2 == 0) {
            sum += c;
        } 
        a = b;
        b = c;
    }
    printf("%" PRId64 "\n", sum);
    return 0;
}
