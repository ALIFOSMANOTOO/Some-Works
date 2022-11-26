#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height, weight, bmi ;
    printf("enter your height in meters \n");
    scanf("%f",&height);

     printf("enter your weight in kg \n");
    scanf("%f",&weight);


    bmi=weight /(height*height);
    printf("your body mass index (bmi)is %f ",bmi);


    if(bmi <18.5)
    {
        printf("your body mass index category is :under  weight\n");
    }


    else if (bmi >=18.5 &&bmi <=24.9)
    {
        printf("your body mass index is :normal weight \n");
    }


     else if (bmi >=25.0 &&bmi <=29.9)
    {
        printf("your body mass index is :pre obesity \n");
    }

     else if (bmi >=30.0 &&bmi <=34.9)
    {
        printf("your body mass index is :obesity class 1 \n");
    }

  else if (bmi >=35.0 &&bmi <=39.9)
    {
        printf("your body mass index is :obesity class 2 \n");
    }


     else if (bmi >40)
    {
        printf("your body mass index is :obesity class 3 \n");
        printf("very obese\n");
    }

    else
    {
        printf("wrong entry\n");
    }

    int age;
    printf("please enter your age below\n");
    scanf("%d",&age);
    printf("you are %d years old and with a bmi of %f",age ,bmi);

    return 0;
}
