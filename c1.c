/*
#include<stdio.h>
int main()
{
    printf("Hello world");
    return 0;
}
*/

/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    printf("Sum is : %d", a+b);

    return 0;
}
*/

// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the side of the square : ");
//     scanf("%d",&a);

//     printf("Area of the square : %d",a*a);

//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int r;
//     printf("Enter the radius of the circle : ");
//     scanf("%d",&r);

//     printf("Area of the circle : %.2f",3.14*r*r);

//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("Enter the number you wnat table of : ");
//     scanf("%d",&a);

//     printf("%d * 1 = %d\n",a,a*1 );
//     printf("%d * 2 = %d\n",a,a*2 );
//     printf("%d * 3 = %d\n",a,a*3 );
//     printf("%d * 4 = %d\n",a,a*4 );
//     printf("%d * 5 = %d\n",a,a*5 );
//     printf("%d * 6 = %d\n",a,a*6 );
//     printf("%d * 7 = %d\n",a,a*7 );
//     printf("%d * 8 = %d\n",a,a*8 );
//     printf("%d * 9 = %d\n",a,a*9 );
//     printf("%d * 10 = %d\n",a,a*10 );    
//     return 0;
// } 

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[30], b[30]; 
//     printf("Did you clear science exam?\nType 'yes'\n");
//     scanf("%s", &a);
//     printf("Did you clear mathematics exam?\nType 'yes'\n");
//     scanf("%s", &b);

//     // printf("%s,%s",a,b);    
//     if (strcmp(a,"yes") ==0 && strcmp(b,"yes" ) == 0 )
//     {
//         printf("You get Rs 45!!");

//     }
//     else if (strcmp(a,"yes") == 0)
//     {
//         printf("You earned Rs 15");
//     }
//     else if (strcmp(b,"yes") == 0)
//     {
//         printf("You earned Rs 15");
//     }
//     else{
//         printf("Fuck you!!");
//     }
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int age , score;
//     printf("Enter your age : \n");
//     scanf("%d",&age);
//     printf("Enter your score : \n");
//     scanf("%d",&score);

//     switch (age)
//     {
//     case 12:
//         printf("The age is 12\n");
//         switch (score)

//         {
//         case 12:
//             printf("Your score is 12\n");
//             break;
        
//         default:
//             printf("Your score is not 12\n ");
//             break;
//         }
//         break;
//     case 15:
//         printf("The age is 15\n");
//         break;
//     case 18:
//         printf("The age is 18\n");
//         break;
    
//     default:
//     printf("Age is not 12, 15, 18\n");
//         break;
//     }
//     return 0;
// }

/*
If break statement is not added , rest of all the statements will be printed.
*/

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=110;
//     do
//     {
//         i=i+1;
//         printf("%d",i);
//     } while (i<10);
    
//     return 0;
// }

/*
Do while loop runs atleast one time irrespective of condition
*/

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,i=0;
//     printf("Enter your number : ");
//     scanf("%d",&a);
//     while (i<a)
//     {
//         i++;
//         printf("Current number is %d, %d numbers remaining !\n",i,a-i);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, i;
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d\t", i);
//     }   
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a=0, i=0;
//     for (; a<5,i < 10; i++,a++)
//     {
//         printf("%d\t%d\n", i,a);
        
//     }   
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int age, i;
//     for (size_t i = 0; i < 11; i++)
//     {
//         printf("%d\nEnter your age\n",i);
//         scanf("%d",&age);
//         if (age>10)
//         {
//             break;
//         }
//         else if (age<=10)
//         {
//             continue;
//         }
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,b,c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     if (a==b)
//     { if (a>c){printf("case 1");}}
    
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,b,i,j;
//     printf("Enter max number of stars : \n");
//     scanf("%d",&a);

//     printf("Enter increment of stars : \n");
//     scanf("%d",&b);

//     for ( i = 1; i <= a;  )
//     {
//         for ( j = 0; j < i; j++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//         i=i+b;
//     }
    
//     return 0;

// }
 