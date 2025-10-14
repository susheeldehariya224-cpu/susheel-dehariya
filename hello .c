
#include <stdio.h>
#include <stdlib.h>
int main (){
//     int height [5]={2,4,2,5,1};
//     int i=0;
//     int j=4;

//     while(i<j)
//     {
//         int h;
//         if (height[i]<height[j]){
//             else{
//                 h=height[i];


//                 int w=j-i;
//                 int area=h*w;
//                 if (area>Maxarea){
//                     maxArea=Area;


//                 }
//                 if(height[i]<height[j]){
//                     i++;

//                 } else{
//                     j--;
//                 }

//             }

             

//         }
//     }
//     printf("%d",Maxarea);
// }


//////////////////////////////////


// struct Student
// {
//     char name[50];
//     int RollN;
//     int age;

// };


// struct Student s1;
// s1.age =15;
// strcpy(s1.name)

// printf("%d",s1.age);

// printf("%d",s1.name);
// printf("%d",s1.RollN);


// }

struct Addressss
{
    int pinCode;

}

struct Student
{
    char name[50];
    int RollN;
    int age;

};


struct Student s1[3];
// s1.age =15;
// strcpy(s1.name)

// printf("%d",s1.age);

// printf("%d",s1.name);
// printf("%d",s1.RollN);


// struct Addressss s2;

// s2.pincode =480886;

for (int i=0;i<3;i++){
    printf("Enter your name %d",i);
    scanf("%s",s1[i].name);

}
for (int i=0;i<3;i++){
    printf ("%s\n",s1[i].name);
}
}