#include <string>
#include <vector>

using namespace std;

bool isPossible(vector<int> wallet, vector<int> bill) {
    bool possible = false;
    
    if (wallet[0] >= bill[0] && wallet[1] >= bill[1]) {
        possible = true;
    }
    if (wallet[1] >= bill[0] && wallet[0] >= bill[1]) {
        possible = true;
    }
    return possible;
}

int getAnswer(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while(false == isPossible(wallet, bill)){
        if (bill[0] > bill[1]) {
            bill[0] = (bill[0] / 2);
        }
        else {
            bill[1] = (bill[1] / 2);
        }
        answer ++; 
    }
    return answer;
}


int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    answer = getAnswer(wallet, bill);
    
    return answer;
}