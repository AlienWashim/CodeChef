#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, z;
	
	scanf("%d %d %d", &x, &y, &z);
	
	int total_cost = 0;
	int cost1 = (2*z) + y;
	int cost2 = (2*x) + (3*y);
	
	if(cost1 < cost2){
	    printf("%d\n", cost1);
	}else{
	    printf("%d\n", cost2);
	}
	
	

}
