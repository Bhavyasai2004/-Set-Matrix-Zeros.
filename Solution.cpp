#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	
	int n=matrix.size();
	int n1=matrix[0].size();
	int a[n][n1];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			a[i][j] =1;
		}
		//cout << endl;
	}
	for(i=0;i<n;i++)
	{
		int s=matrix[i].size();
		
		for(j=0;j<s;j++)
		{
			if(matrix[i][j] == 0)
			{
				for(int q=0;q<s;q++)
				{
					a[i][q]=0;
				}
				for(int w=0;w<n;w++)
				{
					a[w][j] = 0;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(a[i][j]==0)
			matrix[i][j]=0;
		}
		//cout << endl;
	}
}
