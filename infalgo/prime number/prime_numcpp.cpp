#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int flag = 0;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int k = i + 1; k < nums.size(); k++)
        {
            for (int z = k + 1; z < nums.size(); z++)
            {
                temp = nums[i] + nums[k] + nums[z];
                if (temp == 1 || temp == 0)
                    flag = 1;
                for (int j = 2; j < temp / 2; j++)
                {
                    if (temp % j == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    answer++;
                }
                flag = 0;
                temp = 0;
            }
        }
    }

    return answer;
}