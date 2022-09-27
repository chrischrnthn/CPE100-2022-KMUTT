//ID 65070503410
//Name : Charunthon Limseelo
//stat (Mean,Mode,SD)

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,arr[100]={0},n,temp=-99999;
    int sum=0;
    float mean;
    int mode[3]={9999,9999,9999},count=1,ite=0;
    int sd;
    float odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    mean=(float)(sum)/(float)(n);
    printf("%.2f\n",mean);

    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }
            if(count>temp)
            {
                temp=count;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }

        }
        if(count==temp)
        {
            mode[ite]=arr[i];
            ite=ite+1;
        }
    }

    for(i=0;i<2;i++)
    {
        if(mode[0]==9999||mode[2]!=9999)
        {
            printf("NONE");
            break;
        }
        if(mode[i]!=9999)
        {
            printf("%d ",mode[i]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        odd=odd+(((float)(arr[i])-(float)(mean))*((float)(arr[i])-(float)(mean)));
    }
    odd=odd/(float)(n);
    printf("%.2f",sqrt(odd));
}
