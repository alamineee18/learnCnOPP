//WAP to find mean, median and mode in an array
#include<stdio.h>
int main()
{
    int i,j,a[20]={0},sum=0,n,t,b[20]={0},k=0,c=1,max=0,mode;

    float x=0.0,y=0.0;
    printf("\nEnter the limit\n");
    scanf("%d",&n);

    printf("Enter the set of numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    x=(float)sum/(float)n;
    printf("Mean\t= %f",x);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    if(n%2==0){
        y=(float)(a[n/2]+a[(n-1)/2])/2;
    }
    else{
        y=a[(n-1)/2];
    }

    printf("\nMedian\t= %f",y);

    for(i=0;i<n-1;i++){
        mode=0;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
            mode++;
            }
        }
        if((mode>max)&&(mode!=0)){
            k=0;
            max=mode;
            b[k]=a[i];
            k++;
        }
        else if(mode==max){
            b[k]=a[i];
            k++;
        }
    }

    for(i=0;i<n;i++){
        if(a[i]==b[i])
        c++;
    }

    if(c==n)
    printf("\nThere is no mode");

    else{
        printf("\nMode\t= ");
        for(i=0;i<k;i++)
        printf("%d ",b[i]);
    }
 }
