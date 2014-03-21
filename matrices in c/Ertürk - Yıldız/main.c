#include <stdio.h>
#include <stdlib.h>

main(){
       
        printf("\a\t********************************************\n");
        printf("\tCeyhun ERTURK      130304032\n");
        printf("\tMustafa Yildiz     120304040\n");
        printf("\t********************************************\n\n");
        printf("Contract = For sum : integer ---> integer ,  For product integer ---> integer ,  For meet integer --->Boolean(Written in String)  ,  For join integer --->Boolean(Written in String) ,  For boolean product integer --->Boolean(Written in String) \n\n\n");
        printf("\nPurpose = enter numbers of matrices , program will calculate sum and product of numbers\n");
        printf("\nPurpose = enter numbers between 0 or 1 of matrices , program will calculate join , meet and boolean product of numbers\n\n");
       
       
       
       int p,h;
       puts("\n\nEnter line of numbers :");
     scanf("%d",&p);
     puts("\aEnter column of numbers :");
     scanf("%d",&h);
     int i,j,A[p][h],B[p][h],C[p][h];
     
     puts("Enter matrices numbers of A :");
     for(i=0;i<p;i++){
        for(j=0;j<h;j++){
           printf("A(%d,%d)=",i+1,j+1);
	     scanf("%d",&A[i][j]);
        }
   }
   printf("\n");
   for(i=0;i<p;i++){
      for(j=0;j<h;j++){
   printf("A matrices :");
   printf("%d\t",A[i][j] );
    printf("\n");
}
}
   

   puts("Enter matrices numbers of B :");
   for(i=0;i<p;i++){
      for(j=0;j<h;j++){
         printf("B(%d,%d)=",i+1,j+1);
 	    scanf("%d",&B[i][j]);
      }
   }
 printf("\n");
 
for(i=0;i<p;i++){
      for(j=0;j<h;j++){
printf("B matrices :");
   printf("%d\t",B[i][j] );
    printf("\n");
}
}

    //*************************************************************************************************
   puts("A+B matrices elements :");
   for(i=0;i<p;i++){
      for(j=0;j<h;j++){
         C[i][j] = A[i][j] + B[i][j];
         printf("C(%d,%d)=%d\n",i+1,j+1,C[i][j]);
      }
   }
    printf("\n");
   //*************************************************************************************************
    puts("A*B matrices elements:");
   for(i=0;i<p;i++){
      for(j=0;j<h;j++){
         C[i][j] = A[i][j] * B[i][j];
         printf("C(%d,%d)=%d\n",i+1,j+1,C[i][j]);
      }
   }
    printf("\n");
    for(i=0;i<p;i++){
      for(j=0;j<h;j++){
   printf("C matrices :");
   printf("%d\t",C[i][j] );
    printf("\n");
}
}
   //*************************************************************************************************
   
   int X[p][h],Y[p][h];
   char *Z[p][h];
     puts("Enter matrices numbers of X between 0 and 1 :");
     for(i=0;i<p;i++){
        for(j=0;j<h;j++){
           printf("X(%d,%d)=",i+1,j+1);
	     scanf("%d",&X[i][j]);
        }
   }
   
   
    printf("X matrices :\n");
    for(i=0;i<p;i++){
      for(j=0;j<h;j++){
   printf("%d\t",X[i][j] );
    printf("\n");
     }
     }
     
     puts("Enter matrices numbers of Y between 0 and 1 :");
   for(i=0;i<p;i++){
      for(j=0;j<h;j++){
         printf("Y(%d,%d)=",i+1,j+1);
 	    scanf("%d",&Y[i][j]);
      }
   }
     
     printf("\n");

   printf("Y matrices :\n");
   for(i=0;i<p;i++){
      for(j=0;j<h;j++){
   printf("%d\t",Y[i][j] );
    printf("\n");
}
}
     
     //*************************************************************************************************
     
     puts("X and Y matrices meet process results :\n");
   for(i=0;i<p;i++){
      for(j=0;j<h;j++){
                       if(X[i][j]==Y[i][j]){ 
                                             if(X[i][j]==1)
                                              Z[i][j]="true";
                                              else
                                               Z[i][j]="false";
                                             }else{
                                                    Z[i][j]="false";
                                                    }    
      }
   }
   for(i=0;i<p;i++){
      for(j=0;j<h;j++){
   printf("%s\t",Z[i][j] );
    printf("\n");
}
}     

   
    //*************************************************************************************************
    
   puts("X and Y matrices join process results :\n");
      for(i=0;i<p;i++){
      for(j=0;j<h;j++){
                       if(X[i][j]==Y[i][j]){ 
                                             if(X[i][j]==1){
                                              Z[i][j]="true";
                                              }else{
                                                    Z[i][j]="false";
                                                    }
                                             }else{
                                                    Z[i][j]="true";
        }
      }
   }
       for(i=0;i<p;i++){
      for(j=0;j<h;j++){
     printf("%s\t",Z[i][j] );
    printf("\n");
}
}

    //*************************************************************************************************

puts("X and Y matrices boolean product results :\n");

int r,t;

    for(i=0;i<p;i++){
      for(j=0;j<h;j++){
                       if(X[i][j]==Y[i][j]){ 
                                             if(X[i][j]==1)
                                              Z[i][j]="true";
                                              else
                                               Z[i][j]="false";
                                             }else{
                                                    Z[i][j]="false";
                                                    }                                                                                                         
         for(r=0;i<p;i++){
      for(t=0;j<h;j++){
                       if(X[i][j+1]==Y[i+1][j]){ 
                                             if(X[i][j]==1){
                                              Z[i][j]="true";
                                              }else{
                                                    Z[i][j]="false";
                                                    }
                                             }else{
                                                    Z[i][j]="true";
        }
      }
   }
}
}

 for(i=0;i<p;i++){
      for(j=0;j<h;j++){
     printf("%s\t",Z[i][j] );
    printf("\n");
}
}

      
system("PAUSE");
 }
//****Coding by Ceyhun Ertürk****
