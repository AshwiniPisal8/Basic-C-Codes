
// design menu card using ladder if else loop 
// Giving order number take the quantity as input and calculate the bill as per the price of items
#include<stdio.h>
int main()
{
	int sel;
	int qty,bill;

	//Diplay menu and select user menu
	printf(" MENU:\n 1. Coffee\n 2. Tea\n 3. Cold Coffee\n 4. Exit");
	printf(" MENU:\n 1. Tea\t\t\t15/-Rs.\n 2. Coffee\t\t20/-Rs.\n 3. Cold Coffee\t\t30/-Rs.\n 4. Exit");
	printf("\n\n Select Menu Using Number=");
	scanf("%d",&sel);

	//Diplay order and price
	if(sel==1)
	{
		printf("\n Enjoy your Coffee and paid 20/-Rs.");
	}
	else if(sel==2)
	{
		printf("\n Enjoy your Tee and paid 15/-Rs.");
	}
	else if(sel==3)
	{
		printf("\n Enjoy your Cold Coffee and paid 30/-Rs.");
	}
	else if(sel==4)

	//Add quantity and diplay orderand order billing
	if(sel==1 || sel==2 || sel==3 || sel==4)
	{
		printf("\n Thank you Visit Again");
		printf("\n Enter Number Of Quantity=");
		scanf("%d",&qty);
		if(sel==1)
		{
			bill= qty*15;
			printf("\n Enjoy your Tea and paid %d/-Rs.",bill);
		}
		else if(sel==2)
		{
			bill= qty*20;
			printf("\n Enjoy your Coffee and paid %d/-Rs.",bill);
		}
		else if(sel==3)
		{
			bill= qty*30;
			printf("\n Enjoy your Cold Coffee and paid %d/-Rs.",bill);
		}
		else if(sel==4)
		{
			printf("\n Thank you Visit Again");
		}
	}
	else
	{
		printf("\n Invalid Selection");
	}
	return 0;
}