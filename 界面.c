    #include<windows.h>
    //切记！当调用<windows.h>时，不要调用MFC！（Afx.h)

    int main()
    {
        int result = MessageBox( NULL , TEXT("你喜欢我吗？") , TEXT("xxeexx") , MB_ICONINFORMATION|MB_YESNO);
        switch(result)/*注意！使用Unicode应用TEXT包围字串*/
    {
        case IDYES:
        {
            int a=MessageBox(NULL,TEXT("真的吗？"),TEXT("xxeexx"),MB_ICONINFORMATION|MB_YESNO);
            switch(a)
            {
            case IDYES:MessageBox(NULL,TEXT("太好了！"),TEXT("xxeexx"),MB_YESNO);break;
            case IDNO:MessageBox(NULL,TEXT("你骗我！"),TEXT("xxeexx"),MB_YESNO);break;
            }
            break;
        }
        case IDNO:
            {
                int b=MessageBox(NULL,TEXT("你不爱我了吗？"),TEXT("xxeexx"),MB_ICONINFORMATION|MB_YESNO);
                switch(b)
                {
                case IDYES:MessageBox(NULL,TEXT("我们绝交吧！"),TEXT("xxeexx"),MB_YESNO);break;
                case IDNO:
                    {
                        int c = MessageBox(NULL,TEXT("快说你爱我"),TEXT("xxeexx"),MB_YESNO);
                        switch(c)
                        {
                        case IDYES:MessageBox(NULL,TEXT("太好了！"),TEXT("xxeexx"),MB_YESNO);break;
                        case IDNO:MessageBox(NULL,TEXT("你骗我！"),TEXT("xxeexx"),MB_YESNO);break;
                        }
                        break;
                    }
                }
                break;
            }
    }
    return 0;
    }
