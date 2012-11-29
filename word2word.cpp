#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>

list<string> get_branches(string s, set<string> dict) {
  int len = s.size()-1;
  list<string> op_list;
  for(int i= 0 ;i<=len;i++) {
    for (char ch = 'a'; ch <= 'z'; ch++) {
	  string new_branch = substr(0, i)+string(1, c)+string(i+1);
	  if(dict.find(new_branch) != set::end && s.compare(new_branch) != 0) 
	    op_list.push_back(new_branch)
	}
  }
  return op_list;
}

list<string> list_transform(string s, string d, set<string> dict) {
  set<string> visited;
  queue<string> q;
  multimap<string, string> route;
  q.push_back(s);
  visited.insert(s);
  while (!q.empty()) {
    string curr_str = q.pop_front();
	if (!tmp.compare(d)) {
	  list<string> op_list;
	  string tmp_str = 
	  return op_list;
	}
    list <string> branches = get_branches(curr_str, dict);
	list<string>::iterator branches_itr = branches.begin();
	while(branches_itr != branches.end()) {
	  string tmp_str = *branches_itr;
	  if (!visited.find(tmp_str)) {
	    visited.insert(tmp_str);
		q.push_back(tmp_str);
		route.insert(pair<string, string>(curr_str, tmp_str));
		
	  }
	}
  }
}
int main() {
  
}