#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";

    for(int i = 1 ; i < food.size(); i++){
        for(int j = 0 ; j < food[i]; j++){
            answer += i + '0';
        }
    }
    
    

    return answer;
}