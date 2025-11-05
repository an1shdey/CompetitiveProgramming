#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int volume_cuboid=a*b*c;
    int volume_cube=x*x*x;
    if(volume_cuboid >volume_cube) cout<<"Cuboid";
    else if(volume_cuboid < volume_cube) cout<<"Cube";
    else cout<<"Equal";
}
