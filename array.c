#include<stdio.h>
int main()
{
    // int arr [5]={1,1,3,4,5};
    // for(int i=0;i<5;i++)
    // {
        // printf("%d",arr[i]);
    

    
        // printf("%d",arr[4]);
    // }





// int sum=0;
// for(int i=0;i<5;i++)
// {
//     sum= sum+arr[i];
//     printf("%d\n",sum);

// int sum=0;
// for (int i=0;i<3;i++)
// sum =sum+arr[i];
// printf("%d\n",sum);

// int arr[5]={3,12,52,34,5};
// int max =arr[0];
// for (int i=1;i<5;i++){
//     if(arr[i]>max){
//         max=arr[i];
//     }

// }
// /
// / printf("%d\n",max);

// int max =arr[0];
// for(int i=0;i<5;i++)
// {
//     if (arr[i]>max)
//     {
//         max=are[i];
//     }

// }
// printf("%d\n",max)
// }



// int i;
// for(i=0;i<5;i++)
// {
//     if (arr[i]==5)
//     {
        
//    printf("%d\n",arr[i]);
//     }
// }

// int i;
// for (int i=0;i<5;i++)
// {
//     if (arr[i]%2==0)
//     {
//         printf("%d\n",arr[i]);
//     }
//     else{
//         printf("%d",arr[i]);
//     }
// }

// int arr[5]={3,12,52,34,5};
// int target=3;
// for(inti=0;i<5;i++){
//     if(arr[i]==target){
//         printf("%d",arr[i]);
//         break;
//     }
// }



int arr[7]={1,3,4,6,-5,5,1};
int k=7;
for (int i=0;i<7;i++){
    for (int j=0;j<7;j++){
        if (arr[i]+arr[j]==k){
            printf("%d %d",i,j);
            break;
        }
    }
}








}