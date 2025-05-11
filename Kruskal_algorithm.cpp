#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int parent[100];
int cost[100];
int rep (int x)
{
    if(parent[x]==x)
        return x;
    else 
       return rep(parent[x]);
}
void marge(int x, int y,int w)

{
    int rep_y=rep(y);
    cost[rep_y]=w;
    parent[rep_y]=rep(x);
}

int main (){

    ifstream file("input.txt"); // open file for reading
    if (!file) {
        cout << "Error: Could not open input file.\n";
        return 1;}

        
int total_node, total_edge,v1,v2,w;
vector <pair<int,pair<int,int>>>ver;


cout<< "please enter total_node:"<<endl;

cin>>total_node;
for (int i=0; i<total_node; i++)

{
    parent[i]=i;
}
cout<< "please enter total_edge:"<<endl;
cin >>total_edge;
for(int i=0; i<total_edge; i++){
    cin>>v1>>v2>>w;
    ver.push_back(make_pair(w,make_pair(v1,v2)));
}

sort(ver.begin(),ver.end());
int all_node=0,mst_edge=0;

while(all_node<total_node && mst_edge<total_node-1)
{
    int weight=ver[all_node].first;
    int n1=ver[all_node].second.first;
    int n2=ver[all_node].second.second;
    if(rep(n1)!=rep(n2))

{
    marge(n1,n2,weight);
    mst_edge++;
}
all_node++;
}

cout << "cost\n";
int mst_sum =0;
for(int i=0; i<total_node; i++)
{
    mst_sum +=cost[i];
}
cout <<"MST sum:"<<mst_sum<<endl;
return 0;

}