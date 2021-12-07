#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'longestSubarray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int longestSubarray(vector<int> arr) {
    set<int> s;
    int i, j, mx = 1;
    for(i=0; i<arr.size()-1; i++) {
        s.insert(arr[i]);
        for(j=i+1; j<arr.size(); j++) {
            if(abs(arr[i]-arr[j])==0 || abs(arr[i]-arr[j])==1) {
                if(!s.count(arr[j])) {
                    if(s.size()==2) break;
                    else s.insert(arr[j]);                    
                }
            }
            else break;
        }
        if(s.size()==2) {
            mx = max(mx, j-i);
            s.clear();
        }
        else s.clear();
    }
    return mx;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = longestSubarray(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
