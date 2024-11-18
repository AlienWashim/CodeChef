#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a;
	scanf("%d %d", &n, &a);
	
	int arr[n];
	for(int i = 0; i < n; i++){
	    scanf("%d", &arr[i]);
	}
	
	int check = 1;
	for(int i = 0; i < n; i++){
	    if(arr[i] == a){
	        printf("YES\n");
	        check = 0;
	        break;
	    }
	}
	
	if(check == 1){
	    printf("NO\n");
	}
}
