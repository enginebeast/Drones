#include <iostream>
using namespace std;

//Implement
//Numbering of the drone which makes accidents.

//Not Implement
//Dynamic Memory allocation
//Moving of the drones.
//3D motion
//About topography and Climate

int main(void) {
	int Drones[5][3] = { {1, 1, 1}, {1, 1, 2}, { 1, 1, 2 } ,{1, 1, 2}, {1, 1, 5} };
	int Accidents[5] = { 0, 0, 0, 0, 0 };

	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			if (Drones[i][0] == Drones[j][0] && Drones[i][1] == Drones[j][1] && Drones[i][2] == Drones[j][2]) {
				Accidents[i] = 1;
				Accidents[j] = 1;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		if (Accidents[i] == 1)
			cout << "Drone" << i + 1 << "was broken!\n";
	}

	return 0;
}