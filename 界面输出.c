    #include<windows.h>
    #include<stdio.h>
    //�мǣ�������<windows.h>ʱ����Ҫ����MFC����Afx.h)

    int main()
    {
        int result = MessageBox( NULL , TEXT("����ɵ����") , TEXT("����") , MB_ICONINFORMATION|MB_YESNO);
        switch(result)/*ע�⣡ʹ��UnicodeӦ��TEXT��Χ�ִ�*/
        {
            case IDYES:MessageBox(NULL,TEXT("��Ͷ�����"),TEXT("����"),MB_ICONINFORMATION|MB_YESNO);break;
            case IDNO:
                {
                    int b=MessageBox(NULL,TEXT("���ﲻ�ǣ���ѡ"),TEXT("����"),MB_ICONINFORMATION|MB_YESNO);
                    switch(b)
                    {
                        case IDYES:
                        case IDNO:main();break;
                    }

                }


        }
    return 0;
    }
