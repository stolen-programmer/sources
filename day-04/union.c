//
// Created by stolen on 11/21/22.
//

#include <stdio.h>
union _Value {
    int age;
    char name[10];
    char password[10];
};

// ascii 计算机内部全部是数字 没有所谓的字符 编码  H = 97 ascii

int main() {


    union _Value value = {
        .name = "H"
    };

    printf("%s\n", value.password);
    printf("%d\n", value.age);
}
