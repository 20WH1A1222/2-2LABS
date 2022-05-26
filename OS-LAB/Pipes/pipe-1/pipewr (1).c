#include<stdio.h>
#include<unistd.h>

int main(){
int pipefds[2],r_status;
char w_m[5][10]={"HI","BVRIT"};
char r_m[10];
r_status=pipe(pipefds);

if(r_status==-1){
printf("unable to create pipe");
return 1;
}
printf("%s",w_m[0]);
write(pipefds[1],w_m[0],sizeof(w_m[0]));
read(pipefds[0],r_m,sizeof(r_m));
printf("%s",r_m);
printf("%s",w_m[1]);
write(pipefds[1],w_m[1],sizeof(w_m[0]));
read(pipefds[0],r_m,sizeof(r_m));
printf("%s",r_m);
return 0;
}

