#include<bits/stdc++.h>
using namespace std;

class Graph{
	unordered_map<string, list<pair<string, int> > > l;
	
	public:
		void addEdge(string x,string y,bool bidr,int wt)
		{
			l[x].push_back(make_pair(y,wt));
			if(bidr)
			{
				l[y].push_back(make_pair(x,wt));
			}
		}
		
		void showGraph()
		{
			for(auto city:l)
			{
				cout<<city.first<<" -> ";
				for(auto i:city.second)
				{
					cout<<i.first<<"  "<<i.second<<" , ";
				}
				cout<<endl;
			}
		}
};

int main()
{
	Graph g;
	g.addEdge("A","B",true,20);
	g.addEdge("A","C",true,10);
	g.addEdge("A","D",false,50);
	g.addEdge("C","D",true,30);
	g.addEdge("B","D",true,40);
	
	g.showGraph();
}
