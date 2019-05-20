/*************************************************************************
	> File Name: EP30.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年05月19日 星期日 20时37分19秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_N 354294

int is_valid(int x) {
    int raw = x, temp = 0;
    while (x) {
        temp += pow(x % 10, 5);
        x /= 10;
    }
    raw = (raw == temp ? raw : x);
    return  raw;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_valid(i)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
