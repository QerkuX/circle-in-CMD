#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int mapSize = 25;
int amount = 0;
int r;
int wantedAmount;

int getSize(int wA);
void drawCircle(int cS);

int main()
{
    while (true){
    cout << "Enter the radius: ";
    cin >> r;
	cout << endl;

    wantedAmount = r*2+1;
    drawCircle(getSize(wantedAmount));


    cout << endl << endl;

    }

	return 0;
}

int getSize(int wA){
    int circleSize = 1;
    int trueAmmount = 0;
    amount = 0;
    while (true){
        for (int i = -r*2; i <= r*2; i++){
            for (int j = -r*2; j <= r*2; j++){
                if (j*j/circleSize <= 1 && i == 0){
                    amount++;
                }
            }
        }

        if(amount == wA){
            trueAmmount++;
        }

        if(amount > wA){
            return circleSize-2*(ceil(trueAmmount/2)+1);
        }
        amount = 0;
        circleSize += 2;
    }
}

void drawCircle(int cS){
    for (int i = -r; i <= r; i++){
            for (int j = -r; j <= r; j++){
                if ((i*i + j*j)/cS <= 1){
                    cout << "x ";
                }
                else{
                    cout << "  ";
                }
            }
            cout << endl;
        }

}
