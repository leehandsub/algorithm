#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array1, vector<vector<int>> commands) {
    vector<int> answer;
	vector<int> temp;
	for (int i = 0; i < commands.size(); i++)
	{
		for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
		{
			temp.push_back(array1[j]);
		}
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1]);
        temp.clear();
	}
    
	return answer;
}

void print(vector<int> array1, vector<vector<int>> commands, vector<int> answer) {
    vector<int> t = solution(array1, commands);
    if (t == answer)
        cout << "정답" << endl;
    else
        cout << "틀림 " << endl;
}

int main() {
    print({ 1, 5, 2, 6, 3, 7, 4 }, { {2, 5, 3},{4, 4, 1},{1, 7, 3} }, { 5, 6, 3 });
    return 0;
}