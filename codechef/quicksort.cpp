#include <stdio.h>
#define SIZE 1000000

int choosepivot(int beg,int end)
{
	return beg+1;
}

int partition(int arr[],int beg,int end)
{
	int k=beg+4;
	int pivot=arr[k];
	int i=beg,j=end,temp;
	while(i<j)
	{
		while((i<end)&&(arr[i]<=pivot))
			i++;
		while(arr[j]>pivot)
			j--;
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		
	}
	temp=arr[k];
	arr[k]=arr[j];
	arr[j]=temp;
	return j;
}
void quicksort(int arr[],int beg,int end)
{
	if(beg>=end)
		return;
	int t=partition(arr,beg,end);

	//quicksort(arr,beg,t-1);
	//quicksort(arr,t+1,end);
	
}

int main()
{
	//freopen("/home/soumyadeep/.codelite/toysprograms/codechef/in.txt","r",stdin);
	//freopen("/home/soumyadeep/.codelite/toysprograms/codechef/out.txt","w",stdout);
	
	int n,arr[SIZE];
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		

}
