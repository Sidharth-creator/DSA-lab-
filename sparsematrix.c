#include <stdio.h>

int main() {
    int i, j, a, b, choice;
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0;
    printf("1) Transpose (A)\n");
    printf("2) Transpose (B)\n");
    printf("3) Addition\n");
    printf("4)display matrix(A)\n");
    printf("5)display matrix(b)\n");
    printf("6)compact  MATRIX(A)\n");
    printf("7)compact MATRIX(B)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("MATRIX (A)\n");
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("Enter the number of columns: ");
    scanf("%d", &b);

    int m1[a][b];

    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    count0 = 0;
    count1 = 0;
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            if (m1[i][j] == 0)
                count0++;
            else
                count1++;
        }
    }

    int check1 = 0;
    if (count0 > count1) {
        printf("The entered matrix A is a sparse matrix.\n");
        check1 = 0;
    } else {
        printf("The entered matrix A is NOT a sparse matrix.\n");
        check1 = 1;
    }
    printf("MATRIX (B)\n");
    printf("Enter the number of rows: ");
    int a2, b2;
    scanf("%d", &a2);
    printf("Enter the number of columns: ");
    scanf("%d", &b2);

    int m2[a2][b2];

    printf("Enter the elements of matrix B:\n");
    for (i = 0; i < a2; i++) {
        for (j = 0; j < b2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    count2 = 0;
    count3 = 0;
    for (i = 0; i < a2; i++) {
        for (j = 0; j < b2; j++) {
            if (m2[i][j] == 0)
                count2++;
            else
                count3++;
        }
    }

    int check2 = 0;
    if (count2 > count3) {
        printf("The entered matrix B is a sparse matrix.\n");
        check2 = 0;
    } else {
        printf("The entered matrix B is NOT a sparse matrix.\n");
        check2 = 1;
    }
    if (check1 == 0 && check2 == 0) {
        if(choice ==6){
           int e=count1+1;
           int m6[3][e];
           m6[1][1]="Row";
           m6[2][1]="Column";
           m6[3][1]="Value";
           for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++){
               if(i!=1 && i!=3 && i!=4 && j!=1){
                  if(m1[i][j]!=0){
                     m6[i][j]=m1[i][j];
                  }
                }
            }
          }

        if(choice ==4){
        printf("the MATRIX(A)\n");
        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
            printf("%d\t",m1[i][j]);
           }
           printf("\n");
        }
        }
        if(choice ==5){
        printf("the MATRIX(B)\n");
        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
            printf("%d\t", m2[i][j]);
           }
           printf("\n");
        }
        }
        if (choice == 1) {
            int m3[b][a]; 
            for (i = 0; i < a; i++) {
                for (j = 0; j < b; j++) {
                    m3[j][i] = m1[i][j];
                }
            }
            printf("Transposed matrix A:\n");
            for (i = 0; i < b; i++) {
                for (j = 0; j < a; j++) {
                    printf("%d\t", m3[i][j]);
                }
                printf("\n");
            }
        } else if (choice == 2) {
            int m4[b2][a2];
            for (i = 0; i < a2; i++) {
                for (j = 0; j < b2; j++) {
                    m4[j][i] = m2[i][j];
                }
            }
            printf("Transposed matrix B:\n");
            for (i = 0; i < b2; i++) {
                for (j = 0; j < a2; j++) {
                    printf("%d\t", m4[i][j]);
                }
                printf("\n");
            }
        } else if (choice == 3) {
            if (a == a2 && b == b2) {
                int m5[a][b];
                for (i = 0; i < a; i++) {
                    for (j = 0; j < b; j++) {
                        m5[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                printf("Sum of the two matrices:\n");
                for (i = 0; i < a; i++) {
                    for (j = 0; j < b; j++) {
                        printf("%d\t", m5[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Matrices dimensions do not match for addition.\n");
            }
        } else {
            printf("Invalid choice.\n");
        }
    } else {
        printf("At least one of the matrices is not sparse. Operation aborted.\n");
    }

    return 0;
}

   
    
