    #include<stdio.h>
    int main()
    {
        int a[5];/**ѧ��**/
        int b[5];/**�ɼ�**/
        int t=0;
        int h=0;/**�м��滻��**/
        int c,d,e,f;/**ѭ������**/
        for(c=0;c<5;c++)/**5��ѭ������ѧ�ųɼ�**/
        {
            printf("������ѧ��ѧ�ţ�");
            scanf("%d",&a[c]);
            printf("������ѧ���ĳɼ���");
            scanf("%d",&b[c]);
        }
        //printf("%d ,%d, %d ,%d ,%d\n",a[0],a[1],a[2],a[3],a[4]);
       // printf("%d ,%d, %d ,%d ,%d\n",b[0],b[1],b[2],b[3],b[4]);
        for(d=0;d<5;d++)/**�Գɼ���������**/
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
        for(f=0;f<5;f++)/**5�����ѧ�ųɼ�**/
        {
            printf("ѧ��%d��ѧ���ɼ�Ϊ%d\n",a[f],b[f]);
        }
        return 0;
    }
