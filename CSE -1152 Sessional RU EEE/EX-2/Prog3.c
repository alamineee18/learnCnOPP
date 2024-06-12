/*Take score of a cricket match and display the result*/

#include <stdio.h>
int main( )
{
    int run1, run2, wicket1, wicket2, a, b;

    printf("The Score OF Team1:");
    scanf("%d",&run1);

    printf("Wicket fall in Team1:");
    scanf("%d",&wicket1);

    printf("The Score OF Team2:");
    scanf("%d",&run2);

    printf("Wicket fall in Team2:");
    scanf("%d",&wicket2);

    a = run1-run2;
    b = 10-wicket2;

    if(run1 > run2){
        printf("TEAM1 WON BY %d RUNS",a);
    }

    else if(run2 > run1){
        printf("TEAM2 WON BY %d WEIKETS",b);
    }

    else{
    printf("MATCH DRAW");
    }

    return 0;
}
