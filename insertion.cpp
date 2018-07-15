#include<iostream>
using namespace std;
int main()
{
	int n, arr[50], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>n;
    cout<<n<<endl;
	cout<<"Enter Array Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
    for(i=0; i<n; i++)
	{
		cout<<arr[i];
	}
	cout<<"Sorting array using selection sort ... \n";
	for(i=1; i<n; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp>arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
