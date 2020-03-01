#include<iostream>
#include<queue>
using namespace std;
struct hou
{
	int x,y;
	char c;
};
int main1()
{
	hou m; 
	queue<hou > M;
	if(!M.empty()) cout<<"完了，没地方存了";
	for(int i=1;i<=100;i+=3)
	{
		m.x =i;
		m.y =i+100;
		m.c =i;
		M.push(m); 
		cout<<"**"<<M.size()<<"**"<<endl;
	}
	while(!M.empty())
	{
		hou n;//用来记录读出来的东西； 
		n=M.front();
		cout<<n.x<<'*'<<n.y<<'*'<<n.c<<'*'<<endl;
		M.pop();
	}
    system("pause");
	return 0;	 
}