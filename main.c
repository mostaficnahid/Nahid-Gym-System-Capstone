#include<stdio.h>
#include<conio.h>   //getch(),
#include <stdlib.h> //system("CLS"),
#include<windows.h> //gotoxy(),
#include<string.h>
#include<time.h>    //time

//pre-function declaration
void main_menu();
void receptionist_registration();
void receptionist_authentication();
double BMI();
int Loading_Animator();
void equipment();
void Receptionist_Section();
void addstaff();
int getdata();
void deletestaff();
void searchstaff();
void viewstaff();
void editstaff();
int checkid();
void equipment();
void Trainer();
void admin_registration();
void admin_authentication();
void admin_section();
void returnfunc();
void date_time();

//global variable and structure
int i,s;
FILE *fp,*ft,*fs;
char catagories[][15]= {"New Member","Coach","Staff"};

char findstaff;

//main function start
int main()
{
    main_menu();
    getch();
}

//Main menu
void main_menu(void)
{
    system("color F2");
    system("CLS");
    int chose_in_1st_step,chose_in_2nd_step;

int date_time() {
    time_t current_time;
    struct tm *time_info;

    time(&current_time);
    time_info = localtime(&current_time);

    printf("\n\n\t\t\tDate and time: %s", asctime(time_info));

    return 0;
}



    printf("\n\t\t\t%c \t\t                                                                    %c",178,178);
    printf("\n\t\t\t%c \t\t   ** W E L C O M E    T O    \"N A H I D G Y M\" **                      %c",178,178);
    printf("\n\t\t\t%c \t\t                                                                    %c",178,178);

    printf("\n\n\n\n\t\t\t1)Receptionist Section\n");
    printf("\t\t\t2)Authority Section\n");
    printf("\t\t\t3)BMI Calculator\n");
    printf("\t\t\t4)Quit\n");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d",&chose_in_1st_step);
    switch(chose_in_1st_step)
    {
    case 1:
    {
        system("CLS");

        printf("\n\t\t\t%c \t\t                                                                    %c",178,178);
        printf("\n\t\t\t%c \t\t   ** R E C E P T I O N I S T    S I G N    I N **                  %c",178,178);
        printf("\n\t\t\t%c \t\t                                                                    %c",178,178);

        break;
    }
    case 2:
    {
        system("CLS");

        printf("\n\t\t\t%c \t\t                                                                    %c",178,178);
        printf("\n\t\t\t%c \t\t   ** A U T H O R I T Y    S I G N    I N **                        %c",178,178);
        printf("\n\t\t\t%c \t\t                                                                    %c",178,178);

        break;
    }
    case 3:
        {
            double height,weight;
            system("CLS");

            printf("\n\t\t\t%c \t\t                                                                    %c",178,178);
            printf("\n\t\t\t%c \t\t   ** B M I    C A L C U L A T O R **                               %c",178,178);
            printf("\n\t\t\t%c \t\t                                                                    %c",178,178);

            system("color F5");
            printf("           Enter your Height(meter):");
            scanf("%lf",&height);
            printf("Enter your Weight: ");
            scanf("%lf",&weight);
            BMI(height,weight);
        }
    case 4:
        {
            exit(1);
        }
    default:
    {
        printf("\t\t\twrong input\n");
        printf("\t\t\tEnter any key to try again...");
        getch();
        system("CLS");
        main_menu();
    }
    }
}
//Calculate BMI
double BMI(double hight,double weight)
{
    double percentage=(weight)/(hight* hight);
    if(percentage<16 && percentage<18.5)
    {
        printf("\n\t\t\tBMI index is : %.2lf\n",percentage);
        printf("\n\t\t\t-Thinness");
    }
    else if(percentage>18.5 && percentage<25)
    {
        printf("\n\t\t\tBMI index is : %.2lf",percentage);
        printf("\n\t\t\t-Normal");
    }
    else if(percentage>25 && percentage<30)
    {
        printf("\n\t\t\tBMI index is : %.2lf",percentage);
        printf("\n\t\t\t-Overweight");
    }
    else if(percentage>30 && percentage<40)
    {
        printf("\n\t\t\tBMI index is : %.2lf",percentage);
        printf("\n\t\t\t-Obese");
    }
    else
    {
        printf("\n\t\t\tsomething is wrong!\b");
    }
    printf("\n\n\t\t\twant to go main menu ? (0/1): ");
    int choice_bmi;
    scanf("%d",&choice_bmi);
    if(choice_bmi == 1)
        main_menu();

    else if(choice_bmi == 0)
        exit(1);

    else
    {
        printf("\t\t\tWrong input!\n");
        getch();
        main_menu();
    }
}

//Loading Animator function(for design purpose
int Loading_Animator()
{
    printf("\n");
    int k;
    int c=1,d=1;
    printf("\n\t\t\t");
    for(k=1; k<=60; k++)
    {
        printf("%c",220);
        for(c=1; c<=25000/8; c++)
            for(d=1; d<=25000/8; d++)
            {

            }
    }
    printf("\n\t\t\t\t\t\t\n");
    return 0;
}

//for design purpose
void design_LINE()
{
    printf("\n");
    printf("\t\t\t%c",178,178);
    int designerA;
    for (designerA=1; designerA<=84; designerA++)
    {
        printf("%c",178);
    }
}

//Date and Time
int time_date(void)
{
    time_t t;

    time(&t);

    printf("\n\n\t\t\tDate and time:%s\n",ctime(&t));

    return 0 ;
}

//Return function as if we need to use go back to main menu frequently
void returnfunc(void)
{
    {
        printf("Press ENTER to return to main menu");
    }
a:
    if(getch()==13)
        main_menu();
    else
        goto a;
}
//End of this project
