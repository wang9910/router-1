#include "del.h"

void DeleteVertex()
{
	int n, num, i, j;
	num = len;
	cout << "��ǰ�ڵ���ĿΪ��" << num << endl;
	cout << "������ɾ���ڵ�����";
	cin >> n;
	n -= 1;
	for (i = 0; i < num; ++i) {//�е��ƶ�
		for (j = n; j < num; j++) {
			chart[i][j] = chart[i][j + 1];
		}
	}
	for (i = n; i < num; i++) {//�е��ƶ�
		for (j = 0; j < num; j++) {
			chart[i][j] = chart[i + 1][j];
		}
	}
	len = len - 1;

}
void DeleteEdge()
{
	int st, end;
	cout << "������ߵ�����һ���ڵ㣺";
	cin >> st;
	cout << "��������һ�ڵ�ֵ��";
	cin >> end;
	--st;
	--end;
	cout << "ɾ���ɹ�" << endl;
	chart[st][end] = 100;
	chart[end][st] = chart[st][end];
}
