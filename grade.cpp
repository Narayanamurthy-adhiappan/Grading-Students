#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    vector < int > result;
    vector < int > :: iterator i;
    for( i = grades.begin(); i != grades.end(); i++){
        int nextMultiple =  (*i % 10 < 5) ? (5 - *i % 10) + *i : (10 - *i % 10) + *i;
        if((nextMultiple - *i) < 3)
            if(nextMultiple >= 40)
                result.push_back(nextMultiple);
            else
                result.push_back(*i);
        else
            result.push_back(*i);
    }
        
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
