#include<bits/stdc++.h>
using namespace std;
int indegree[100]={0};
vector<int> adjList[100];
vector<int> topoSort;

bool impo;

#define white 0
#define gry 1
#define black 3

void dfs(int u,int discovered[])
{
    discovered[u] = gry;
    int v,i;
    for( i = 0; i < adjList[u].size(); ++i) {
        v = adjList[u][i];
        if(discovered[v]==gry)
            impo=1;
        if(discovered[v]==white)
            dfs(v,discovered);
    }
discovered[u]=black;
    topoSort.push_back(u);
}

int main()
{
    impo=0;
    int  discovered[100]={0};

    int n,r;
    cin>>n>>r;


    int i,j,k,l;

    int u,v;

    for(i=0;i<r;i++)
    {
        cin>>u>>v;
        adjList[u].push_back(v);
        indegree[v]++;
        discovered[u]=1;
        discovered[v]=1;

    }
    bool fl=1;
    for(i=0;i<n;i++)
    {
        if(indegree[i]==0)
        {
            fl=0;
            break;
        }
    }
    if(fl)
    {
        cout<<"impossible\n"<<endl;
    return 0;
    }
    else{
        for(i=0;i<n;i++)
        {
            if(discovered[i]==1)
            {

                dfs(i,discovered);
            }
        }
    }
     if(impo)
    {
        cout<<"impossible\n"<<endl;
    return 0;
    }
    cout<<"\nsort:\n";
    for(i=topoSort.size()-1;i>=0;i--)
    {

        cout<<" "<<topoSort[i]<<" ";
    }
    cout<<"\n";

    return 0;

}
