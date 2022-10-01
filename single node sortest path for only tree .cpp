#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mz =1e4+124;

vector< int> adj[mz];
bool vst[mz];

int  destance[mz];

//this is use for tree

void DFS(int u,int level)
{
    vst[u]=1;
    destance[u]=level;
    level++;

    for ( auto v: adj[u] )
    {
        if(!vst[v])
        {
            DFS(v,level);
        }

    }


}



int main()
{

    int node,edge;

    cin>>node>>edge;

    for (int i=1; i<=edge;i++ )
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);

        adj[v].push_back(u);

    }


    int x;
    cin>>x;

    DFS(x,0);


    for (int i=1; i<=node;i++ )
    {
        cout<< "node : "<<i<<"   distance: " <<destance[i]<<endl;

    }




return 0;
}


/*
7 6
1 4
1 5
1 3
4 6
3 2
2 7



*/
