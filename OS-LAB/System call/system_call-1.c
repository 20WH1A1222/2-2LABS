#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
    int fd;
    char buf[12]="hello world";
   
    fd=open("file.txt",O_RDWR | O_CREAT,777);
    write(fd,buf,strlen(buf));
    close(fd);
    return 0;
}    
