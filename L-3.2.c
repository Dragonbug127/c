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
        printf("�����뱾��:");
        scanf("%f",&a);
        printf("�������������:");
        scanf("%f",&b);
        printf("�����������ʣ�");
        scanf("%f",&c);
        printf("�������������:");
        scanf("%f",&d);
        e=a*(1+b);
        f=a*(1+c);
        g=a*(1+d/2)*(1+d/2);
        printf("����һ��ı�Ϣ��:");
        printf("%f\n",e);
        printf("����һ��ı�Ϣ��:");
        printf("%f\n",f);
        printf("�����ΰ����ڵı�Ϣ��:");
        printf("%f\n",g);
        return 0;
    }
