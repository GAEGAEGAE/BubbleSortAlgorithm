#include <stdio.h>
#include <stdlib.h>
 
int main() {
   int input_num;
   int num[5]={3, 5, 1, 1, 2};
   int i, j, temp=0;

   printf("정렬하실 배열의 크기를 입력 : ");
   scanf("%d", &input_num);

   int *numPtr = (int *)malloc(sizeof(int)*input_num);

   for(int i=0; i<input_num; i++){
      printf("[%d] : ", i+1);
      scanf("%d", &numPtr[i]);
   }

   printf("\n\n[정렬 이전]\n");

   for (int i = 0; i < input_num; i++)    // 입력받은 크기만큼 반복
    {
        printf("%d  ", numPtr[i]);    // 인덱스로 접근하여 값 출력
    }

   printf("\n\n");
   printf("[정렬 완료]\n");

   // Bubble Sort Algorithm
   for(i=0; i<input_num-1; i++) {  
      for(j=0; j<input_num-1; j++) {  
         if(numPtr[j]>numPtr[j+1]) {  
            temp=numPtr[j];  
            numPtr[j]=numPtr[j+1];  
            numPtr[j+1]=temp; 
         }  
      }  
   }

   for (int i = 0; i < input_num; i++)    // 입력받은 크기만큼 반복
    {
        printf("%d  ", numPtr[i]);    // 인덱스로 접근하여 값 출력
    }

   printf("\n");

    free(numPtr);    // 동적으로 할당한 메모리 해제

   return 0;
}
