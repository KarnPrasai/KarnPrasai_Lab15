#include <iostream>
#include <algorithm>
using namespace std;

void sort(int *a1[],int *a2[])
{
	for(int i=0;i<*a[1];i++)
		cout << *a[i];
	/*
	for(int i = 0;i<5;i++)
	{
		
		if(*a1[i] > *a1[i+1])
		{
			for(int j = 0;j < i;j++)
			{
				int temp = *a1[j+1];
				*a1[j+1] = *a1[j];
				*a1[j] = temp;
				
			}
		}
		
	}
	for(int i = 10;i>5;i--)
	{
		
		if(*a1[i] < *a1[i+1])
		{
			for(int j = 10;j > i;j++)
			{
				int temp = *a1[j];
				*a1[j] = *a1[j+1];
				*a1[j+1] = temp;
				
			}
		}
		
	}
	*/
}


int main(){
	int data[] = {7,8,2,1,2,4,6,9,0,1}; 
	cout << "Before: ";
	for(int i = 0; i<10; i++) cout << data[i] << " ";
	sort(&data[0],&data[10]);
	cout << "\nAfter: ";
	for(int i = 0; i<10; i++) cout << data[i] << " ";
	return 0;
}
