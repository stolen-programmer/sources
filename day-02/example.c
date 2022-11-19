//
// Created by stolen on 11/19/22.
//

#include <malloc.h>
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("你要输入多少个数: ");
    scanf("%d", &n);

    // memory alloc
    int *nums = malloc(sizeof(int) * n);
    char **strNums = malloc(sizeof(char*) * n);

    // 指针就是变量
    // 存的是地址
    // *ptr = 值
    // 类型 名字 = *ptr;

    // 输入N个数字
    for (int i = 0; i < n; i ++) {
        printf("请输入第%d个数字: ", i + 1);
        scanf("%d", &(nums[i]));
    }

    // 把每个数字转换成字符串
    for (int i = 0; i < n ; i ++) {
        // int 2100000000
        // '0' != '\0'
        // '\0' == 0
        // 指针的运算
        // 指针是可以计算的
        // ptr + 0 == ptr[0]
        // ptr + 1 == ptr[1]
        // 指针也是变量 是变量就有地址
        //

        strNums[i] = malloc(sizeof(char) * 11);
        // 转换
        sprintf(strNums[i], "%d", nums[i]);
    }

    // 降序 升序
    //
    for (int j = 0; j < n ; j ++) {
        for (int i = 0; i < n - 1; i++) {
            // 比较和交换
            // 1 < 2
            // 2 1
            // 小于0做交换
            // 12 23 34
            // 23 34 12
            // 32 23 12
            // 冒泡排序
            if (strcmp(strNums[i], strNums[i + 1]) < 0) {
                char *tmp = strNums[i];
                strNums[i] = strNums[i + 1];
                strNums[i + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i ++) {
        printf("%s", strNums[i]);
    }

}
