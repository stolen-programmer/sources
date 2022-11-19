

#include <malloc.h>
#include <stdio.h>
#include <string.h>

/*
 * 循环  数组  指针  函数
 */
int main() {
    // int 4 *
    // 类型 名字[1];

//    int arr[LENGTH]; // 1 * 4  20 * 4
    // 0 -> length - 1 [索引] [下标]
    // 名字[20]
    // ++ --
    /*
     名字[索引] = 值; 设置值
     int a = 名称[索引]; 取值

     int a = 10;
     printf("%d\n", a);
     arr[0] = 10;
     printf("%d\n", arr[0]);

     a = arr[0];
     arr[0] = 1 + 0;

     */

    /*

     0 1 2 3
     for ( 初始化 ; 条件 ; 迭代) {
     初始化 -> 条件 -> 执行代码块 -> 迭代 -> 条件
     }
     */

    // index
//    for (int i = 0; i < LENGTH; i++) {
//        arr[i] = 1 + i;
//    }
    // 3
    // 张三 李四 王五
    // sizeof(值/变量/类型) 大小 字节单位
    // malloc(size); 分配一片空间
    // free(ptr) pointer
    // char *ptr = malloc(10); 申请
    // free(ptr);  释放
//    char *
    // 类型 *名字;
    // 指针 数组

    // (*name)
    // name[0]
    // *(name+2) sizeof(char*) * 2
    // name[0]
    // zhangsan
    // name[0]
    // char *
    // 多维数组
    //
//    char **name = malloc(sizeof(char*) * 3 );

    // 定义
    // 使用
//    for (int i = 0; i < 3; i ++) {
//        int len;
//        // 内存分配 又叫动态内存分配
//        name[i] = malloc(sizeof(char) * len );
////        scanf("%s", name[i]);
//        int age = 0;
//        //
//        // 取 名字[索引]
//
//    }

    /*
     * 输入N个正整数 动态的
     * 12
     * 23
     * 1223 2312
     * 连接起来
     * 排成一个最大的数
     *
     */

    int age;
    printf("%p", &age);


    return 0;
}
