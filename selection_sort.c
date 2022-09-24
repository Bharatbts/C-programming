#include<stdio.h>
int main(){
    int i,j,count,temp,number[25];
    printf("\n Output:\n");
    printf("\n Selction Sort \n\n");
    printf("Enetr the size of array \n\t");
    scanf("%d",&count);
    printf("Enter %d element: \n",count);
    for(i=0;i<count;i++)
    { printf("\t");
      scanf("%d",&number[i]);
    }
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(number[i]>number[j]){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }

    printf("Sorted element by Selection sort algorithm:\n");
    for(i=0;i<count;i++)
    {
        printf("\t%d",number[i]);
    }
    return 0;
}