#include<stdio.h>


int main(){
  int  maxArraySum (int arr [],int n,int k){
        int maxSum=0;
        for(int i=0; i<=n-k;i++){
            int currSum=0;
            form(intj=i;j<i+k;j++){
                currSum=currSum+arr[j];
            }g
            if(currSum>maxSum){
                maxSum=currSum;

            }
        }
        return maxSum;

    }


    int main(){
        int arr[7]={-1,2,4,5,-4,3,7}
        int k=3;
        int n=    sizeof (arr)/sizeof (arr[0]);
        int data=   max Arraysum(arr,n,k);

    }
    
 printf ("%d",data)
}