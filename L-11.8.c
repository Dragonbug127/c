    #include<stdio.h>
    #include<windows.h>/**��������**/



    int main()
    {
        int Balance = 0;/**�˻����**/
        int T_money = 0;/**ת�˽��**/
        int W_money = 0;/**ȡ����**/
        char Password[20]="270012";/**ԭʼ����**/
        char Lnput1[20];/**���������**/
        int choose = 0;/**ѡ��**/
        system("cls");
        printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
        printf("\t\t@  ��ӭʹ�ý�������ATM��  @\n\n");
        printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
        printf("\n");
        printf("\t�� �� �� �� ��:    ");
        scanf("%s", &Lnput1);/**���������**/
        if(strcmp(Lnput1,Password) == 0)
        {
            system("cls");/**����**/
            printf("��ѡ����Ҫִ�е�ҵ��\n");
            printf("\t1:<ת��>          \t2:<��ѯ>\n");
            printf("\t3:<�޸�����>      \t0:<ȡ��>\n");
            printf("\t      ������0-5����ѡ��\n");
            scanf("%d", &choose);
            switch(choose)
            {
                case 1:
                {
                    system("cls");
                    printf("������ת���˺�:");
                    break;
                }

                case 2:
                {
                    system("cls");
                    printf("������ת�˽��:\n");
                    break;
                }

                case 3:
                {

                    printf("��%d\n", Balance);
                    break;
                }

                case 0:
                {
                    printf("\t  <������ȡ����Ŀ����ѡ��>\n");
                    scanf("%ld",&W_money);
                    if(W_money > Balance)
                    {
                        printf("���㣡\n\a");
                        Sleep(800);
                    }
                    else
                    {
                        Balance=Balance-W_money;
                    }
                }
                default:
                {
                    printf("\t\t������������\n\t\t����������\n");
                    Sleep(800);
                }
                break;
            }
        }
        else
        {
            system("cls");
            printf("                 \n");
            printf("                 \n");
            printf("\t\t��������������!\n\n\a");
            printf("\t\t����������!!!!\n\n");
            printf("                 \n");
            printf("                 \n");
            printf("��������������󣬽���ֹ����\n");
            printf("     �� �� �� �� ��:    ");
            scanf("%s", &Lnput1);

            if(strcmp(Password,Lnput1) == 0 )
            {
                system("cls");/**����**/
                printf("��ѡ����Ҫִ�е�ҵ��\n");
                printf("\t1:<ת��>          \t2:<��ѯ>\n");
                printf("\t3:<�޸�����>      \t0:<ȡ��>\n");
                printf("\t      ������0-5����ѡ��\n");
                scanf("%d", &choose);
                switch(choose)
                {
                    case 1:
                    {
                        system("cls");
                        printf("������ת���˺�:");
                        break;
                    }

                    case 2:
                    {
                        system("cls");
                        printf("������ת�˽��:\n");
                        break;
                    }

                    case 3:
                    {
                        printf("��%d\n", Balance);
                        break;
                    }

                    case 0:
                    {

                        printf("\t  <������ȡ����Ŀ����ѡ��>\n");
                        scanf("%ld",&W_money);
                        if(W_money > Balance)
                        {
                            printf("���㣡\n\a");
                            Sleep(800);

                        }
                        else
                        {
                        Balance=Balance-W_money;
                        }
                    }
                    default:
                    {
                        printf("\t\t������������\n\t\t����������\n");
                        Sleep(800);
                    }
                    break;
                }
            }
            else
            {
                system("cls");
                printf("                 \n");
                printf("                 \n");
                printf("\t\t��������������!\n\n\a");
                printf("\t\t����������!!!!\n\n");
                printf("                 \n");
                printf("                 \n");
                printf("��������������󣬽���ֹ����\n");
                printf("     �� �� �� �� ��:    ");
                scanf("%s", &Lnput1);

                if(strcmp(Password,Lnput1) == 0 )
                {
                    system("cls");/**����**/
                    printf("��ѡ����Ҫִ�е�ҵ��\n");
                    printf("\t1:<ת��>          \t2:<��ѯ>\n");
                    printf("\t3:<�޸�����>      \t0:<ȡ��>\n");
                    printf("\t      ������0-5����ѡ��\n");
                    scanf("%d", &choose);
                    switch(choose)
                    {
                        case 1:
                        {
                            system("cls");
                            printf("������ת���˺�:");
                            break;
                        }

                        case 2:
                        {
                            system("cls");
                            printf("������ת�˽��:\n");
                            break;
                        }

                        case 3:
                        {
                            printf("��%d\n", Balance);
                            break;
                        }

                        case 0:
                        {

                            printf("\t  <������ȡ����Ŀ����ѡ��>\n");
                            scanf("%ld",&W_money);
                            if(W_money > Balance)
                            {
                                printf("���㣡\n\a");
                                Sleep(800);

                            }
                            else
                            {
                                Balance=Balance-W_money;
                                main();
                            }
                        }
                        default:
                        {
                            printf("\t\t������������\n\t\t����������\n");
                            Sleep(800);
                        }
                        break;
                    }
                }
                else
                {
                    system("cls");
                    printf("\t\t        **********************\n");
                    printf("\t\t        ****��������������****\n\a");
                    printf("\t\t        **********************\n");
                    printf("\t\t�����������Ѵ�������������ϵ������Ա���н�����\n");

                }

            }

        }

    }
