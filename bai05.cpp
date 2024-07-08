#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = vector<int>();
    nums.push_back(1);
    nums.push_back(2);

    int n;
    cin >> n;

    while (nums[nums.size() - 1] < n) {
        int maxNum = nums[nums.size() - 1];
        int newNum = 999999;
        bool endFlag = false;
        int nonUniqueSum[100000] = {0};
        for (int i = nums.size() - 1; i >= 1; i--)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                int target = nums[i] + nums[j];
                if (target <= maxNum)
                {
                    endFlag = true;
                    break;
                }

                if (nonUniqueSum[target] == 1)
                    continue;

                int i2 = i - 1, j2 = j + 1;
                bool isUnique = true;
                
                while (i2 > j2) {
                    int curSum = nums[i2] + nums[j2];
                    if (curSum == target) {
                        isUnique = false;
                        nonUniqueSum[curSum] = 1;
                        break;
                    }
                    else if (curSum < target)
                        j2++;
                    else
                        i2--;
                }

                if (isUnique) {
                    if (target < newNum)
                        newNum = target;
                }
            }
            if (endFlag) break;
        }
        nums.push_back(newNum);
    }

    for (int i = 0; i < nums.size() - 1; i++) {
        cout << nums[i] << ", ";
    }
    cout << "\b\b ";
}
