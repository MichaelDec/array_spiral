#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int r1 = 0;
        int r2 = matrix.size() - 1;
        int c1 = 0;
        int c2 = matrix[0].size() - 1;

        while (c1 <= c2 && r1 <= r2) {
            /* влево */
            for (int c = c1; c <= c2; ++c) {
                result.push_back(matrix[r1][c]);
            }
            /* вниз */
            for (int r = r1 + 1; r <= r2; ++r) {
                result.push_back(matrix[r][c2]);
            }
            /* если это не был последний элемент в центре */
            if (c1 < c2 && r1 < r2) {
                /* right */
                for (int c = c2 - 1; c >= c1; --c) {
                    result.push_back(matrix[r2][c]);
                }
                /* вверх, перед r1 не включать r1, потому что строка [r1] уже добавлена
                 */
                for (int r = r2 - 1; r > r1; --r) {
                    result.push_back(matrix[r][c1]);
                }
            }
            /* увеличить начальные индексы строки и столбца */
            c1++;
            r1++;
            /* уменьшить последнюю строку и столбец индексов */
            c2--;
            r2--;
        }
        return result;
    }
};

int main()
{
    vector<vector<int>> matrix = {
                                  {1,2,3},
                                  {8,9,4},
                                  {7,6,5},
                                  };
    Solution s;
    auto&& result = s.spiralOrder(matrix);
    for (auto&& num : result) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}
