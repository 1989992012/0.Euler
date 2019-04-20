/*************************************************************************
	> File Name: Euler3.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月19日 星期五 19时51分04秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define NUM 600851475143
#include <inttypes.h>

int main() {
    int64_t num = NUM;
    int64_t prime_max;
    for (int64_t i = 2; i * i <= NUM; i++) {   
        while (num % i == 0){  
            num /= i;
            prime_max = i;
        }
    }
    if (num != 1) prime_max = num;
    printf("%" PRId64 "\n", prime_max);
    return 0;
}
