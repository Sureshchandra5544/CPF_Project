#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct command_ifconfig
{
        char interface[20];
        char HW_Address[20];
        char IPV4_address[20];
        int MTU;
	char Linkstatus[20];
};
struct command_ifconfig *s1;
int main()
{
    FILE * fp;
    char *buffer = NULL, *token = NULL;
//  bool flag = false;
    size_t len = 0,count = 0;
    ssize_t read;
    char *command[]={"inet","mtu","ether","flags=4163<"};
    s1 = (struct command_ifconfig*)malloc(100*sizeof(struct command_ifconfig));

    fp = fopen("ifconfig.txt", "r");
    if (fp == NULL)
    {
       printf("Nothing is there in the file");
    }
    while ((read = getline(&buffer, &len, fp)) != -1 )
    {
	if(count == 0)
	{
		token = strtok(buffer," ");
        	printf("%s\n",token);
		count ++;
	}
/*	else if(count > 0)
		{
	//	token = strtok(buffer," ");
		while(token != NULL) 
			{
    			printf( " %s", token );
			token = strtok(NULL,buffer);
			}
		count++;
		}*/
    }
       fclose(fp);
       return 0;
}

