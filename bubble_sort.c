#include<stdio.h>
int main(){
    int count,temp,i,j,number[30];
    printf("\n Output:\n");
    printf("\n Bubble Sort \n\n");
    printf("Enter the Size of array \n\t");
    scanf("%d",&count);
    printf("Enter %d elments:\n",count);
    for(i=0;i<count;i++)
    {
        printf("\t");
        scanf("%d",&number[i]);
    }
    for(i=count-2;i>0;i--)
    { for(j=0;j<=i;j++)
    {
        if(number[j]>number[j+1])
        { temp=number[j];
            number[j]=number[j+1];
            number[j+1]=temp;
        
        }
    }
    } printf("Sorted element by Bubble sort algorithm:\n");
    for(i=0;i<count;i++)
    {
        printf("%d",number[i]);
    }
    return 0;
}