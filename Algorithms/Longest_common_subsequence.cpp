#include<iostream>
using namespace std;

int LCS(string X,string Y)
{
	int x= X.length();
	int y= Y.length();
	
	int dp[100][100];
	for(int i=0 ; i<x ; i++) dp[0][i]=0;
	for(int i=0 ; i<y ; i++) dp[i][0]=0;
	
	for(int i=1 ; i<=x ; i++)
	{
		for(int j=1 ; j<=y ; j++)
		{
			int q=0;
			if(X[i-1]==Y[j-1])
			{
				q = 1+dp[i-1][j-1];
			}
			else
			{
				q= max(dp[i-1][j],dp[i][j-1]);
			}
			dp[i][j] = q;
		}
	}
	
	return dp[x][y];
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	
	cout<<LCS(s1,s2);
}
