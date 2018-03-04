#include <iostream>
#include <Windows.h>
#include <ctime>
#include <string>
using namespace std;
int main() {
	const int n = 10;
	int a = 0, x, y, rotation, le = 0, prov = 0, win = 0, win1 = 0;
	bool turn = 0;
	string player1, player2;
	string A0[n], B0[n], C0[n], D0[n], E0[n], F0[n], G0[n], H0[n], I0[n], J0[n], A01[n], B01[n], C01[n], D01[n], E01[n], F01[n], G01[n], H01[n], I01[n], J01[n];
	bool A[n], B[n], C[n], D[n], E[n], F[n], G[n], H[n], I[n], J[n], A1[n], B1[n], C1[n], D1[n], E1[n], F1[n], G1[n], H1[n], I1[n], J1[n];
	for (int i = 0;i < n;i++) {		//field1
		A[i] = 0;
		B[i] = 0;
		C[i] = 0;
		D[i] = 0;
		E[i] = 0;
		F[i] = 0;
		G[i] = 0;
		H[i] = 0;
		I[i] = 0;
		J[i] = 0	;	//field01
		A0[i] = " ";
		B0[i] = " ";
		C0[i] = " ";
		D0[i] = " ";
		E0[i] = " ";
		F0[i] = " ";
		G0[i] = " ";
		H0[i] = " ";
		I0[i] = " ";
		J0[i] = " ";	//field2
		A1[i] = 0;
		B1[i] = 0;
		C1[i] = 0;
		D1[i] = 0;
		E1[i] = 0;
		F1[i] = 0;
		G1[i] = 0;
		I1[i] = 0;
		J1[i] = 0;
		H1[i] = 0;     //field02
		A01[i] = " ";
		B01[i] = " ";
		C01[i] = " ";
		D01[i] = " ";
		E01[i] = " ";
		F01[i] = " ";
		G01[i] = " ";
		I01[i] = " ";
		J01[i] = " ";
		H01[i] = " ";
	}
	while (a != 1) {
		cout << "P";
		Sleep(50);
		cout << "r";
		Sleep(50);
		cout << "e";
		Sleep(50);
		cout << "s";
		Sleep(50);
		cout << "s";
		Sleep(50);
		cout << " ";
		Sleep(50);
		cout << "1";
		Sleep(100);
		cout << " ";
		Sleep(50);
		cout << "t";
		Sleep(50);
		cout << "o";
		Sleep(50);
		cout << " ";
		Sleep(50);
		cout << "S";
		Sleep(50);
		cout << "t";
		Sleep(50);
		cout << "a";
		Sleep(50);
		cout << "r";
		Sleep(50);
		cout << "t";
		Sleep(50);
		cout << "!";
		Sleep(50);
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
	while (a != 2) {
		cout << player1 << ", reeady to make move? 2 - to start" << endl;
		cin >> a;
		system("cls");
	}
	for (int g = 0;g<5;g++) {
		for (int i = n;i >= 0;i--) {
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
		cout << " Enter pos of " << g << " ship(x,y,rotation(1-up, 2-down, 3-left, 4-right):" << endl;
		cout << " Warning! Your ship mustn't be outside of the field! If your ship is outside of the field or on position of another ship,you will have an opportunity to change it!" << endl;
		cout << " Write everything like in an instruction! " << endl;
		prov = g - 1;
		cin >> x >> y >> rotation;
		system("cls");
		if (rotation == 4) {
			if (x>n - le) {
				g = prov;
			}
			else {
				for (int j = x; j < le + x;j++) {
					if (y == 0) {
						if (A[j] == 1) {
							g = prov;
						}
						A[j] = 1;
					}
					if (y == 1) {
						if (B[j] == 1) {
							g = prov;
						}
						B[j] = 1;
					}
					if (y == 2) {
						if (C[j] == 1) {
							g = prov;
						}
						C[j] = 1;
					}
					if (y == 3) {
						if (D[j] == 1) {
							g = prov;
						}
						D[j] = 1;
					}
					if (y == 4) {
						if (E[j] == 1) {
							g = prov;
						}
						E[j] = 1;
					}
					if (y == 5) {
						if (F[j] == 1) {
							g = prov;
						}
						F[j] = 1;
					}
					if (y == 6) {
						if (G[j] == 1) {
							g = prov;
						}
						G[j] = 1;
					}
					if (y == 7) {
						if (H[j] == 1) {
							g = prov;
						}
						H[j] = 1;
					}
					if (y == 8) {
						if (I[j] == 1) {
							g = prov;
						}
						I[j] = 1;
					}
					if (y == 8) {
						if (J[j] == 1) {
							g = prov;
						}
						J[j] = 1;
					}
				}
			}
		}
		if (rotation == 3) {
			if (x <le) {
				g = prov;
			}
			else {
				for (int j = x; j > x - le;j--) {
					if (y == 0) {
						if (A[j] == 1) {
							g = prov;
						}
						A[j] = 1;
					}
					if (y == 1) {
						if (B[j] == 1) {
							g = prov;
						}
						B[j] = 1;
					}
					if (y == 2) {
						if (C[j] == 1) {
							g = prov;
						}
						C[j] = 1;
					}
					if (y == 3) {
						if (D[j] == 1) {
							g = prov;
						}
						D[j] = 1;
					}
					if (y == 4) {
						if (E[j] == 1) {
							g = prov;
						}
						E[j] = 1;
					}
					if (y == 5) {
						if (F[j] == 1) {
							g = prov;
						}
						F[j] = 1;
					}
					if (y == 6) {
						if (G[j] == 1) {
							g = prov;
						}
						G[j] = 1;
					}
					if (y == 7) {
						if (H[j] == 1) {
							g = prov;
						}
						H[j] = 1;
					}
					if (y == 8) {
						if (I[j] == 1) {
							g = prov;
						}
						I[j] = 1;
					}
					if (y == 8) {
						if (J[j] == 1) {
							g = prov;
						}
						J[j] = 1;
					}
				}
			}
		}
		if (rotation == 1) {
			if (y + le >9) {
				g = prov;
			}
			else {
				for (int j = y; j <y + le;j++) {
					if (j == 0) {
						if (A[x] == 1) {
							g = prov;
						}
						A[x] = 1;
					}
					if (j == 1) {
						if (B[x] == 1) {
							g = prov;
						}
						B[x] = 1;
					}
					if (j == 2) {
						if (C[x] == 1) {
							g = prov;
						}
						C[x] = 1;
					}
					if (j == 3) {
						if (D[x] == 1) {
							g = prov;
						}
						D[x] = 1;
					}
					if (j == 4) {
						if (E[x] == 1) {
							g = prov;
						}
						E[x] = 1;
					}
					if (j == 5) {
						if (F[x] == 1) {
							g = prov;
						}
						F[x] = 1;
					}
					if (j == 6) {
						if (G[x] == 1) {
							g = prov;
						}
						G[x] = 1;
					}
					if (j == 7) {
						if (H[x] == 1) {
							g = prov;
						}
						H[x] = 1;
					}
					if (j == 8) {
						if (I[x] == 1) {
							g = prov;
						}
						I[x] = 1;
					}
					if (j == 8) {
						if (J[x] == 1) {
							g = prov;
						}
						J[x] = 1;
					}
				}
			}
		}
		if (rotation == 2) {
			if (y - le < 0) {
				g = prov;
			}
			else {
				for (int j = y; j > y - le;j--) {
					if (j == 0) {
						if (A[x] == 1) {
							g = prov;
						}
						A[x] = 1;
					}
					if (j == 1) {
						if (B[x] == 1) {
							g = prov;
						}
						B[x] = 1;
					}
					if (j == 2) {
						if (C[x] == 1) {
							g = prov;
						}
						C[x] = 1;
					}
					if (j == 3) {
						if (D[x] == 1) {
							g = prov;
						}
						D[x] = 1;
					}
					if (j == 4) {
						if (E[x] == 1) {
							g = prov;
						}
						E[x] = 1;
					}
					if (j == 5) {
						if (F[x] == 1) {
							g = prov;
						}
						F[x] = 1;
					}
					if (j == 6) {
						if (G[x] == 1) {
							g = prov;
						}
						G[x] = 1;
					}
					if (j == 7) {
						if (H[x] == 1) {
							g = prov;
						}
						H[x] = 1;
					}
					if (j == 8) {
						if (I[x] == 1) {
							g = prov;
						}
						I[x] = 1;
					}
					if (j == 8) {
						if (J[x] == 1) {
							g = prov;
						}
						J[x] = 1;
					}
				}
			}
		}
	}
	for (int i = 0;i<3;i++) {           	//player2
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
	while (a != 3) {
		cout << player2 << ", reeady to make move? 3 - to start" << endl;
		cin >> a;
		system("cls");
	}
	for (int g = 0;g<5;g++) {
		for (int i = n;i >=0;i--) {
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
		if (g >= 3) {
            cout << g+1<<"th ship takes 2 empty fields!" << endl;
			le = 2;
		}
		cout << " Enter pos of " << g << " ship(x,y,rotation(1-up, 2-down, 3-left, 4-right):" << endl;
		cout << " Warning! Your ship mustn't be outside of the field! If your ship is outside of the field or on position of another ship,you will have an opportunity to change it!" << endl;
		cout << " Write everything like in an instruction! " << endl;
		cin >> x >> y >> rotation;
		system("cls");
		prov = g - 1;
		if (rotation == 4) {
			if (x>n - le) {
				g = prov;
			}
			else {
				for (int j = x; j < le + x;j++) {
					if (y == 0) {
						if (A1[j] == 1) {
							g = prov;
						}
						A1[j] = 1;

					}
					if (y == 1) {
						if (B1[j] == 1) {
							g = prov;
						}
						B1[j] = 1;
					}
					if (y == 2) {
						if (C1[j] == 1) {
							g = prov;
						}
						C1[j] = 1;
					}
					if (y == 3) {
						if (D1[j] == 1) {
							g = prov;
						}
						D1[j] = 1;
					}
					if (y == 4) {
						if (E1[j] == 1) {
							g = prov;
						}
						E1[j] = 1;
					}
					if (y == 5) {
						if (F1[j] == 1) {
							g = prov;
						}
						F1[j] = 1;
					}
					if (y == 6) {
						if (G1[j] == 1) {
							g = prov;
						}
						G1[j] = 1;
					}
					if (y == 7) {
						if (H1[j] == 1) {
							g = prov;
						}
						H1[j] = 1;
					}
					if (y == 8) {
						if (I1[j] == 1) {
							g = prov;
						}
						I1[j] = 1;
					}
					if (y == 8) {
						if (J1[j] == 1) {
							g = prov;
						}
						J1[j] = 1;
					}
				}
			}
		}
		if (rotation == 3) {
			if (x <le) {
				g = prov;
			}
			else {
				for (int j = x; j > x - le;j--) {
					if (y == 0) {
						if (A1[j] == 1) {
							g = prov;
						}
						A1[j] = 1;
					}
					if (y == 1) {
						if (B1[j] == 1) {
							g = prov;
						}
						B1[j] = 1;
					}
					if (y == 2) {
						if (C1[j] == 1) {
							g = prov;
						}
						C1[j] = 1;
					}
					if (y == 3) {
						if (D1[j] == 1) {
							g = prov;
						}
						D1[j] = 1;
					}
					if (y == 4) {
						if (E1[j] == 1) {
							g = prov;
						}
						E1[j] = 1;
					}
					if (y == 5) {
						if (F1[j] == 1) {
							g = prov;
						}
						F1[j] = 1;
					}
					if (y == 6) {
						if (G1[j] == 1) {
							g = prov;
						}
						G1[j] = 1;
					}
					if (y == 7) {
						if (H1[j] == 1) {
							g = prov;
						}
						H1[j] = 1;
					}
					if (y == 8) {
						if (I1[j] == 1) {
							g = prov;
						}
						I1[j] = 1;
					}
					if (y == 8) {
						if (J1[j] == 1) {
							g = prov;
						}
						J1[j] = 1;
					}
				}
			}
		}
		if (rotation == 1) {
			if (y + le >9) {
				g = prov;
			}
			else {
				for (int j = y; j <y + le;j++) {
					if (j == 0) {
						if (A1[x] == 1) {
							g = prov;
						}
						A1[x] = 1;
					}
					if (j == 1) {
						if (B1[x] == 1) {
							g = prov;
						}
						B1[x] = 1;
					}
					if (j == 2) {
						if (C1[x] == 1) {
							g = prov;
						}
						C1[x] = 1;
					}
					if (j == 3) {
						if (D1[x] == 1) {
							g = prov;
						}
						D1[x] = 1;
					}
					if (j == 4) {
						if (E1[x] == 1) {
							g = prov;
						}
						E1[x] = 1;
					}
					if (j == 5) {
						if (F1[x] == 1) {
							g = prov;
						}
						F1[x] = 1;
					}
					if (j == 6) {
						if (G1[x] == 1) {
							g = prov;
						}
						G1[x] = 1;
					}
					if (j == 7) {
						if (H1[x] == 1) {
							g = prov;
						}
						H1[x] = 1;
					}
					if (j == 8) {
						if (I1[x] == 1) {
							g = prov;
						}
						I1[x] = 1;
					}
					if (j == 8) {
						if (J1[x] == 1) {
							g = prov;
						}
						J1[x] = 1;
					}
				}
			}
		}
		if (rotation == 2) {
			if (y - le < 0) {
				g = prov;
			}
			else {
				for (int j = y; j > y - le;j--) {
					if (j == 0) {
						if (A1[x] == 1) {
							g = prov;
						}
						A1[x] = 1;
					}
					if (j == 1) {
						if (B1[x] == 1) {
							g = prov;
						}
						B1[x] = 1;
					}
					if (j == 2) {
						if (C1[x] == 1) {
							g = prov;
						}
						C1[x] = 1;
					}
					if (j == 3) {
						if (D1[x] == 1) {
							g = prov;
						}
						D1[x] = 1;
					}
					if (j == 4) {
						if (E1[x] == 1) {
							g = prov;
						}
						E1[x] = 1;
					}
					if (j == 5) {
						if (F1[x] == 1) {
							g = prov;
						}
						F1[x] = 1;
					}
					if (j == 6) {
						if (G1[x] == 1) {
							g = prov;
						}
						G1[x] = 1;
					}
					if (j == 7) {
						if (H1[x] == 1) {
							g = prov;
						}
						H1[x] = 1;
					}
					if (j == 8) {
						if (I1[x] == 1) {
							g = prov;
						}
						I1[x] = 1;
					}
					if (j == 8) {
						if (J1[x] == 1) {
							g = prov;
						}
						J1[x] = 1;
					}
				}
			}
		}
	}
	while (win != 14 || win1 != 14) {
		if (turn == 0) {
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
						cout << A01[j] << "|";
					}
					if (i == 1) {
						cout << B01[j] << "|";
					}
					if (i == 2) {
						cout << C01[j] << "|";
					}
					if (i == 3) {
						cout << D01[j] << "|";
					}
					if (i == 4) {
						cout << E01[j] << "|";
					}
					if (i == 5) {
						cout << F01[j] << "|";
					}
					if (i == 6) {
						cout << G01[j] << "|";
					}
					if (i == 7) {
						cout << H01[j] << "|";
					}
					if (i == 8) {
						cout << I01[j] << "|";
					}
					if (i == 9) {
						cout << J01[j] << "|";
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
			cout << "Now you need to hit your opponent's ships!Y and X mustn't be smaller than 0 or bigger, than 9!" << endl;
			cout << "If you don't follow the instruction, your turn will end and it will be your opponent's turn!" << endl;
			cout << "Enter posititons(x,y): ";
			cin >> x >> y;
			if (y == 0) {
				if (A1[x] == 1) {
					A01[x] ="X";
					A1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					A01[x] = "O";
					turn = 1;
				}
			}
			if (y == 1) {
				if (B1[x] == 1) {
					B01[x] = "X";
					B1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					B01[x] = "O";
					turn = 1;
				}
			}
			if (y == 2) {
				if (C1[x] == 1) {
					C01[x] = "X";
					C1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					C01[x] = "O";
					turn = 1;
				}
			}
			if (y == 3) {
				if (D1[x] == 1) {
					D01[x] = "X";
					D1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					D01[x] = "O";
					turn = 1;
				}
			}
			if (y == 4) {
				if (E1[x] == 1) {
					E01[x] = "X";
					E1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					E01[x] = "O";
					turn = 1;
				}
			}
			if (y == 5) {
				if (F1[x] == 1) {
					F01[x] = "X";
					F1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					F01[x] = "O";
					turn = 1;
				}
			}
			if (y == 6) {
				if (G1[x] == 1) {
					G01[x] = "X";
					G1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					G01[x] = "O";
					turn = 1;
				}
			}
			if (y == 7) {
				if (H1[x] == 1) {
					H01[x] = "X";
					H1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					H01[x] = "O";
					turn = 1;
				}
			}
			if (y == 8) {
				if (I1[x] == 1) {
					I01[x] = "X";
					I1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					I01[x] = "O";
					turn = 1;
				}
			}
			if (y == 9) {
				if (J1[x] == 1) {
					J01[x] = "X";
					J1[x] = 0;
					turn = 0;
					win++;
				}
				else {
					J01[x] = "O";
					turn = 1;
				}
			}
			system("cls");
		}
		else {
			for (int i = 0;i<3;i++) {           //player2's turn
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
						cout << A0[j] << "|";
					}
					if (i == 1) {
						cout << B0[j] << "|";
					}
					if (i == 2) {
						cout << C0[j] << "|";
					}
					if (i == 3) {
						cout << D0[j] << "|";
					}
					if (i == 4) {
						cout << E0[j] << "|";
					}
					if (i == 5) {
						cout << F0[j] << "|";
					}
					if (i == 6) {
						cout << G0[j] << "|";
					}
					if (i == 7) {
						cout << H0[j] << "|";
					}
					if (i == 8) {
						cout << I0[j] << "|";
					}
					if (i == 9) {
						cout << J0[j] << "|";
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
			cout << "Now you need to hit your opponent's ships!Y and X mustn't be smaller than 0 or bigger, than 9!" << endl;
			cout << "If you don't follow the instruction, your turn will end and it will be your opponent's turn!" << endl;
			cout << "Enter posititons(x,y): ";
			cin >> x >> y;
			if (y == 0) {
				if (A[x] == 1) {
					A0[x] = "X";
					A[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					A0[x] = "O";
					turn = 0;
				}
			}
			if (y == 1) {
				if (B[x] == 1) {
					B0[x] = "X";
					B[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					B0[x] = "O";
					turn = 0;
				}
			}
			if (y == 2) {
				if (C[x] == 1) {
					C0[x] = "X";
					C[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					C0[x] = "O";
					turn = 0;
				}
			}
			if (y == 3) {
				if (D[x] == 1) {
					D0[x] = "X";
					D[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					D0[x] = "O";
					turn = 0;
				}
			}
			if (y == 4) {
				if (E[x] == 1) {
					E0[x] = "X";
					E[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					E0[x] = "O";
					turn = 0;
				}
			}
			if (y == 5) {
				if (F[x] == 1) {
					F0[x] = "X";
					F[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					F0[x] = "O";
					turn = 0;
				}
			}
			if (y == 6) {
				if (G[x] == 1) {
					G0[x] = "X";
					G[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					G0[x] = "O";
					turn = 0;
				}
			}
			if (y == 7) {
				if (H[x] == 1) {
					H0[x] = "X";
					H[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					H0[x] = "O";
					turn = 0;
				}
			}
			if (y == 8) {
				if (I[x] == 1) {
					I0[x] = "X";
					I[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					I0[x] = "O";
					turn = 0;
				}
			}
			if (y == 9) {
				if (J[x] == 1) {
					J0[x] = "X";
					J[x] = 0;
					turn = 1;
					win1++;
				}
				else {
					J0[x] = "O";
					turn = 0;
				}
			}
			if (win1 == 14) {
				cout << "Congratulations, " << player2 << ",you won the round!";
			}
			if (win == 14) {
				cout << "Congratulations, " << player1 << ",you won the round!";
			}
		}
	}
}





