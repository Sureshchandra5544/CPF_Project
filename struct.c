#include<stdio.h>
struct command_ifconfig
{
        char interface[20];
        char HW_Address[20];
        char IPV4_address[20];
        int MTU;
	char Linkstatus[20];
}s1;
int main()
{
	FILE *fp;
	char ch;
	char *word;	
	int count=0;
	fp = fopen("ifconfig.txt","r");
	if(fp== NULL)
    {
        printf("File is not available \n");
    }
	else {
        while((ch = fgetc(fp)) != EOF){
	//	printf("%c",ch);
	if(ch == 'inet')
	{
		while(word == '32'){
			count = count +1;
			printf("%c",ch);
			
		}
	}
	}
        
    }
    fclose(fp);
    return 0;
}

