#include <iostream>
#include <Windows.h>
#include <ctime>
#include <string>
using namespace std;

int main() {
	const int n = 10;
	int a = 0, x, y, rotation, le = 0, prov=0;
	string player1, player2;
	bool A[n], B[n], C[n], D[n], E[n], F[n], G[n], H[n], I[n], J[n], A1[n], B1[n], C1[n], D1[n], E1[n], F1[n], G1[n], H1[n], I1[n], J1[n];
	for (int i = 0;i < n;i++) {
		A[i] = 0;
		B[i] = 0;
		C[i] = 0;
		D[i] = 0;
		E[i] = 0;
		F[i] = 0;
		G[i] = 0;
		H[i] = 0;
		I[i] = 0;
		J[i] = 0;


		A1[i] = 0;
		B1[i] = 0;
		C1[i] = 0;
		D1[i] = 0;
		E1[i] = 0;
		F1[i] = 0;
		G1[i] = 0;
		I1[i] = 0;
		J1[i] = 0;
		H1[i] = 0;
	}

	while (a != 1) {
		cout << "Press 1 to start" << endl;
		cin >> a;
		system("cls");
	}
	

	cout << "Enter Player1 name: ";
	cin >> player1;
	system("cls");
	cout << "Enter Player2 name: ";
	cin >> player2;
	system("cls");
	for (int i = 0;i<3;i++) {
		cout << player1 << "'s turn.";
		Sleep(100);
		system("cls");
		cout << player1 << "'s turn .";
		Sleep(100);
		system("cls");
		cout << player1 << "'s turn  .";
		Sleep(100);
		system("cls");
	}
	for (int g = 0;g<5;g++) {
		for (int i = 0;i < n;i++) {
			if (i == 0) {
				cout << "A |";
			}
			if (i == 1) {
				cout << "B |";
			}
			if (i == 2) {
				cout << "C |";
			}
			if (i == 3) {
				cout << "D |";
			}
			if (i == 4) {
				cout << "E |";
			}//YRsVaAk3pLNQ2oQmAZbZHonDiTXBKC
			if (i == 5) {
				cout << "F |";
			}
			if (i == 6) {
				cout << "G |";
			}
			if (i == 7) {
				cout << "H |";
			}
			if (i == 8) {
				cout << "I |";
			}
			if (i == 9) {
				cout << "J |";
			}
			for (int j = 0;j < n;j++) {
				if (i == 0) {
					cout << A[j] << "|";
				}
				if (i == 1) {
					cout << B[j] << "|";
				}
				if (i == 2) {
					cout << C[j] << "|";
				}
				if (i == 3) {
					cout << D[j] << "|";
				}
				if (i == 4) {
					cout << E[j] << "|";
				}
				if (i == 5) {
					cout << F[j] << "|";
				}
				if (i == 6) {
					cout << G[j] << "|";
				}
				if (i == 7) {
					cout << H[j] << "|";
				}
				if (i == 8) {
					cout << I[j] << "|";
				}
				if (i == 9) {
					cout << J[j] << "|";
				}
			}
			cout << endl;
			cout << "  ";
			for (int j = 0;j < n;j++) {
				cout << " -";
			}
			cout << endl;
		}
		cout << "  ";
		for (int j = 0;j < n;j++) {
			cout << " " << j;
		}
		cout << endl;
		if (g == 0) {
			cout << "1st ship takes 4 empty fields!"<<endl;
			le = 4;
		}
		if (g == 1) {
			cout << "2nd ship takes 3 empty fields!"<<endl;
			le = 3;
		}
		if (g == 2) {
			cout << "3rd ship takes 3 empty fields!"<<endl;
			le = 3;
		}
		if (g == 3) {
			cout << "4th ship takes 2 empty fields!"<<endl;
			le = 2;
		}
		if (g == 4) {
			cout << "5th ship takes 2 empty fields!" << endl;
			le = 2;
		}

		cout << " Enter pos of " << g << " ship(x,y,rotation(1-up, 2-down, 3-right, 4-left):" << endl;

		cout << " Warning! Your ship mustn't be outside of the field! If your ship is outside of the field or on position of another ship,you will have an opportunity to change it!" << endl;
		cout << " Write everything like in an instruction! " << endl;
		cin >> x >> y >> rotation;
		system("cls");
		if (rotation == 4 && x <= n - le) {
			for (int j = x; j < le+x;j++) {
				if (y == 0) {
					A[j] = 1;
				}
				if (y == 1) {
					B[j] = 1;
				}
				if (y == 2) {
					C[j] = 1;
				}
				if (y == 3) {
					D[j] = 1;
				}
				if (y == 4) {
					E[j] = 1;
				}
				if (y == 5) {
					F[j] = 1;
				}
				if (y == 6) {
					G[j] = 1;
				}
				if (y == 7) {
					H[j] = 1;
				}
				if (y == 8) {
					I[j] = 1;
				}
				if (y == 8) {
					J[j] = 1;
				}
			}
		}
		if (x>n - le) {
			g--;
		}
	}
	for (int i = 0;i<3;i++) {
		cout << player2 << "'s turn.";
		Sleep(100);
		system("cls");
		cout << player2 << "'s turn .";
		Sleep(100);
		system("cls");
		cout << player2 << "'s turn  .";
		Sleep(100);
		system("cls");
	}
	for (int g = 0;g<5;g++) {
		for (int i = 0;i < n;i++) {
			if (i == 0) {
				cout << "A |";
			}
			if (i == 1) {
				cout << "B |";
			}
			if (i == 2) {
				cout << "C |";
			}
			if (i == 3) {
				cout << "D |";
			}
			if (i == 4) {
				cout << "E |";
			}
			if (i == 5) {
				cout << "F |";
			}
			if (i == 6) {
				cout << "G |";
			}
			if (i == 7) {
				cout << "H |";
			}
			if (i == 8) {
				cout << "I |";
			}
			if (i == 9) {
				cout << "J |";
			}
			for (int j = 0;j < n;j++) {
				if (i == 0) {
					cout << A1[j] << "|";
				}
				if (i == 1) {
					cout << B1[j] << "|";
				}
				if (i == 2) {
					cout << C1[j] << "|";
				}
				if (i == 3) {
					cout << D1[j] << "|";
				}
				if (i == 4) {
					cout << E1[j] << "|";
				}
				if (i == 5) {
					cout << F1[j] << "|";
				}
				if (i == 6) {
					cout << G1[j] << "|";
				}
				if (i == 7) {
					cout << H1[j] << "|";
				}
				if (i == 8) {
					cout << I1[j] << "|";
				}
				if (i == 9) {
					cout << J1[j] << "|";
				}
			}
			cout << endl;
			cout << "  ";
			for (int j = 0;j < n;j++) {
				cout << " -";
			}
			cout << endl;
		}
		cout << "  ";
		for (int j = 0;j < n;j++) {
			cout << " " << j;
		}
		cout << endl;
		if (g == 0) {
			cout << "1st ship takes 4 empty fields!" << endl;
			le = 4;
		}
		if (g == 1) {
			cout << "2nd ship takes 3 empty fields!" << endl;
			le = 3;
		}
		if (g == 2) {
			cout << "3rd ship takes 3 empty fields!" << endl;
			le = 3;
		}
		if (g == 3) {
			cout << "4th ship takes 2 empty fields!" << endl;
			le = 2;
		}
		if (g == 4) {
			cout << "5th ship takes 2 empty fields!" << endl;
			le = 2;
		}

		cout << " Enter pos of " << g << " ship(x,y,rotation(1-up, 2-down, 3-right, 4-left):" << endl;

		cout << " Warning! Your ship mustn't be outside of the field! If your ship is outside of the field or on position of another ship,you will have an opportunity to change it!" << endl;
		cout << " Write everything like in an instruction! " << endl;
		cin >> x >> y >> rotation;
		system("cls");
		if (rotation == 4 && x <= n - le) {
			for (int j = x; j < le + x;j++) {
				if (y == 0) {
					A1[j] = 1;
				}
				if (y == 1) {
					B1[j] = 1;
				}
				if (y == 2) {
					C1[j] = 1;
				}
				if (y == 3) {
					D1[j] = 1;
				}
				if (y == 4) {
					E1[j] = 1;
				}
				if (y == 5) {
					F1[j] = 1;
				}
				if (y == 6) {
					G1[j] = 1;
				}
				if (y == 7) {
					H1[j] = 1;
				}
				if (y == 8) {
					I1[j] = 1;
				}
				if (y == 8) {
					J1[j] = 1;
				}
			}
		}
		if (x>n - le) {
			g--;
		}
	}
}




