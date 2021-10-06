#include <stdio.h>
#include <stdlib.h>
#define PI 3.132456
#define GREATER(x,y) if(x>y)\
                           printf("%d is greater than %d",x,y);\
                     else\
                        printf("%d is greater than %d",y,x);


extern int a;
int main()
{
    /*printf("%d",increment());
    printf("%.5f",PI);
    GREATER(3,4);
    printf("%s",__DATE__);
    int a,b;
    printf("please enter a num: ");
    scanf("%d",&a);
    printf("please enter b num: ");
    scanf("%d",&b);
    printf("%d + %d=%d ",a,b,a+b);
    int a;
    printf("please enter a value:");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=i;j<a;j++){
            printf(" ");
        }
        for(int j=0;j<i*2+1;j++){
            printf("*");
        }printf("\n");

    }
    int n,r;
    printf("please enter the number:");scanf("%d",&n);
    int q=n;
    int result=0;
    while(q !=0){
        r=n%10;
        result=result*10+r;
        q=q/10;
    }
    if(result==n)
        printf("it's equal");
    else
        printf("it isn't equal");
    int a,i;
    int sum=0;
    printf("please enter a number:");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            sum++;
        }

    }if(sum==0){
        printf("even number");
    }
    else
        printf("isnt a even number");
    int a,b;
    printf("please enter values for a and b:");
    scanf("%d   %d",&a,&b);
    while(b!=0){
        a++;b--;
    }
    printf("%d",a);
    int a,i,j;
    int x=1;
    printf("please enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<i;j++){
            printf("%d",x);
            x++;
        }
        printf("\n");
    }
    how to develop   work ethic for your passion:
    **you have to love what you do:
        your bisinesses
        your passsions
        if you dont love you dont work hard
    **you have to do what you love:
        if you do something ,if you hate it you can't do it
        you shoul immidiately change it to your passion.
    **you have to creat an environment for success;
        if your environment suck:
                every day the enviroment don't supports you
                so your environment should support you to
                archive your targets:
    */
    int sum=0,a;
    printf("please enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        if(a%i==0)
            sum +=i;
    }
    printf("%d",sum);














    return 0;
}
