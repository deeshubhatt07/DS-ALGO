#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T> > l;
	
	public:
		void addEdge(T x,T y)
		{
			l[x].push_back(y);
			l[y].push_back(x);
		}
		
		void showBFS(T s)
		{
			queue<T> q;
			map<T vist, int> m;
			
			while(!q.empty())
		}
};

int main()
{
	Graph g;
	g.addEdge(1,2);
	g.addEdge(3,2);
	g.addEdge(1,0);
	g.addEdge(3,4);
	g.addEdge(5,4);
	g.addEdge(3,0);
	
	g.showBFS(0);
}
