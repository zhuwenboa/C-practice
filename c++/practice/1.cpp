#include<iostream>
#include<vector>
#include<memory>
#include<algorithm>

using namespace std;
    

int main()
{
    vector<vector<int>> vec{{1, 2}, {2, 3}, {3, 4}, {1, 2}};
    int ans = 0;
    int cur_end = 0;
    sort(vec.begin(), vec.end(),
        [&](const vector<int>& a, const vector<int>& b)
        {
            return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
        }
     );
    for(int i = 0; i < vec.size(); ++i)
    {
        if(cur_end < vec[i][0])
        {
            cur_end = vec[i][1];
            ans++;
        }
    }
    std::cout << "ans = " << ans << "\n";
}