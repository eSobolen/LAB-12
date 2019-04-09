#include<stdio.h>
#include<stdlib.h>
int random(int R){ return rand()%R;}

int main(){
    int A[80],N,i,hash;
    printf("enter N: ");
    scanf("%d", &N);
    printf("number     hash ");
    for(i=0;i<N;i++){
       A[i]=random(100)-49; 
        //printf("%4.d",A[i] );
       
      if(A[i]>0){  
        
     printf("\n");
    
      
     printf("%5d",A[i]);
     hash=A[i]*3+1;   
     
     printf("%8d",hash);
           }  }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("       number          hash ");
       for(i=0;i<N;i++){
      // A[i]=random(100)-51; 
         if(A[i]<0){  
        
     printf("\n");
    
      
     printf("%10d",A[i]);
     hash=A[i]*3+1;   
     
     printf("%18d",hash);
           }  }
}
