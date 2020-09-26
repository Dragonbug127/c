#include<stdio.h>

int num[11],n;

void order(int left, int right);

int main(void)
{

    int i;

    printf("请输入范围:");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        printf("第%d个数:",i+1);
        scanf("%d", &num[i]);
    }

    order(0, n-1);
    printf("从小到大顺序输出:");
    for(i = 0; i < n; i++)
        printf(" %d", num[i]);

    getchar();getchar();
    return 0;
}

void order(int left, int right)
{
    int x, y, z, temp;

    if(left>right)
        return;

    temp = num[left];
    x = left;
    y = right;

    while(x != y)
    {
        while(num[y] >= temp && x < y)
            y--;
        while(num[x] <= temp && x < y)
            x++;
        if(x<y)
        {
            z = num[y];
            num[y] = num[x];
            num[x] = z;
        }
    }

    num[left] = num[x];
    num[x] = temp;

    order(left, x-1);
    order(x+1,right);
}
