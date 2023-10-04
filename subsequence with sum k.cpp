#include <bits/stdc++.h>
using namespace std;

set<vector<int>> s;
void countstring(int i, vector<int> v, vector<int> arr, int count, int k)
{
    if (i == arr.size())
    {
        sort(v.begin(), v.end());
        if (count == k)
        {
            s.insert(v);
            return;
        }
        return;
    }
    v.push_back(arr[i]);
    count += arr[i];
    countstring(i + 1, v, arr, count, k);
    v.pop_back();
    count -= arr[i];
    countstring(i + 1, v, arr, count, k);
}
int main()
{

    vector<int> arr = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int k = 30;
    vector<int> v;
    countstring(0, v, arr, 0, k);
    vector<vector<int>> ans;

    for (auto i : s)
    {
        ans.push_back(i);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}