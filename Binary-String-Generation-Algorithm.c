//GenerateBinary

int i;
void input(int *arr,int *n)
{
	for (i=0 ; i<*n ; i++)
	{
		arr[i]=0;
	}
}

void display(int *arr, int n)
{
	for (i=0; i<n;i++)
	{
		printf("%d",arr[i]);
	}
}


void GenerateBinary(int n,int *arr)
{
	
		int position;
		int number=1;
		while (position>=0)
		{	
			position=n-1;
			printf("Day nhi phan so %d la: ",number);
			display(arr,n);
			printf("\n");
		
			while (arr[position]==1)
			{
				position--;
			}
			arr[position]=1;
			for (i=position+1;i<n;i++)
			{
				arr[i]=0;
			}
			number++;
		}
}

int main()
{
	int n;
	printf("Nhap vao do dai chuoi muon sinh: ");
	scanf("%d",&n);
	int arr[n];
	input(&arr,&n);
	GenerateBinary(n,&arr);
}
