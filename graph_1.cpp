class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>v;
	    queue<int>q;
	    bool visited[V+1];
	    for(int i=0;i<V;i++)
	    {
	        visited[i]=false;
	    }
	    q.push(0);
	    visited[0]=true;
	    while(q.size()>0)
	    {
	        int temp=q.front();
	        q.pop();
	        v.push_back(temp);
	        for(int i=0;i<adj[temp].size();i++)
	        {
	            if(!visited[adj[temp][i]])
	            {
	                q.push(adj[temp][i]);
	                visited[adj[temp][i]]=true;
	            }
	        }
	    }
	    return v;
	}
};
