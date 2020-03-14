// BFS �Թ��ҳ���
#include <queue>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

const int maxn = 10 + 5;
const int dx[] = { 0, 0, 1, -1 };//���������ƶ�ʹ�õĲ��� 
const int dy[] = { 1, -1, 0, 0 };

struct node {
	int x, y;//���� 
	int step;//������Ĳ��� 

	node(int _x, int _y, int _step) : x(_x), y(_y), step(_step) {}//���һ��Ľṹ��ֵ��ʽ 
};
queue<node> que;
int vis[maxn][maxn];//vis���ڱ���߹��ĵ�:1Ϊ�߹� 0Ϊû�� 
char mp[maxn][maxn];//mp���ڼ�¼��ͼ�ĵ���

int main() {
	int n, m;//n*m��С�ĵ�ͼ 
	int start_x, start_y;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%s", &mp[i]);//¼���ͼ 
		for (int j = 0; j < m; ++j) {
			if (mp[i][j] == 'S') {
				start_x = i;
				start_y = j;
			}//�ҵ���� 
		}
	}


	memset(vis, 0, sizeof(vis)); // ��ʼ�� vis 
	que.push(node(start_x, start_y, 0));
	vis[start_x][start_y] = 1;
	int ans;//ans�Ǽ�¼������

	//����� whileѭ���൱��һ�����дӵ�0����ʼ�ߣ����ߵ��ĵ�ȡ��ȥ ����һ���ܵ��Ĵ��ȥ��
	//��������źý��ӳ��ӵ�Ԫ�صĲ�����Ȼ�ź��򣬴����0 1 1 1 2 2 2 2 2 2 2 2 2 3... 
	while (!que.empty()) {
		node tmp = que.front();//tmp��������ǰ��λ�� 
		que.pop();//ȡ�������Ԫ�� �Ƚ��ȳ�

		if (mp[tmp.x][tmp.y] == 'F') {
			ans = tmp.step;//ans��¼�����ڼ��� 
			break;
		}//ȡ���յ����

		for (int i = 0; i < 4; ++i) {
			int x = tmp.x + dx[i], y = tmp.y + dy[i];//��һ��

			// ��������һ���Ƿ����������������� 
			// 1 �����߽� 
			// 2 ���ֵ�ͼ�ϵ��ϰ� 
			// 3 �߹��� 
			if (x < 0 || x >= n || y < 0 || y >= m || mp[x][y] == '#' || vis[x][y] == 1) {
				continue;
			}
			que.push(node(x, y, tmp.step + 1));//�ǲ�+1,¼������� 
			vis[x][y] = 1;//����߹� 
		}
	}
	printf("%d\n", ans);

	return 0;
}
//���� 
// 7 7
// ...#...
// .....#F
// .......
// .#.#...
// .......
// .S#..#.
// .......