//������������a��b (0 < a,b < 10,000)������a����b�������̺�������

#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // ע�� while ������ case
        // 64 λ������� printf("%lld") to
        int m = a / b;
        int n = a % b;
        printf("%d %d", m, n);
    }
    return 0;
}

//��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����

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

//KiKi��֪���Ӽ���������������Ĵ�С��ϵ������ʵ�֡�

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

//�ж�һ�������Ƿ���5������һ��ͦ�򵥵����⣬�����KiKi���ǲ����Լ����������ҵ������д���룬��Ͱ�����ɡ�

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    // 64 λ������� printf("%lld") to

    if (n % 5 == 0)
        printf("YES\n");

    else
        printf("NO\n");


    return 0;
}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ��߶�ͼ����

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
