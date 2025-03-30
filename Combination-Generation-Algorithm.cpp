#include<stdio.h>
int i;

//Genarate Nautral Number
void GenarateNautralNumber(int n, int *arr)
{
	for (i=0;i<n;i++)
	{
		arr[i]=i+1;
	}
}

//Generate First Result
void GenarateFirstResult(int k,int *arr,int *result)
{
	for (i=0;i<k;i++)
	{
		result[i]=arr[i];
		printf("%d",result[i]);					
	}
	printf("\n");
}

//Result
void Result(int k, int *result,int n)
{
	int position;
	while (position>=0)
	{
		position=k-1;
		while (result[position]!=n-k+position+1)
		{
			result[position]++;
				for (i=0;i<k;i++)
			{
				printf("%d",result[i]);			
			}
			printf("\n");
		}
		while(result[position]==n-k+position+1)
		{
			position--;
		}
		if (position<0)
		{
			break;
		}
		result[position]++;
		for (i=position+1;i<k;i++)
		{
			result[i]=result[i-1]+1;
		}
		
		for (i=0;i<k;i++)
		{
			printf("%d",result[i]);			
		}
		printf("\n");
	}
}

int main()
{
	int n;
	int k;
	
	printf("Nhap so phan tu co trong day:");
	scanf("%d",&n);	
	int arr[n];
	
	printf("Nhap vao so phan tu muon liet ke o trong to hop: ");
	scanf("%d",&k);
	int result[k];
	
	GenarateNautralNumber(n , arr);
	GenarateFirstResult(k,arr,result);
	Result(k,result,n);
}
