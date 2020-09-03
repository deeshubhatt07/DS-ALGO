#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
	adj[u].push_back(v); 
    adj[v].push_back(u);
}

void showGraph(vector<int> adj[],int n)
{
	cout<<"Representation of Graph"<<endl;
	for(int i=0 ; i<n ; i++)
	{
		cout<<i<<" -> ";
		for(auto j:adj[i])
		{
			cout<<j<<",";
		}
		cout<<endl<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> adj[n];
	for(int i=0 ; i<n ; i++)
	{
		int u,v;
		cin>>u>>v;
		addEdge(adj,u,v);
	}
	
	showGraph(adj,n);
}
