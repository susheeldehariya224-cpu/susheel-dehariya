#include<stdio.h>
int main()
{
    // int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d",arr[i][j]);
    //     }printf("\n");
//     // }
// int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
// for (int i=0;i<4;i++){
//     for (int j=0;j<4;j++){
//         printf("%d ,arr[i][j]");
        
//     }printf("\n");
// }


// }

//   int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
//             printf("%d",sum);

//             printf("\n");



// }
// return 0;

  int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
  int arr1 [9];
  int k=0;
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        arr1[k]=arr[i][j];
        k++;
    }
    printf("%d",arr1[i]);
  }

}
