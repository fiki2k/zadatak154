// Program treba sortirat n brojeva u silazecem redu pomocu pointera i dinamicke alokacije.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
        int n,*p,i,j,temp;
        printf("Koliko brojeva zelis sortirat: ");
        scanf("%d",&n);

        p=(int *) malloc(sizeof(int));

        if(p==NULL)
        {
                printf("\nAlokacija memorije neuspjesna.\n");
                exit(0);
        }
        for(i=0;i<n;i++)
        {
                printf("\nUnesi broj %d : ",i+1);
                scanf("%d",p+i);
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(*(p+i)>*(p+j))
                        {
                                temp=*(p+i);
                                *(p+i)=*(p+j);
                                *(p+j)=temp;
                        }
                }
        }
        printf("\nSortirani brojevi su :\n");
        for(i=0;i<n;i++)
    {
                printf(" %d ",*(p+i));
    }

        return 0;
}
