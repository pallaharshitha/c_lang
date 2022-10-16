#include<stdio.h>
int main()
{
	int i,j,a[2][2],b[2][2],c[2][2];
	char ch;
	printf("\n enter the elements of 1st matrix:");
	for (i=0;i<2;++i)
	{
	for( j=0;j<2;++j)
	scanf("%d",&a[i][j]);
	}
	printf("\n enter the elements of 2nd matrix :");
	for(i=0;i<2;++i)
	{
	for( j=0;j<2;++j)
	scanf("%d",&b[i][j]);
	}
	printf("\n enter the choice \n'+' addition \n'-' substraction\n'*'multiply ");
	scanf(" %c",&ch);
	switch(ch)
	{
                case'+':
                printf("\n addition is:\n"); 
		//scanf("%d",&c);
                for ( i=0;i<2;++i)
		{
        	for (j=0;j<2;++j)
                	{
               			c[i][j]=a[i][j]+b[i][j];
		printf("%d",c[i][j]);
		}

             		printf("\n");
              }
           break;
		case'-':
		printf("\n substraction is:\n");
		//scanf("%d",&c);
                 for(i=0;i<2;++i)
{
                for(j=0;j<2;++j)
{
                               c[i][j]=a[i][j]-b[i][j];
                     printf("%d",c[i][j]);
}
                   printf("\n");
                  }
                  break;
		case'*':
		printf("\nmultiply:\n");
		//scanf("%d",&c);
                for(i=0;i<2;++i)
             {
               for(j=0;j<2;++j)
             {
                 c[i][j]=0;
               for(int k=0;k<2;++k)
               {
               c[i][j]+=a[i][k]*b[k][j];
}
}
}
                for(i=0;i<2;++i)
    {
                for(j=0;j<2;++j)
             {
               printf("%d",c[i][j]);
            }
              printf("\n");
         }
                break;
		default : 
		printf("\n invalid");
		break;
	}

}

