#include <iostream>
#include <cmath>
using namespace std;

int r;

int main(){
	
	while (true){
		cout << "Enter the radius (only odd numbers, because of the rendering system): ";
		cin >> r;
		
		if (r % 2 == 0){
			r += 1;
		}
		
		cout << endl << endl;
		
		int yMin[r*2+1], yMax[r*2+1], fillSpace;
		
		for (int i = -r; i <= r; i++){
			yMax[i+r] = round(sqrt(-pow(i, 2) + pow(r, 2))) + r;
			yMin[i+r] = r - (yMax[i+r]) + r;
			
			if (yMin[i+r] == 0){
				fillSpace = i+r;
			}
		}
		
			yMax[r*2] = fillSpace;
			yMin[r*2] = r - fillSpace + r;
			
			yMax[0] = fillSpace;
			yMin[0] = r - fillSpace + r;
	 	
		for (int i = 0; i <= r*2; i++){
			for (int j = 0; j <= r*2; j++){
				if (i <= yMax[j] && i >= yMin[j]){
					cout << "x "; 
				}
				else{
					cout << "  ";
				}
			}
			cout << endl;
		}
		
		cout << endl << endl;
	}
	return 0;
}
