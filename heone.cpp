#include <iostream>
#include<set>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		multiset<long long > bags;
		for(int i=0; i<n; ++i){
			long long candy_ct;
			cin >> candy_ct;
			bags.insert(candy_ct);
		}
		long long total_candy = 0;
		for(int i=0; i<k; i++){
			auto max_it = (--bags.end());
			long long candy_ct = (*max_it);
			total_candy += candy_ct;
			bags.erase(max_it);
			bags.insert(candy_ct/2);
		}
		cout << total_candy << endl;

	}
	return 0;
}