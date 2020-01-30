#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h> 
extern int errno; 
int main() 
{      
    char *buffer;
    int fd = open("ifconfig.txt", O_RDONLY);  
    if (fd ==-1) 
    { 
        printf("File doesnot exist");                  
    }
    else
    {
	    read(fd,buffer,sizeof (buffer));
	    printf("%s\n",buffer);
	  //  printf("file succesflly opened");
    } 
    return 0; 
} 
