    #include<windows.h>
    //�мǣ�������<windows.h>ʱ����Ҫ����MFC����Afx.h)

    int main()
    {
        int result = MessageBox( NULL , TEXT("��ϲ������") , TEXT("xxeexx") , MB_ICONINFORMATION|MB_YESNO);
        switch(result)/*ע�⣡ʹ��UnicodeӦ��TEXT��Χ�ִ�*/
    {
        case IDYES:
        {
            int a=MessageBox(NULL,TEXT("�����"),TEXT("xxeexx"),MB_ICONINFORMATION|MB_YESNO);
            switch(a)
            {
            case IDYES:MessageBox(NULL,TEXT("̫���ˣ�"),TEXT("xxeexx"),MB_YESNO);break;
            case IDNO:MessageBox(NULL,TEXT("��ƭ�ң�"),TEXT("xxeexx"),MB_YESNO);break;
            }
            break;
        }
        case IDNO:
            {
                int b=MessageBox(NULL,TEXT("�㲻��������"),TEXT("xxeexx"),MB_ICONINFORMATION|MB_YESNO);
                switch(b)
                {
                case IDYES:MessageBox(NULL,TEXT("���Ǿ����ɣ�"),TEXT("xxeexx"),MB_YESNO);break;
                case IDNO:
                    {
                        int c = MessageBox(NULL,TEXT("��˵�㰮��"),TEXT("xxeexx"),MB_YESNO);
                        switch(c)
                        {
                        case IDYES:MessageBox(NULL,TEXT("̫���ˣ�"),TEXT("xxeexx"),MB_YESNO);break;
                        case IDNO:MessageBox(NULL,TEXT("��ƭ�ң�"),TEXT("xxeexx"),MB_YESNO);break;
                        }
                        break;
                    }
                }
                break;
            }
    }
    return 0;
    }
