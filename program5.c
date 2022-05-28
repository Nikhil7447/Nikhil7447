//write a program to perform addition of 2 numbers
#include<stdio.h>
  int Addition(int iValue1,int iValue2)
{
	int iAns = 0;
	iAns = iValue1 + iValue2;
	return iAns;


}	
	int Subtraction(int iValue1,int iValue2)
{
	int iAns = 0;
	iAns = iValue1 - iValue2;
	return iAns;
}

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iValue3=0;
	int iValue4=0;
	
	
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter first number\n");
	scanf("%d",&iValue2);
	
	iValue3=Addition(iValue1,iValue2);

	iValue4=Subtraction(iValue1,iValue2);

	
	printf("Addition is : %d\n",iValue3);
	printf("Subtraction is : %d\n",iValue4);

return 0;
}


