#include<algorithm>
#include<utility>
#include<vector>

using namespace std;

typedef pair<int,int> PII;

vector<PII>V;

bool cmp(PII A,PII B){
return A.second * B.first>A.first  * B.second;

}

void fractional_knapsack(){
int n,W;
scanf("%d", &n);
for(int i=0; i<n; i++){
    int weight,price;
    scanf("%d %d", &weight, &price);
    V.push_back(PII(weight,price));
}
sort(V.begin(), V.end(), cmp);
scanf("%d", &W);
int ans=0;
for(int i=0; i<n; i++){
    int z=min(W, V[i].first);
    W -=z;
    ans +=z * V[i].second;
}
printf("Maximum cost: %d\n", ans);

}
