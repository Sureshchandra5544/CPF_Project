#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	FILE *fp;
	char * key, *value=NULL;
	key = (char *)malloc(1024 * sizeof(char));
	value = (char *)malloc(1024 * sizeof(char));
	char ch[1000];
	//ch = (char *)malloc(1024 * sizeof(char));
	int flag =0;
	int count=0,i=0,j=0;
        fp = fopen("ifconfig.txt","r");
	if(fp== NULL)
	{
        printf("File is not available \n");
       	}
	else
       	{
		while((ch[i] = fgetc(fp)) != EOF)
		{
		       /*	if(flag == 1 || flag == 2 || flag == 3 || flag == 4)
			{
				printf("check1");
			       	if (ch != " ")
					printf("check2");
				       	value[j++] = ch;
			}*/
			for (int i=0;i<=length;i++)
				  {
         			if (isalnum(test_buffer[i] ))
                 		 printf("%c\n", test_buffer[i]);
         			 else
                		  printf("it is space \n");
  				}

		//	if (isalnum(ch[i]))
		//	{
				key[i] = ch[i];
				printf("%c",key[i]);
				i++;
			}
			else if(ch[i] == "")
			{
				printf("check4");
				key[i++] = "\0";
				if(strcmp(key,"enpos3"))
				{
					flag = 1;
					value = NULL;
					key = NULL;
				}
				else if(strcmp(key,"ether"))
				{
					flag = 2;
					value = NULL;
					key = NULL;
				}
				else if(strcmp(key,"inet:"))
						{
						flag = 3;
						value = NULL;
                            			key = NULL;
						}
						else if (strcmp(key,"mtu"))
							{
							flag =4;
                              				value = NULL;
                               		 		key = NULL;
							}
			}
		}
	}
}
