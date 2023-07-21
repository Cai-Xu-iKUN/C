//给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。

#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        int m = a / b;
        int n = a % b;
        printf("%d %d", m, n);
    }
    return 0;
}

//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。

#include <stdio.h>


int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n >= 140)
            printf("Genius");
    }
    return 0;
}

//KiKi想知道从键盘输入的两个数的大小关系，请编程实现。

#include <stdio.h>


int main()
{
    int num1 = 0;
    int num2 = 0;
    while (scanf("%d%d", &num1, &num2) != EOF)
    {
        if (num1 > num2)
            printf("%d>%d\n", num1, num2);
        else if (num1 < num2)
            printf("%d<%d\n", num1, num2);
        else
            printf("%d=%d\n", num1, num2);
    }
    return 0;
}

//判断一个整数是否能5整除是一个挺简单的问题，懒惰的KiKi还是不想自己做，于是找到你帮他写代码，你就帮帮他吧。

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    // 64 位输出请用 printf("%lld") to

    if (n % 5 == 0)
        printf("YES\n");

    else
        printf("NO\n");


    return 0;
}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。

#include <stdio.h>


int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
