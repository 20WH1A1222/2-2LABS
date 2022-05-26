#include<stdio.h>


int main(){
int n;
printf("enter the size of processoers:");
scanf("%d",&n);
int i,at[n],bt[n],pt[n],j,temp,pos,tat=0,ct=0,wt=0,atat=0,awt=0;
printf("enter the arrival time:");
for(i=0;i<n;i++){
    scanf("%d",&at[i]);
    }
printf("enter the priority:");
for(i=0;i<n;i++){
    scanf("%d",&pt[i]);
    }
printf("enter the burst time:");
for(i=0;i<n;i++){
    scanf("%d",&bt[i]);
    }
    for(i=0;i<n-1;i++){
        pos=i;
		for(j=i+1;j<n;j++){
			if(pt[j]<pt[pos]){
				pos = j;
			}
		}
		temp = pt[i];
		pt[i]=pt[pos];
		pt[pos]=temp;
		
		temp = bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
		
		temp=at[i];
		at[i]=at[pos];
		at[pos]=temp;
		
	}
	
    printf("Index   Arrival    Priority   Burst    completion    Wt    tat\n");
    for(i=0;i<n;i++){
    ct=ct+bt[i];
    tat=ct-at[i];
    wt=tat-bt[i];
    atat=tat/n;
    awt=wt/n;
    printf("%d       %d         %d         %d        %d        %d          %d\n",i,at[i],pt[i],bt[i],ct,tat,wt);
    }
    printf("the completion time is:%d\n",ct);
    printf("the atat time is:%d\n",atat);
    printf("the awt time is:%d\n",awt);
    return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    

