#include<stdio.h>
void main()
{
unsigned int a=0x55;
unsigned int x,mask,y; 
char ch;
char ch1;
char ch2;
printf("\n *Menu*");
printf("\n1. for one's complement.");
printf("\n2. Masking operation.");
printf("\n3. Shifting operation");
printf("\n Enter your choice: ");
scanf("%c",&ch);
switch(ch)
   {
     case '1': 
       printf("%x\n",~a);
       break;
     case '2':
      {
         printf("\n1.OR");
         printf("\n2.AND");
         printf("\n3.XOR");
         printf("\n Select one of them:");
         scanf(" %c",&ch1);
           switch(ch1)
            {
              case '1':
                printf("%d x|mask\n",x|mask);
                break;
              case'2':
                printf("%d (x&mask)? 1:0",(x&mask)? 1:0);
       	        break;
  	      case '3':
                printf("%d x^mask",x^mask);
	        break;
             default:
                printf("\n INVALID CHOICE!!(case2)");
           }
      }

        break;
     case '3':
      {
 	 printf("\n1. Right shift \n2. Left shift \nSelect one of them: ");
	 scanf(" %c",&ch2);        
         switch(ch2)
           {
              case'1':
                 scanf("%d",&x);
                y=x>>3;
                 printf(" x>>3= %d",y);
	        break;
              case'2':
                 scanf("%d",&x);
                  y=x<<5;
	         printf("x<<5 %d", y);
	         break;
              default:
                 printf("\n INVALID CHOICE!!!(case3)");
                 break;
          }
        break;
     }
    default:
     printf("\nINVALID CHOCE!!! (switch)");
     break;
   }
}

