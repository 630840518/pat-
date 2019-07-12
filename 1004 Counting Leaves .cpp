#include<iostream>
#include<vector>
//本题思路就是判断 每层的叶子结点（不存在其它的子结点）有多少个 
using namespace std;
vector<int>a[100]; //定义二维向量数组存储树（图）结构 
int n, m, hmax = -1, h, level[100]; // 也可不做处理 ，hmax = -1 题目中告诉了 n = 1时不做处理 
int pid, k, cid;
void dfs(int start, int h){ //dfs遍历  （start,h） 
	hmax = max(hmax, h);
	if(a[start].size() == 0) { //当size == 0表示结点没有连接任何一个结点 表示不存在下一个结点 此时此高度叶子结点数++ 
		level[h]++;
		return;
	}
	for(int i = 0; i < a[start].size(); i++){
		dfs(a[start][i], h + 1);//保留此时的h高度 ，回溯时高度依然是此时的高度 
	}
}
int main(){
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i++){
		scanf("%d%d", &pid, &k);
		for(int j = 0; j < k; j++){
			scanf("%d", &cid);
			a[pid].push_back(cid); 
		}
	}
	dfs(1, h);
	for(int i = 0; i <= hmax; i++){
		if(i != 0)
			printf(" ");
		printf("%d", level[i]);
	}
	return 0;
} 
