#include<iostream>
#include<vector>
//����˼·�����ж� ÿ���Ҷ�ӽ�㣨�������������ӽ�㣩�ж��ٸ� 
using namespace std;
vector<int>a[100]; //�����ά��������洢����ͼ���ṹ 
int n, m, hmax = -1, h, level[100]; // Ҳ�ɲ������� ��hmax = -1 ��Ŀ�и����� n = 1ʱ�������� 
int pid, k, cid;
void dfs(int start, int h){ //dfs����  ��start,h�� 
	hmax = max(hmax, h);
	if(a[start].size() == 0) { //��size == 0��ʾ���û�������κ�һ����� ��ʾ��������һ����� ��ʱ�˸߶�Ҷ�ӽ����++ 
		level[h]++;
		return;
	}
	for(int i = 0; i < a[start].size(); i++){
		dfs(a[start][i], h + 1);//������ʱ��h�߶� ������ʱ�߶���Ȼ�Ǵ�ʱ�ĸ߶� 
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
