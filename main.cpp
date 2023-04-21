#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main() {
    std::cout << "Hello World!\n";
    map<int,int> v;
    v.insert(make_pair(2, 2));
    v.insert(v.begin(),pair<int,int>(1,1));
    //v.erase(1);
    for (auto &n:v) {
        cout<<n.first<<"   "<<n.second<<endl;
    }

    set<int> s{3,1,2};
    s.erase(s.begin(),++s.begin());
    for (auto& n : s) {
        cout<<n<<endl;
    }

    vector<int> p{1,2};
    p.erase(p.begin());
    for (auto &n:p) {
        cout<<n<<endl;
    }
}
