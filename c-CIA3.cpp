#include<stdio.h>
int main(){
int value;
double US,amount,Can,EU,YEN,DIR,RUB,AUS,YUAN,POU,SINGA,HK,PESO;
printf("select which currency to convert to:\n");
printf("US$           1 \nCanadian $    2 \neuro          3 \nyen           4 \ndirham        5");
printf("\nRuble         6 \nAustralian $  7 \nYuan          8 \npound         9 \nSingapore $   10");
printf("\nHong Kng $    11 \nMexican Peso  12 \n");
printf("\nplease choose the currency:");
scanf("%d",&value);
if(value<13&&value>0){
if(value==1){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
US=amount/83;
printf("the value of %2f indian ruppees in US$ is %2f",amount,US);
}

if(value==2){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
Can=amount/60;
printf("the value of %2f indian ruppees in Candian $ is %2f",amount,Can);
}
if(value==3){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
EU=amount/88;
printf("the value of %2f indian ruppees in Euro is %2f",amount,EU);
}
if(value==4){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
YEN=amount/0.55;
printf("the value of %2f indian ruppees in Yen is %2f",amount,YEN);
}
if(value==5){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
DIR=amount/22.64;
printf("the value of %2f indian ruppees in Dirham is %2f",amount,DIR);
}
if(value==6){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
RUB=amount/0.89;
printf("the value of %2f indian ruppees in Russian Ruble is %2f",amount,RUB);
}

if(value==7){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
AUS=amount/52.5;
printf("the value of %2f indian ruppees in Australian $ is %2f",amount,AUS);
}

if(value==8){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
YUAN=amount/11.27;
printf("the value of %2f indian ruppees in Chinese Yuan is %2f",amount,YUAN);
}

if(value==9){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
POU=amount/100.60;
printf("the value of %2f indian ruppees in Pounds is %2f",amount,POU);
}

if(value==10){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
SINGA=amount/60.7;
printf("the value of %2f indian ruppees in Singapore $ is %2f",amount,SINGA);
}

if(value==11){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
HK=amount/10.6;
printf("the value of %2f indian ruppees in Hng Kong $ is %2f",amount,HK);
}
if(value==12){
printf("enter the amount of indian ruppees:");
scanf("%lf",&amount);
PESO=amount/4.54;
printf("the value of %2f indian ruppees in Mexican Peso is %2f",amount,PESO);
}}
else {
	printf("invalid input");
}
}
