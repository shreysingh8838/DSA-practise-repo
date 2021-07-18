#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
int FindMax(int a[],int n) //function to find largest element
{
	int i, max;
	max = a[0];//assume that first element is max
	for(i=1;i<n;i++)
	{
		if(a[i]>max) //if currentelement is greater than max
			max =a[i]; //assign that number as max now
	}
	return max; //returns the largest number to main function
}
int FindMin(int a[],int n) //function to find smallest element
{
	int i, min;
	min = a[0];// assuming first element as minimum
	for(i=1;i<n;i++)
	{
		if(a[i]<min)// If current element is smaller than min
			min =a[i];//assigning the smaller number to min
	}
	return min; //returns the smallest number to main function
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    fast;

    return 0;
}