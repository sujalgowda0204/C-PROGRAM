#include<stdio.h>
int main (){
int a1[][4] ={{2,3,4,56},
           {23,34,32,1}};
int a2[][4]={{1,23,46,45},
            {54,78,69,4}};
int a3[100][100] ;
printf("sum of two 2d array is:\n");
int i,j;
for(i=0;i<2;i++){
    for(j=0;j<4;j++){
        a3[i][j] = a1[i][j] +a2[i][j] ;
    }
}
for(i=0;i<2;i++){
    for(j=0;j<4;j++){
        printf("%d\t",a3[i][j]);
    }
    printf("\n");
    }
    return 0;
}
