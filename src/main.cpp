#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n, m, a;
	cin >> n >> m >> a;

	auto na = n / a;
	if (0 < n % a) {
		na += 1;
	}

	auto ma = m / a;
	if (0 < m % a) {
		ma += 1;
	}

	cout << na * ma;

	return 0;
}