#include<stdio.h>


int main(){
    int n;
    printf("enter the no of processors:");
    scanf("%d",&n);
    int a[n],i,wait=0,tat=0,await,atat;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    printf("Index  Burst  Waiting  TAT\n");
    for(i=0;i<n;i++){
    wait =tat;
    tat +=a[i];
    printf("%d      %d	  %d	%d\n",i,a[i],wait,tat);
    }
    await=wait/n;
    atat=tat/n;
    printf("average waiting time is:%d\n",await);
    printf("average turn arround time is:%d\n",atat);
    return 0;
    
    }
    
    
        
