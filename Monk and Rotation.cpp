#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
    	int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
	    int rot=n-(k%n);
		for(int i=rot;i<n;i++)
		cout<<arr[i]<<" ";
		for(int i=0;i<rot;i++)
		cout<<arr[i]<<" ";
		cout<<endl;

		}
}
