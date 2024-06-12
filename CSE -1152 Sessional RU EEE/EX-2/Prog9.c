//Calculate CGPA is a semester
#include<stdio.h>
int main()
{
    float eee1111,eee1112,cse1151,cse1152,ce1152,phy1121,phy1122,math1131,eng1111,eng1112,result;

    printf("GPA in EEE-1111:");
    scanf("%f",&eee1111);

    printf("GPA in EEE-1112:");
    scanf("%f",&eee1112);

    printf("GPA in CSE-1151:");
    scanf("%f",&cse1151);

    printf("GPA in CSE-1152:");
    scanf("%f",&cse1152);

    printf("GPA in CE-1152:");
    scanf("%f",&ce1152);

    printf("GPA in PHY-1121:");
    scanf("%f",&phy1121);

    printf("GPA in PHY-1122:");
    scanf("%f",&phy1122);

    printf("GPA in MATH-1131:");
    scanf("%f",&math1131);

    printf("GPA in ENG-1111:");
    scanf("%f",&eng1111);

    printf("GPA in ENG-1112:");
    scanf("%f",&eng1112);

    result=((eee1111*3)+(eee1112*1)+(cse1151*3)+(cse1152*2)+(ce1152*1)+(phy1121*3)+(phy1122*1)+(math1131*3)+(eng1111*2)+(eng1112*1))/(3+1+3+2+1+3+1+3+2+1);

    printf("CGPA=%f",result);
    return 0;
}

