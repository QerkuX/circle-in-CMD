#include <iostream>
#include <cmath>
using namespace std;

int r;
int x[361];
int y[361];
float rad;
const float PI = 3.14;

// Checks if current point in the graph is a part of a circle
bool isValidPlace(int yMap, int xMap){
    for (int deg = 0; deg <= 360; deg++){
        if (yMap == y[deg] && xMap == x[deg]){
            return true;
        }
    }
    
    return false;
}

int main(){
    cout << "radius: ";
    cin >> r;

    //Goes over every angle from 0 to 360
    for (int deg = 0; deg <= 360; deg++){

        //Changes degrees to radiants
        rad = deg * (PI/180);

        //Generates x and y using angle
        x[deg] = round(sin(rad) * r);
        y[deg] = round(cos(rad) * r);
    }


    // Goes over every point of the graph
    for (int yMap = -r; yMap <= r; yMap++){
        for (int xMap = -r; xMap <= r; xMap++){
            

            // If point is the part of the graph then draw x,
            // otherwise leave empty space
            if (isValidPlace(yMap, xMap)){
                cout << "x ";
                continue;
            }
        
            cout << "  ";
        }

        cout << endl;
    }
}

