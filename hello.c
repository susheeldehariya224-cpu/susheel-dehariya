// #include<stdio.h>
// int main()
// {
//     for(inti=0;i<50;i++)
//     printf("susheel\n")
//  if(i%2==0)  
//  printf("%d\n"i);
// if(i%2==1)
// printf("%d\n"i);

// return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int num=123; //321
//     int original=num;
//     int res=0;
//     while(num!=0)
//     {
//         int lastdit=num%10;
//         res=res*10+lastdigit;
//         num=num/10;

//     }

// }


// #include<stdio.h>
// int main()
// {
    // int n;
    // printf("enter the number of n:");
    // scanf("%d,&n");

    // for(int i=0;i<3;i++)
    // {
    //     for (int j=0;j<=i;j++)
    //     {
    //         printf("*");
    //     }
    //     for(int j=1;j<=2*(n-1);j++)
    //     {
    //         printf(" ")

    //     }
    //     for (int j=1;j<=1;j++)
    //     {
    //         printf("*")
    //     }
    //     printf("\n");
    // }


//  for(int i=1;i<n;i++)
// //  {
//     for(int j=n;j<=2*(n-i);j--);
//     {
//         printf("*");

//     }
//     for(int j=n;j<=2*(n-i);j--);
//     {
//         printf(" ");
//     }
//     for (int j=n;j<=2*(n-i);j--);
//     {
//         printf("*");
//     }
//     printf("\n";)
// }
    
// }

#include<stdio.h>
int main()
{

         int n=5;
         for(int i=1; i<=n; i++)
       {
          for(int j=1;j<=n;j++)
          {
            printf("*");
            if(i==1 || i==n || j==1 || j==n)
            {
                printf("*");g
        
            }else{
                printf(" ");
        }
    }
    printf("\n");
 }
                
}