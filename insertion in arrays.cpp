#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c,n,p,val;
	cout<<"enter the capacity of array";
	cin>>c;
	cout<<"enter no-of elements";
	cin>>n;
	int arr[c];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(c==n)
	{
		cout<<"new element cannot be inserted";
	}
	cout<<"enter the position and value";
	cin>>p;
    cin>>val;
    if(p>c)
	{
		cout<<"position crossed the array size";
	}
    for(int j=n-1;j>=p-1;j--)
	{
		arr[j+1]=arr[j];
	}
	arr[p-1]=val;
	n++;
	cout<<"elements in array"<<endl;
    for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}
	return 0;
}

