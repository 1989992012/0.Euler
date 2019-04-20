/*************************************************************************
	> File Name: Euler4.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月20日 星期六 10时22分46秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int is(int x) {
    int y = 0;
    int ret = x;
    while(ret) {
        y = 10 * y + ret % 10;
        ret /= 10;
    }
    if(y == x) return 1;
    return 0;
    //while((y = 10 * y + x % 10) && (x = x / 10))
    //return x;
    //if (x == max) return max;
}

int main() {
    int tmp, max = 0;
    for (int i = 100; i <= 999; i++) {
        for (int j = 499; j <= 999; j++) {
            tmp = i * j;
            if (is(tmp))
            max = tmp > max ? tmp : max;
        }
    }
    printf("%d\n", max);
    return 0;
}
