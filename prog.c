#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    printf("Square of given value is %d \n",a*2);
    
    float b;
    printf("enter float value:");
    scanf("\n%f",&b);
    printf("the float value is %.3f\n", b/15.6);
    
    char c[105];
    printf("enter char:");
    scanf("%c",&c);
    printf("character name is : %c\n",c);
    
    double d;
    printf("enter any value:");
    scanf("%lf",&d);
    printf("Value of double is: %lf\n", d);
    
    unsigned int e;
    printf("enter intiger:");
    scanf("%u",&e);
    printf("unsigned int: %u\n",e);
    
    long int f;
    printf("enter long integer value:");
    scanf("%ld",&f);
    printf("Long int:%ld\n",f);
    
    short int g;
    printf("enter short int:");
    scanf("%hd",&g);
    printf("Short int:%hd\n",g);
    
    long long int h;
    printf("enter integer value:");
    scanf("%lld",&h);
    printf("long long int:%lld\n",h*4);
    
    signed char i;
    printf("enter character:");
    scanf("%c",&i);
    printf("signed char:%c\n",i);
    
    unsigned char j;
    printf("enter character:");
    scanf("%c",&j);
    printf("Unsigned char:%c\n",j);
    

    return 0;
}

