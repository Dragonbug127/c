    #include<stdio.h>
    int main()
    {
        float a;
        float b;
        float c;
        float d;
        float e;
        float f;
        float g;
        printf("请输入本金:");
        scanf("%f",&a);
        printf("请输入活期利率:");
        scanf("%f",&b);
        printf("请输入年利率：");
        scanf("%f",&c);
        printf("请输入半年利率:");
        scanf("%f",&d);
        e=a*(1+b);
        f=a*(1+c);
        g=a*(1+d/2)*(1+d/2);
        printf("活期一年的本息和:");
        printf("%f\n",e);
        printf("定期一年的本息和:");
        printf("%f\n",f);
        printf("存两次半年期的本息和:");
        printf("%f\n",g);
        return 0;
    }
