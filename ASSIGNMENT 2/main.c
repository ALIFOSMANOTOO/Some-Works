#include <stdio.h>
#include <stdlib.h>

int main()
{

#include <stdio.h>
#include <stdlib.h>

int main()
{


     char day;
label:
    printf("Enter your favorite day of the week \n");
    scanf("%c",&day);
    switch(day)
    {
  case 'm':
  case 'M':
      printf("Monday\n");
         printf("stress day\n");
      break;
  case 't':
  case 'T':
    printf("Tuesday\n");
       printf("after stress day\n");
    break;

    case 'w':
  case 'W':
      printf("Wednesday\n");
         printf("special day\n");
      break;
  case 'h':
  case 'H':
    printf("Thursday\n");
       printf("preparation of break day\n");
    break;

    case 'f':
  case 'F':
      printf("Friday\n");
         printf("end of stress day\n");
      break;
  case 's':
  case 'S':
    printf("Saturday\n");
       printf("fun day\n");
    break;

     case 'u':
  case 'U':
    printf("Sunday\n");
    printf("visitation day\n");
    break;

  default:
    printf("wrong input!!!!\n");
      goto label ;
    }
    return 0;
}


}
