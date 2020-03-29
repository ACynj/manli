/*蛮力算法*/
#include<stdio.h>
#include<math.h>
struct Node {
	int x, y;
};
int main() {
	Node node[20];
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &node[i].x, &node[i].y) ;
	}
	int min = 0;
	Node node1, node2;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int temp = sqrt(pow((node[i].x - node[j].x), 2) - pow((node[i].y - node[j].y), 2));
			if (temp < min) {
				min = temp;
				node1= node[i];
				node2 = node[j];
			}
		}
	}
	printf("%d %d %d %d\n", node1.x, node1.y, node2.x, node2.y);
	printf("最短距离为：%d\n", min);


}