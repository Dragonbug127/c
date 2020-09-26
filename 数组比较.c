    #include <stdio.h>
    int main()
    {
        int a[8]={44,20,12,65,98,10,89,77};
        int i,j,t;
        for(j=0;j<=7;j++)
        {
            for(i=0;i<=7;i++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        printf("%d ,%d, %d ,%d ,%d, %d ,%d ,%d, ",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
    }

