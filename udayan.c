#include <stdio.h>
int main_var;
int add_var;
int sub_var;
int mul_var;
int div_var;
int main_loop();
int logic_part();
int i;
int main()
{
   printf("enter your number here\n:");
   scanf("%d",& main_var);
   main_loop();
   
   
}
int main_loop(){
   printf("\ndo you want to (choose-1,2,3,4)\n1>add \n2>subtract \n3>divide \n4>multiply \n5>exit \n:");
   scanf("%d",&i);
   logic_part();

}
int logic_part(){
   if(i==1){
      printf("enter number \n:");
      scanf("%d",&add_var);
      main_var= main_var+add_var;
      printf("\nyour number is(%d) \n",main_var);
      main_loop();
   }
   else if(i==2){
      printf("enter your number here \n :");
      scanf("%d", &sub_var);
      main_var=main_var-sub_var;
      printf("\nyour number is(%d) \n", main_var);
      main_loop();
   }
   else if (i==3){
      printf("enter your number here \n :");
      scanf("%d",&div_var);
      main_var=main_var/div_var;
      printf("\nyour number is(%d) \n",main_var);
      main_loop();
   }
   else if (i==4){
      printf("enter your number here \n :");
      scanf("%d",&mul_var);
      main_var= main_var*mul_var;
      printf("\nyour number is (%d) \n",main_var);
      main_loop();
   } 
   else if(i==5){
      printf("proram is exited \n");
      printf("your output is %d\n",main_var);
   }   
   else{
      printf("wrong option pls select from (1,2,3,4,5) \n");
      main_loop();
   }


}