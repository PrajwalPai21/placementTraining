#include<stdio.h>
/*
S-1 : Identify the number of rows (Outer for Loop)
S-2 : Identify the number of columns in every row (Inner for Loop)
S-3 : Identify the thing trying to print
*/
void squarePattern(){
    int n = 5;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            printf("*");
        printf("\n");
    }
}

void increasingTriangle(){
    int n = 5;
    for(int row = 1;row <= n;row++){ //Total number of rows
        //For every row run the column
        for(int col= 1;col<=row;col++)
            printf("* ");
    //After printing one row go to the next row
    printf("\n");
    }
}

void decreasingTriangle(){
    /*
    *****
    ****
    ***
    **
    *   */
    int n = 5;
    for(int row = 1;row <=n;row++){

    }

}

void increasingTriangleNumber(){
    int n = 5;

    for(int row = 1;row <= n;row++){
        for(int col = 1;col <= row;col++){
            printf("%d",col);
        }
        printf("\n");
    }
}

void triangleNumber(){
    int n = 5;

    for(int row = 1;row <= n; row++){
        for(int spaces = 0;spaces <= n-row; spaces++)
            printf(" ");

        for(int col = row;col >= 1;col--)
            printf("%d",col);
        
        for(int col = 2;col <= row;col++)
            printf("%d",col);
    printf("\n");
    }
/*
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5
*/
}

int main(){
    squarePattern();
    printf("\n-----------------------------------------------------------------\n");
    increasingTriangle();
    printf("\n-----------------------------------------------------------------\n");
    increasingTriangleNumber();
    printf("\n-----------------------------------------------------------------\n");
    triangleNumber();

}