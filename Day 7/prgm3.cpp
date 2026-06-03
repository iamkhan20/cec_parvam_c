#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
template<typename T>
class scoremanager{
private:
    vector<T> scores;
public:
    void addScore(T score){
        scores.push_back(score);
    }
    T getAverage(){
        T sum = 0;
        for(const auto& score : scores){
            sum += score;
        }
        return sum / scores.size();
    }
    void displayScores() const {
        cout << "Scores: ";
        for(const auto& score : scores){
            cout << score << " ";
        }
        cout << endl;
    }
    T getMaxScore(){
        return *max_element(scores.begin(), scores.end());
    }
    T getMinScore(){
        return *min_element(scores.begin(), scores.end());
    }


};
int main(){
    scoremanager<int> intManager;
    intManager.addScore(85);
    intManager.addScore(90);
    intManager.addScore(78);
    intManager.displayScores();
    cout << "Average Score: " << intManager.getAverage() << endl;
    cout << "Max Score: " << intManager.getMaxScore() << endl;
    cout << "Min Score: " << intManager.getMinScore() << endl;

    scoremanager<double> doubleManager;
    doubleManager.addScore(85.5);
    doubleManager.addScore(90.2);
    doubleManager.addScore(78.3);
    doubleManager.displayScores();
    cout << "Average Score: " << doubleManager.getAverage() << endl;
    cout << "Max Score: " << doubleManager.getMaxScore() << endl;
    cout << "Min Score: " << doubleManager.getMinScore() << endl;
    return 0;
}