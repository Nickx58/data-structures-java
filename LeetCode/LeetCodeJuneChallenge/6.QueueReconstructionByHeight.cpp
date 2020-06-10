class Solution
{
public:
  vector<vector<int>> reconstructQueue(vector<vector<int>> &people)
  {
    sort(begin(people), end(people), [](const auto &x, const auto &y) {
      return x[0] == y[0] ? x[1] < y[1] : x[0] > y[0];
    });

    vector<vector<int>> result;
    for (const auto &person : people)
    {
      auto height = person[1];
      result.insert(begin(result) + height, person);
    }

    return result;
  }
};