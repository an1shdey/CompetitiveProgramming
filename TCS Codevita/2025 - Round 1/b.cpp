#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Cube {
    ll x, y;
};

int main() {
    ll n;
    cin >> n;
    vector<tuple<ll, ll, string>> cmds;
    set<ll> acubes;
    for (ll i = 0; i < n; i++) {
        ll a, b;
        string dir;
        cin >> a >> b >> dir;
        if (dir == "top") dir = "up";
        cmds.push_back({a, b, dir});
        acubes.insert(a);
        acubes.insert(b);
    }
    sort(cmds.begin(), cmds.end());
    map<ll, Cube> pos;              
    map<pair<ll, ll>, ll> mpp;  
    bool st = false;
    for (auto& cmd : cmds) {
        ll a, b;
        string dir;
        tie(a, b, dir) = cmd;
        if (!st) {
            pos[a] = {0, 0};
            mpp[{0, 0}] = a;
            st = true;
        }
        Cube p = pos[a];
        ll nx = p.x, ny = p.y;
        if (dir == "up") ny++;
        else if (dir == "down") ny--;
        else if (dir == "left") nx--;
        else if (dir == "right") nx++;
        if (mpp.find({nx, ny}) != mpp.end()) {
            ll ocube = mpp[{nx, ny}];
            pos.erase(ocube);
        }
        pos[b] = {nx, ny};
        mpp[{nx, ny}] = b;
    }
    ll query;
    cin >> query;
    if (pos.find(query) == pos.end()) {
        cout << "-1 -1 -1 -1\n";
        return 0;
    }
    Cube t = pos[query];
    ll up = -1, down = -1, left = -1, right = -1;
    if (mpp.find({t.x, t.y + 1}) != mpp.end())
        up = mpp[{t.x, t.y + 1}];
    if (mpp.find({t.x, t.y - 1}) != mpp.end())
        down = mpp[{t.x, t.y - 1}];
    if (mpp.find({t.x - 1, t.y}) != mpp.end())
        left = mpp[{t.x - 1, t.y}];
    if (mpp.find({t.x + 1, t.y}) != mpp.end())
        right = mpp[{t.x + 1, t.y}];
    cout << up << " " << down << " " << left << " " << right << "\n";
    return 0;
}
    