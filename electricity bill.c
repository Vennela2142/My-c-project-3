#include<stdio.h>
 void main()
{
float units,a,b,c,d;
printf("the number of units:");
scanf("%f",&units);
if(units<=50)
{
a=units*0.50;
printf("the cost is %f",a);
}
else if(units<=150)
{
b=(50*0.50)+(units-50)*0.75;
printf("the cost is %f",b);
}
else if (units<=250)
{
c=(50*0.50)+(100*0.75)+(units-150)*1.20;
printf("the cost is %f",c);
}
else if(units>250)
{
d=(50*0.50)+(100*0.75)+(100*1.20)+(units-250)*1.50;
printf("the cost is %f",d);
}
}