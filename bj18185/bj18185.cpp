#include <iostream>
#include<memory.h>
// using namespace std; �� ������� ���� ����
// ���α׷��� ������������ ���� �ʷ�
using std::cin;
using std::cout;
using std::ios;
using std::min;
int main() {
	// ����� �ӵ� ���̱� ���� ���
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, ans=0;
	int v[100001];
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> v[i];
	}
	for (int i = 1; i <= n; i++){
		if (v[i + 1] > v[i + 2]) {
			// min�Լ� �� ���� �ּҰ� ��ȯ
			// Q �̰��� ���� �Ȱ�
			int a = min(v[i], v[i + 1] - v[i + 2]);
			ans += 5 * a;
			v[i] -= a; 
			v[i + 1] -= a;

			int b = min(v[i], min(v[i + 1], v[i + 2]));
			ans += 7 * b;
			v[i] -= b;
			v[i + 1] -= b;
			v[i + 2] -= b;
		}
		else {
			int b = min(v[i], min(v[i + 1], v[i + 2]));
			ans += 7 * b;
			v[i + 1] -= b;
			v[i + 2] -= b;

			int c = min(v[i], v[i + 1]);
			ans += 5 * c;
			v[i + 1] -= c;
		}
		ans += 3 * v[i];
	}
	cout << ans << "\n";
	return 0;
}


