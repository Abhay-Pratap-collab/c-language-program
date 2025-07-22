#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ch,x;
	do{
	system("cls");
	printf("Main Menu\n1:Insert Student Record\n2:Show Student Record\n3:Search Student Record\n4:Delete\n5:Edit Record\n6:exit\n");
	printf("Enter Your Choice ");
	fflush(stdin);
	scanf("%d",&ch);
	system("cls");
	switch(ch)
	{
		
		case 1:
			system("studentrecordwrite.exe");
			break;
		case 2:
			system("studentrecordread.exe");
			break;
			case 3:
			system("searchrecord.exe");
			break;
			case 4:
			 system("abhaydeleterecord.exe");
			break;
			case 5:
			system("editrecord.exe");	
			break;
			case 6:
			printf("thank you ");
			break;
			default:
				printf("Wrong Option ");
			}
			printf("\npress any key to continue.. \n");
			fflush(stdin);
			scanf("%c",&x);
			
	}
	while(ch!=6);
}
