#include"Chapter11.h"
//
//int main(){
//	ifstream ifs("test_12.txt");
//	vector<pair<string, int>> vec;
//	string s;
//	int i;
//	while (!ifs.eof()){
//		ifs >> s >> i;
//		vec.push_back(pair<string, int>(s, i));
//		vec.push_back(pair<string, int>{s, i});
//		vec.push_back(make_pair(s, i));
//	}
//
//	for (const auto i : vec){
//		cout << i.first << " " << i.second << endl;
//	}
//	getchar();
//}