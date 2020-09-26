    #include<stdio.h>
    int main()
    {
        int a[2][3]={{1,3,5},{13,6,68}};
        int max=a[0][0];
        int i=0;
        int j=0;
        int c=0;
        int b=0;
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                if(a[i][j]>max)
                {
                max=a[i][j];
                c=i;
                b=j;
                }
            }
        }
        printf("最大数为%d\n",max);
        printf("在%d行%d列\n",c+1,b+1);
        printf("%d\n",a[c][b]);
    }
