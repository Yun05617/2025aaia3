//week09-3.cpp 學習計畫 Matrix 第3題
//54. Spiral Matrix  用ai解助手leet
class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return {};
        }

        std::vector<int> result;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            for (int col = left; col <= right; ++col) {
                result.push_back(matrix[top][col]);
            }
            top++;

            if (top <= bottom) {
                for (int row = top; row <= bottom; ++row) {
                    result.push_back(matrix[row][right]);
                }
                right--;
            }

            if (top <= bottom && left <= right) {
                for (int col = right; col >= left; --col) {
                    result.push_back(matrix[bottom][col]);
                }
                bottom--;
            }

            if (top <= bottom && left <= right) {
                for (int row = bottom; row >= top; --row) {
                    result.push_back(matrix[row][left]);
                }
                left++;
            }
        }

        return result;
    }
};
