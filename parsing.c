#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1024
/*struct ifconfig_data1
{
	char interface[20];
	char HW_addresss[20];
	char IPV4_addresss[20];
	char mtu[20];
	char link_status[20];
};
struct ifconfig_data2
{
        char interface[20];
        char HW_addresss[20];
        char IPV4_addresss[20];
        char mtu[20];
        char link_status[20];
};*/


//void search_get(char *data)
void main()
{
	FILE *fp;
	char *line,*value;
	char *buffer1;
	line=(char *)malloc(1024*sizeof(char));
	 buffer1=(char *)malloc(1024 *sizeof(char));
	value=(char *)malloc(1024 *sizeof(char));
	memset(buffer1,0,sizeof(buffer1));
	memset(line,0,sizeof(line));
	strcpy(buffer1,"ifconfig | head -100 > ifconfigdata.txt");
        system(buffer1);
   //     memset(buffer1,0,sizeof(buffer1));
      fp=fopen("ifconfig_data.txt","r");
      
      while(fgets(line,MAX,fp)!=NULL)
      {
	     
	     if(buffer1=strstr(line,"mtu"))
	      
		     printf("%s ",buffer1);
	      	     //printf("%s\n",value);
//	break;
	     
      else if(buffer1=strstr(line,"inet")){

	
	value = strtok(buffer1, " ");
	while (value != NULL) {
        printf("%s ", value);
        value = strtok(NULL, " ");

		      
		printf("%s\n",value);
		break;
		
	}
               
	}	     
    		      
 else if(buffer1=strstr(line,"ether")){


        value = strtok(buffer1, " ");
        while (value != NULL) {
        printf("%s ", value);
	value=NULL;
        value = strtok(NULL, " ");


                printf("%s\n",value);
                break;

      }	
}
}
}
