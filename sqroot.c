#include<stdio.h>
double squareroot(double number){
if(number<0){
return 0;
}
double temp,sqr;
temp = 0;
sqr = number/2;
while(temp != sqr){
temp = sqr;
sqr = (number/temp + temp) / 2;
}
return sqr;
}
int main(){
double number;
scanf("%lf",&number);
double result = squareroot(number);
if(result){
printf("%.2lf",result);
}
else{
printf("Error: Cannot calculate the square root of a negative number.");
}
}
