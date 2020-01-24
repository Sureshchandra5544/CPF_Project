#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct command_ifconfig
{
	char *interface_name;
	char *link_encap;
	char *HW_add;
	char *IPV4_add;
}s1;

int main()
{
	FILE *fp;
	char *buffer;
	buffer=(char *)malloc(1024*sizeof(char));	
	memset(buffer,0,sizeof(char));
	fp=fopen("ifconfig.txt","r+");
        if(fp == NULL)
       	{
                printf("Nothing is there in the file");
        }
	while(fgets(buffer,1024,fp)!=NULL)
	{
//	fgets(buffer,sizeof(buffer),fp);
//	fwrite(buffer,sizeof(char),strlen(buffer),fp);
	fscanf(fp,"[^\n]",buffer);
        


	printf("%s",buffer);
	}
	struct command_ifconfig s1;
	s1.interface_name = "etho";
	s1.link_encap = "ethernet";
	s1.HW_add = "00:0c:29:9b:49:bc";
	s1.IPV4_add = "192.168.134.128";
//	scanf("%s%s%s%s",&s1.interface_name,&s1.link_encap,&s1.HW_add,&s1.IPV4_add);
	printf("Interface:%s\n",s1.interface_name);
	printf("Link Encap:%s\n",s1.link_encap);
	printf("HW_add:%s\n",s1.HW_add);
	printf("IPV_4 add:%s\n",s1.IPV4_add);
//	printf("%s\n%s\n%s\n%s\n",s1.interface_name,s1.link_encap,s1.HW_add,s1.IPV4_add);
	fclose(fp);
	return 0;
}
