#include <stdio.h>
#include <string.h>

/*
 * 复合类型
 * struct 名字 {
 *  类型 名字;
 *  类型 名字;
 * };
 */

// 内置的类型
// 类型 名字;


struct _User {
    char name[10];
    char password[10];
};

// typedef 类型别名
typedef struct _User User;

/*
 * 结构体和共用体 c语言基本就结束了
 * 会有几天时间来熟悉标准库  然后搞个小项目
 *
 */
int main()
{
    /*
     * 能注册用户
     * 能登录
     * 能注销 删除用户
     *
     * 可以打印已经存在的用户列表
     *
     * 结合函数 自己写函数  组合
     */
    /*
     * 类型 名字 = {
     * };
     * 类型 名字;
     */
    User user = {
        "张三", "123456"
    };

    // 聚合
    // 定义变量
    User newUser = {};

    // 输入用户名 密码
    printf("请输入你的用户名: ");
    scanf("%s", newUser.name);
    // 生命周期
    // 抽象思维
    printf("请输入你的密码: ");
    scanf("%s", newUser.password);
    // 字符串比较 strcmp string compare
    // 验证一下用户名和密码是不是正确
    // 一样的
    if (strcmp(user.name, newUser.name) != 0) {
        printf("用户名不存在\n");
        return 0;
    }

    if (strcmp(user.password, newUser.password) != 0) {
        printf("密码错误\n");
        return 0;
    }

    printf("登录成功\n");
    // 如果正确  提示登录成功
    // 如果错误 用户名不存在 或者密码错误

    return 0;
}
