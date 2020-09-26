    #include<stdio.h>
    #include<windows.h>/**清屏函数**/



    int main()
    {
        int Balance = 0;/**账户余额**/
        int T_money = 0;/**转账金额**/
        int W_money = 0;/**取款金额**/
        char Password[20]="270012";/**原始密码**/
        char Lnput1[20];/**输入的密码**/
        int choose = 0;/**选择**/
        system("cls");
        printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
        printf("\t\t@  欢迎使用建设银行ATM机  @\n\n");
        printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
        printf("\n");
        printf("\t请 输 入 密 码:    ");
        scanf("%s", &Lnput1);/**输入的密吗**/
        if(strcmp(Lnput1,Password) == 0)
        {
            system("cls");/**清屏**/
            printf("请选择您要执行的业务：\n");
            printf("\t1:<转账>          \t2:<查询>\n");
            printf("\t3:<修改密码>      \t0:<取款>\n");
            printf("\t      请输入0-5进行选择：\n");
            scanf("%d", &choose);
            switch(choose)
            {
                case 1:
                {
                    system("cls");
                    printf("请输入转账账号:");
                    break;
                }

                case 2:
                {
                    system("cls");
                    printf("请输入转账金额:\n");
                    break;
                }

                case 3:
                {

                    printf("余额：%d\n", Balance);
                    break;
                }

                case 0:
                {
                    printf("\t  <请输入取款数目或者选择>\n");
                    scanf("%ld",&W_money);
                    if(W_money > Balance)
                    {
                        printf("余额不足！\n\a");
                        Sleep(800);
                    }
                    else
                    {
                        Balance=Balance-W_money;
                    }
                }
                default:
                {
                    printf("\t\t您的输入有误\n\t\t请重新输入\n");
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
            printf("\t\t您输入的密码错误!\n\n\a");
            printf("\t\t请重新输入!!!!\n\n");
            printf("                 \n");
            printf("                 \n");
            printf("三次密码输入错误，将终止程序\n");
            printf("     请 输 入 密 码:    ");
            scanf("%s", &Lnput1);

            if(strcmp(Password,Lnput1) == 0 )
            {
                system("cls");/**清屏**/
                printf("请选择您要执行的业务：\n");
                printf("\t1:<转账>          \t2:<查询>\n");
                printf("\t3:<修改密码>      \t0:<取款>\n");
                printf("\t      请输入0-5进行选择：\n");
                scanf("%d", &choose);
                switch(choose)
                {
                    case 1:
                    {
                        system("cls");
                        printf("请输入转账账号:");
                        break;
                    }

                    case 2:
                    {
                        system("cls");
                        printf("请输入转账金额:\n");
                        break;
                    }

                    case 3:
                    {
                        printf("余额：%d\n", Balance);
                        break;
                    }

                    case 0:
                    {

                        printf("\t  <请输入取款数目或者选择>\n");
                        scanf("%ld",&W_money);
                        if(W_money > Balance)
                        {
                            printf("余额不足！\n\a");
                            Sleep(800);

                        }
                        else
                        {
                        Balance=Balance-W_money;
                        }
                    }
                    default:
                    {
                        printf("\t\t您的输入有误\n\t\t请重新输入\n");
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
                printf("\t\t您输入的密码错误!\n\n\a");
                printf("\t\t请重新输入!!!!\n\n");
                printf("                 \n");
                printf("                 \n");
                printf("三次密码输入错误，将终止程序\n");
                printf("     请 输 入 密 码:    ");
                scanf("%s", &Lnput1);

                if(strcmp(Password,Lnput1) == 0 )
                {
                    system("cls");/**清屏**/
                    printf("请选择您要执行的业务：\n");
                    printf("\t1:<转账>          \t2:<查询>\n");
                    printf("\t3:<修改密码>      \t0:<取款>\n");
                    printf("\t      请输入0-5进行选择：\n");
                    scanf("%d", &choose);
                    switch(choose)
                    {
                        case 1:
                        {
                            system("cls");
                            printf("请输入转账账号:");
                            break;
                        }

                        case 2:
                        {
                            system("cls");
                            printf("请输入转账金额:\n");
                            break;
                        }

                        case 3:
                        {
                            printf("余额：%d\n", Balance);
                            break;
                        }

                        case 0:
                        {

                            printf("\t  <请输入取款数目或者选择>\n");
                            scanf("%ld",&W_money);
                            if(W_money > Balance)
                            {
                                printf("余额不足！\n\a");
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
                            printf("\t\t您的输入有误\n\t\t请重新输入\n");
                            Sleep(800);
                        }
                        break;
                    }
                }
                else
                {
                    system("cls");
                    printf("\t\t        **********************\n");
                    printf("\t\t        ****您的密码已锁定****\n\a");
                    printf("\t\t        **********************\n");
                    printf("\t\t您输入密码已达最大次数，请联系工作人员进行解锁。\n");

                }

            }

        }

    }
