//ID 65070503410 
//Charunthon Limseelo
/*3.show an n-sequences of prime num from 2 to an input int. Display 10 nums per row.*/

#include <stdio.h>
void main(){
   int i, num, n, count;
   int flag=0;
   printf("Enter the range: \n");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1){
      if(flag%10==0){
      printf("\n");
   }
      printf("%d ",num);
      flag++;
   }
   }
}

/*not yet adjust in 10 nums per row*/