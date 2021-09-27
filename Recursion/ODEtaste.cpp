#include<bits/stdc++.h>
using namespace std;
int nextMaxweighted(int index, vector<int> weight){
    int maxi = INT_MIN;
    int maxindex = index;
    for(int i = index; i<weight.size(); i++){
        if(maxi < weight[i]){
            maxi = weight[i];
            maxindex = i;
        }
    }
    return maxindex;
}
long long solve (int N, int K, vector<int> weight, vector<int> taste) {
   vector<int> ans;
    for(int i = 0; i<taste.size(); i++){
        int sum = 0;
        int index = i;
        while(index < N){
            sum += taste[index];
            int next = nextMaxweighted(index, weight);
            cout << next << " ";
            index += next;
        }
        cout << endl;
        ans.push_back(sum);
    }
    // for(auto it : ans){
    //     cout << it << " "; 
    // }
   return *max_element(ans.begin(), ans.end());
}
int main(){
    vector<int> weight = {1, 2, 8, 4, 6};
    vector<int> taste = {5, 15, 5, 2, 9};
    cout << solve(5,3,weight,taste);
}
/*
1
5
3
1 2 8 4 6
5 15 5 2 9
*/

// #include<bits/stdc++.h>
// using namespace std;
// int nextMaxweighted(int index, vector<int> weight){
//     int maxi = INT_MIN;
//     int maxindex = index;
//     for(int i = index; i<weight.size(); i++){
//         if(maxi < weight[i]){
//             maxi = weight[i];
//             maxindex = i;
//         }
//     }
//     return maxindex;
// }
// long long solve (int N, int K, vector<int> weight, vector<int> taste) {
//     vector<int> ans;
//     for(int i = 0; i<taste.size(); i++){
//         int sum = 0;
//         int index = i;
//         while(index < N){
//             sum += taste[index];
//             int next = nextMaxweighted(index, weight);
//             index += next;
//         }
//         ans.push_back(sum);
//     }

//     return *max_element(ans.begin(), ans.end());
// }

// int main() {

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T;
//     cin >> T;
//     for(int t_i = 0; t_i < T; t_i++)
//     {
//         int N;
//         cin >> N;
//         int K;
//         cin >> K;
//         vector<int> weight(N);
//         for(int i_weight = 0; i_weight < N; i_weight++)
//         {
//         	cin >> weight[i_weight];
//         }
//         vector<int> taste(N);
//         for(int i_taste = 0; i_taste < N; i_taste++)
//         {
//         	cin >> taste[i_taste];
//         }

//         long long out_;
//         out_ = solve(N, K, weight, taste);
//         cout << out_;
//         cout << "\n";
//     }
// }