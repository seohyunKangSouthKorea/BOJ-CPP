#include <bits/stdc++.h>
using namespace std;
vector<char> adj[28];
bool visited[28];
char no,lt,rt;
int n;
void preorder(char here){
	visited[here-65]=1;
	cout << here;
	if(adj[here-65][0]=='l'||adj[here-65][0]=='r')	{
		preorder(adj[here-65][1]);
	}
	else if(adj[here-65].size()==2){
		preorder(adj[here-65][0]);
		preorder(adj[here-65][1]);
	}
}
void inorder(char here){
	if(adj[here-65][0]=='r'){
		inorder(adj[here-65][1]);
		visited[here-65]=1;
		cout << here;
	}
	else if(adj[here-65][0]=='l'){
		visited[here-65]=1;
		cout << here;
		inorder(adj[here-65][1]);
	}
	else if(adj[here-65][0]=='b'){
		visited[here-65]=1;
		cout << here;
	}
	else{
		inorder(adj[here-65][0]);
		visited[here-65]=1;
		cout << here;
		inorder(adj[here-65][1]);
	}
}
void postorder(char here){
	if(adj[here-65][0]=='l'||adj[here-65][0]=='r')	{
		postorder(adj[here-65][1]);
	}
	else if(adj[here-65].size()==2){
		postorder(adj[here-65][0]);
		postorder(adj[here-65][1]);
	}
	visited[here-65]=1;
	cout << here;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> no >> lt >> rt;
		if(lt=='.'&&rt=='.')	{
			adj[no-65].push_back('b');
		}
		else if(lt=='.') {
			adj[no-65].push_back('l');
			adj[no-65].push_back(rt);
		}
		else if(rt=='.'){
			adj[no-65].push_back('r');
			adj[no-65].push_back(lt);
		}
		else {
			adj[no-65].push_back(lt);
			adj[no-65].push_back(rt);
		}
	}
	preorder('A');
	cout << '\n';
	memset(visited,0,sizeof(visited));
	inorder('A');
	cout << '\n';
	memset(visited,0,sizeof(visited));
	postorder('A');
}
