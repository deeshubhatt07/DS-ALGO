#include<bits/stdc++.h>
using namespace std;

int getCount(int arr[], int n, int k)
{
	unordered_map<int, int> m;
	int count=0;
	
	for(int i=0 ; i<n ; i++)
	{
		m[arr[i]]++;
	}
	
	for(int i=0 ; i<n ; i++)
	{
		count = count+m[k-arr[i]];
		
		if(m[k-arr[i]]==arr[i])
		{
			count--;
		}
	}
	return count/2;
}

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	
	cout<<getCount(arr,n,k);
}
