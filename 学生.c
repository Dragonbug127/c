    #include<stdio.h>
    int main()
    {
        int a[5];/**学号**/
        int b[5];/**成绩**/
        int t=0;
        int h=0;/**中间替换量**/
        int c,d,e,f;/**循环变量**/
        for(c=0;c<5;c++)/**5次循环输入学号成绩**/
        {
            printf("请输入学生学号：");
            scanf("%d",&a[c]);
            printf("请输入学生的成绩：");
            scanf("%d",&b[c]);
        }
        //printf("%d ,%d, %d ,%d ,%d\n",a[0],a[1],a[2],a[3],a[4]);
       // printf("%d ,%d, %d ,%d ,%d\n",b[0],b[1],b[2],b[3],b[4]);
        for(d=0;d<5;d++)/**对成绩进行排序**/
        {
            for(e=0;e<5;e++)
            {
                if(b[e]>b[d])
                {
                    t=b[e];
                    b[e]=b[d];
                    b[d]=t;
                    h=a[e];
                    a[e]=a[d];
                    a[d]=h;
                }
            }
        }
        for(f=0;f<5;f++)/**5次输出学号成绩**/
        {
            printf("学号%d的学生成绩为%d\n",a[f],b[f]);
        }
        return 0;
    }
