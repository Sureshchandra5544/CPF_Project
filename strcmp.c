#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int len = 0,i=0,ret;
        FILE *fp;
        char *buffer,*buffer1;
        buffer=(char *)malloc(1024 *sizeof(char));
        buffer1=(char *)malloc(1024 *sizeof(char));
        strcpy(buffer1,"ifconfig | head -100 > ifconfig.txt");
        system(buffer1);
        memset(buffer1,0,sizeof(buffer));
        fp=fopen("ifconfig.txt","r");
        fread(buffer1,sizeof(char),1024,fp);
 
        //printf("%s",buffer1);
        len = strlen(buffer1);
        for (int i=0;i<=len;i++)
                  {
          if (isalnum(buffer1[i] ))
                  printf("%c",buffer1[i]);
	  else if(buffer1[i] == 32)
		  buffer1[i]="\0";
	while(buffer1[i]!=NULL)
		printf(
		
		  
		  
		  
		 /* ret=strcmp(buffer1, "mtu");
		if(ret==0)
		{
			i++;
			printf("check");
			printf("%s",buffer1);
                               {
                                       // flag = 1;
                                        buffer1 = NULL;
                                        printf("%s",buffer);
                                }*/

	  }
                 }


		  }
        fclose(fp);

		  
		  
}
