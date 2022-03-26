// The longest great podciąg.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    map<char, int>M{};
    
    string a="";
    int n, k;
    cin >> n;
    cin >> k;
    cin >> a;
    vector<int>V;
    for (int i = 0; i < n; i++) {
        M[a[i]] += 1;
     
    }
    int licz = 1;
    for (auto m:M) {
        V.push_back(m.second);
        if (licz == k)
            break;
        licz++;
    }
    if (V.size() < k) {
        cout << "0";
        
    }
    else {
        sort(V.begin(), V.end());
        cout << V[0] * k;
    }
        return 0;
    

}

