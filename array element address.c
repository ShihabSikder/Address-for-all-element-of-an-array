#include<stdio.h>

int main(){
 int ary[3][3];
 int x,y;

  for(x=0;x<3;x++){
     for(y=0;y<3;y++){
        printf("Enter the Element [%d][%d] = ",x+1,y+1);
        scanf("%d",&ary[x][y]);
        printf("\n");
     }
    }
 printf("\n Showing the inputed matrix \n");

  for(x=0;x<3;x++){
        printf("\n");
     for(y=0;y<3;y++){
       printf("\t %d \t",ary[x][y]);
     }
    }

   printf("\n Now Showing the inputed matrix address for each element \n");

  for(x=0;x<3;x++){
        printf("\n");
     for(y=0;y<3;y++){
       printf("\t %x \t",&ary[x][y]);
     }
    }
}
