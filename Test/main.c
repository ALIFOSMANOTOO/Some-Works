#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("hi there, my name is kwaku lyfstyle and this is my first c programming test \n");

    int age=18;//the value of age is 50
    printf("I am %d years old\n",age);//to print the value of age as an integer


    int level=100;
    printf("I am in level %d now \nI am %d years old\n",level,age);


    int personalnumber;
    printf("please enter your personal number below\n");
    scanf("please enter your personal number here %d\n",&personalnumber);
    printf("you have now registered %d as your personal number\n", &personalnumber);



    char name[]="";
    printf("please say your name below \n");
    scanf("%s \n ",&name );
    printf("welcome %s \n",&name);








    return 0;
}
