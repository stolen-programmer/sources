#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * 函数
 * 返回值类型   名字(参数类型 参数名, 参数类型.......); 函数声明
 * 返回值类型   名字(参数类型 参数名, 参数类型.......) {
 *
 * 编译 + 链接
 * 编译过程 先编译 源文件转换成机器码 -> 链接 把你的二进制文件 和 标准库也是二进制
 * }
 *
 */

/*
 * while (条件) {
 * }
 */

/*
 * printf(char *format, ...);
 * sprintf(char *dest, char *format, ...);
 * scanf(char *format, ...);
 * sscanf(char *src, char *format, ...);
 * fflush(参数)
 * malloc(大小);
 * free(malloc(大小));
 * gets(字符串数组) 读取一行到数组里末尾加\0
 * isdigit(字符); 判断是不是数字 0是假的 非0都是真的
 */
// 从数组的第几个格子开始获取一个数字

// 字典序  'a' 97 'b' 98
/*
 * 定义泛型
 * int
 * 不止支持函数重载  运算符重载 运算符行为
 * +
 * T max(T a, T b) {
 * if (a > b
 * }
 */

// 重载

int max(int a, int b) {
    if (a > b) {
        return a;
    }

    return b;
}

// "12+24\0"
// 写一个函数 重点是功能是啥
int getNumber(char *src, int offset, int *index, int *flag) {

    // 贯穿整个学习过程
    // 用的所有的类型都是基本类型
    // 学一下复合类型
    /*
     * 输入用户名
     * 密码
     * 验证一下
     *
     * 多用户呢  数组  注册了一些用户
     * 文件读写
     * 其他的主机 设备 发信息聊天 网络编程
     */

    // 叶公好龙
    // 叶公好龙是因为不了解龙
    char strNum[11];

    if (!src[offset]) {
        flag[0] = 0;
    }
    int i, strIndex;
    for (i = 0, strIndex = 0; src[i]; i ++, strIndex++) {
        // 判断字符是不是数字
        if (isdigit(src[offset + i])) {
            strNum[strIndex] = src[offset + i];
            // 也叫跳出
            continue ;
        }

        strNum[strIndex] = 0;

        // 手动跳出
        break ;

    }

    index[0] = offset + i;
    flag[0] = src[offset + i];

    return atoi(strNum);
}

int calculate(char formula[]) {
    // 名字[第几个格子]
    // [0 - 99]
    // numStr[0] = 'c'
    // char c = numStr[0];
    // 存待解析的数字
    // 读一个数字
    // +
    // 读取一个数字
    // sscanf
    int num2;
    int sum = 0;
    // 从一个字符串去解析需要的东西
    // 操作符 + -
    char op = 0;

    // "12+23-24\0" 0

    // 从数组的第几个格子开始获取一个数字
    int index;
    int flag;
    sum = getNumber(formula, 0, &index, &flag);

    // 循环
    while (flag) {

        // 拿到一个操作符 +-
        op = formula[index];
        // 从数组的第几个格子开始获取一个数字
        num2 = getNumber(formula, index + 1, &index, &flag);

        if (op == '+') {
            sum += num2;
        } else {
            sum -= num2;
        }
    }

    // 计算
    // 判断一个字符 是不是数字 0 - 9


    return sum;
}

/*
 * "12+12-100"
 */
int main() {

    char formula[100];
    // gets

    gets(formula);
//    printf("%s\n", formula);
    printf("%d\n", calculate(formula));
    return 0;
}
