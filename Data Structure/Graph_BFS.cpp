#include<bits/stdc++.h>
using namespace std;

class Graph{
	
	map<int, list<int> > m;
	
	public:
		void addEdge(int u,int v)
		{
			m[u].push_back(v);
			m[v].push_back(u);
		}
	
		void showBFS(int src)
		{
			map<int, int> vist;
			queue<int> q;
		
			q.push(src);
			vist[src]++;
		
			while(!q.empty())
			{
				int node = q.front();
				q.pop();
			
				for(auto i:m[node])
				{
					if(vist[i]==0)
					{
						q.push(i);
						vist[i]++;
					}
				}
				cout<<node<<" -> ";
			}
		}
};

int main()
{
	Graph g;
	
	g.addEdge(5,4);
	g.addEdge(5,6);
	g.addEdge(6,3);
	g.addEdge(4,3);
	g.addEdge(2,4);
	g.addEdge(1,2);
	
	g.showBFS(5);
}
