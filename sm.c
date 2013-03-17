////////////////////////////////////////////////
//
//            [ShitMacker]
//     Simply Fuzz Data Maker
//     Write By NWMonster
//
///////////////////////////////////////////////
#include <stdio.h>

int main(int argc,char **argv)
{
	char *buff,*x;
	int i,Len,Offset,base = 'AAAA';

	if(argc < 3)
		{
		printf("ShitMaker\n"
				"Usage:\n\t sm [-c|-v|-s] <vaule>\n");
		return -1;
		}
	
	if((strcmp(argv[1],"-s") == 0))					//calc offset
		{
		Offset = ( (unsigned int)argv[2][3] - 'A' );
		Offset += ( (unsigned int)argv[2][2] - 'A' ) * 26;
		Offset += ( (unsigned int)argv[2][1] - 'A' ) * 26 * 26;
		Offset += ( (unsigned int)argv[2][0] - 'A' ) * 26 * 26 * 26;
		Offset += 1;
		printf("%s\tOffset = dec:%u   hex:%x\tEIP ==> 0x%.2x%.2x%.2x%.2x\n"
			,argv[2],Offset,Offset,(unsigned int)argv[2][3],(unsigned int)argv[2][2]
				,(unsigned int)argv[2][1],(unsigned int)argv[2][0]);
		return 0;
		}
	
	Len=atoi(argv[2]);
	buff=(char *)malloc(Len+1);
	buff[Len]=0;
		
	for(i=0;i<Len;i++)
		{
		switch(i%4)
			{
			case 0: buff[i] = 'A'+i/(26*26*26)%26; break;
			case 1: buff[i] = 'A'+i/(26*26)%26; break;
			case 2: buff[i] = 'A'+i/26%26; break;
			case 3: buff[i] = 'A'+i%26; break;
			}
		}
	
	if(strcmp(argv[1],"-c") == 0)						//show sled
		{
		printf("%s\n",buff);
		}
		
	if(strcmp(argv[1],"-v") == 0)						//show all info for sled
		{
		for(i=1; i< Len+1; i++)
			{
			printf("%c",buff[i-1]);
			if(i%4 == 0)
				{
				printf("\t%d\t0x%.2x",i,i);
				printf("\tEIP ==> 0x%.2x%.2x%.2x%.2x\n",buff[i-1],buff[i-2],buff[i-3],buff[i-4]);
				}
			}			
		}
	free(buff);
	
	return 0;
}
