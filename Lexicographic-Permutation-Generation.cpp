#include<stdio.h>
int i;

void GenerateNautralNumber(int n, int *arr)
{
	for (i=0; i<n; i++)
	{
		arr[i]=i+1;
	}
}

void Swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void Display(int n,int number,int* arr)
{
	printf("Hoan vi thu %d la:",number);
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void GeneratePermutation(int position,int number, int n,int *arr)
{
		while (position>=0)
	{
		position=n-1;
		while (arr[position]<arr[position-1])
		{
			position--;
		}
		if (position==0)
		{
			break;
		}
		for (i=n-1;i>=position-1;i--)
		{
			if (arr[position-1]<arr[i])
			{
				Swap(&arr[position-1],&arr[i]);
				break;
			}
		}
		int l=position;
		int r=n-1;
		while (r>l)
		{
			Swap(&arr[l],&arr[r]);
			l++;
			r--;
		}
		Display(n,number+1,arr);
		number++;
	}
}

int main()
{
	int n;
	printf("Nhap vao so phan tu cua day so: ");
	scanf("%d",&n);
	int arr[n];	
	int position=n-1;
	int number=1;
	
	GenerateNautralNumber(n,arr);
	Display(n,number,arr);
	GeneratePermutation(position,number,n,arr);
}
