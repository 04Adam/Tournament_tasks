// Bliblioteka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int>K;
    char N;
    int t;
    int l;



    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> N;
        cin >> l;
        if (N == 'L') {
            K.insert(K.begin(), l);
        }
        else if (N == 'R') {
            K.push_back(l);
        }
        else {
            auto itr = find(K.begin(), K.end(), l);
            int s = K.size();
            if (itr != end(K))
            {
                int x = distance(K.begin(), itr);
                
                if (x >= s / 2) {
                    cout << s - x - 1<<'\n';
                }
                else { cout << x << '\n'; }
            }
            
            }

        
    }

    return 0;
}


