    #include<windows.h>
    #include<stdio.h>
    //切记！当调用<windows.h>时，不要调用MFC！（Afx.h)

    int main()
    {
        int result = MessageBox( NULL , TEXT("你是傻子吗？") , TEXT("哈哈") , MB_ICONINFORMATION|MB_YESNO);
        switch(result)/*注意！使用Unicode应用TEXT包围字串*/
        {
            case IDYES:MessageBox(NULL,TEXT("这就对啦！"),TEXT("哈哈"),MB_ICONINFORMATION|MB_YESNO);break;
            case IDNO:
                {
                    int b=MessageBox(NULL,TEXT("哪里不是！重选"),TEXT("哈哈"),MB_ICONINFORMATION|MB_YESNO);
                    switch(b)
                    {
                        case IDYES:
                        case IDNO:main();break;
                    }

                }


        }
    return 0;
    }
