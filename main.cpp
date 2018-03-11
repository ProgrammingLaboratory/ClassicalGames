#include <iostream>
#include <Windows.h>
#include <ctime>
#include <string>
using namespace std;

void pt(string name){
for (int i = 0;i<3;i++) {
		cout << name << "'s turn.";
		Sleep(100);
		system("cls");
		cout << name << "'s turn .";
		Sleep(100);
		system("cls");
		cout << name << "'s turn  .";
		Sleep(100);
		system("cls");
	}
}
int main() {
	const int n = 10;
	int a = 0, x, y, rotation, le = 0, prov = 0, win = 0, win1 = 0;
	bool turn = 0;
	string player1, player2;

	string A0[n*n], A01[n*n], A[n*n], A1[n*n];
	for (int i = 0;i < n*n;i++) {
		A[i] = " ";     //field01
		A0[i] = " ";    //field01 but hidden
		A1[i] = " ";    //field02
		A01[i] = " ";   //field02 but hidden
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
		cout << "!"<< endl;;
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
	pt(player1);
	while (a != 2) {
		cout << player1 << ", reeady to make move? 2 - to start" << endl;
		cin >> a;
		system("cls");
	}

	for (int g = 0;g < 6;g++) {
		if (g != 5) {
			for (int i = n - 1;i >= 0;i--) {
				cout << i;
				for (int j = 0;j < n;j++) {
					cout << "|" << A[j + (n*i)];
				}
				cout << "|";
				cout << endl;
				for (int k = 0;k < n+1;k++) {
					cout << "-+";
				}
				cout << endl;
			}
			cout << " |";
			for (int j = 0;j < n;j++) {
				cout << j<<"|";
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
				cout << g + 1 << "th ship takes 2 empty fields!" << endl;
				le = 2;
			}
			cout << " Warning! Your ship mustn't be outside of the field! If your ship is outside of the field or on position of another ship,you will have an opportunity to change it!" << endl;
			cout << " Write everything like in an instruction! " << endl;
            cout << " Enter pos of " << g << " ship(x,y,rotation(1-up, 2-down, 3-left, 4-right):" << endl;
			prov = g - 1;
			cin >> x >> y >> rotation;
			system("cls");
			if (rotation == 1) {
				if (y + le > 9) {
					g = prov;
				}
				else {
					for (int j = y; j < y + le;j++) {
						if (A[x + (j*n)] == "1") {
							g = prov;
						}
					}
					if (g != prov) {
						for (int j = y; j < y + le;j++) {
							A[x + (j*n)] = "1";
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
						if (A[x + (j*n)] == "1") {
							g = prov;
						}
					}
					if (g != prov) {
						for (int j = y; j > y - le;j--) {
							A[x + (n*j)] = "1";
						}
					}
				}
			}
			if (rotation == 3) {
				if (x < le) {
					g = prov;
				}
				else {
					for (int j = x; j > x - le;j--) {
						if (A[j + (n*y)] == "1") {
							g = prov;
						}
					}
					if (g != prov) {
						for (int j = x; j > x - le;j--) {
							A[j + (n*y)] = "1";
						}
					}
				}
			}
			if (rotation == 4) {
				if (x > n - le) {
					g = prov;
				}
				else {
					for (int j = x; j < le + x;j++) {
						if (A[j + (n*y)] == "1") {
							g = prov;
						}
					}
					if (g != prov) {
						for (int j = x; j < le + x;j++) {
							A[j + (n*y)] = "1";
						}
					}
				}
			}
		}else {
		for (int i = n - 1;i >= 0;i--) {
			cout << i;
			for (int j = 0;j < n;j++) {
				cout << "|" << A[j + (n*i)];
			}
			cout << "|";
			cout << endl;
			cout << " +";
			for (int k = 0;k < n;k++) {
				cout << "-+";
			}
			cout << endl;
		}
		cout << " ";
		for (int j = 0;j < n;j++) {
			cout << " " << j;
		}
		a=0;
		cout << endl;
		cout << "1 - to finish!2 - to reset!"<<endl;
		cin >> a;
		if(a==1){
            g++;
            a=0;
		}else{
            for (int i = 0;i < n*n;i++) A[i] = " ";
            g=-1;
            system("cls");
		}
		}
	}
	pt(player2);
	while (a != 3) {
		cout << player2 << ", reeady to make move? 3 - to start" << endl;
		cin >> a;
		system("cls");
	}
	for (int g = 0;g < 6;g++) {
		if (g != 5) {
			for (int i = n - 1;i >= 0;i--) {
				cout << i;
				for (int j = 0;j < n;j++) {
					cout << "|" << A1[j + (n*i)];
				}
				cout << "|";
				cout << endl;
				for (int k = 0;k < n+1;k++) {
					cout << "-+";
				}
				cout << endl;
			}
			cout << " |";
			for (int j = 0;j < n;j++) {
				cout << j<<"|";
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
				cout << g + 1 << "th ship takes 2 empty fields!" << endl;
				le = 2;
			}
			cout << " Warning! Your ship mustn't be outside of the field! If your ship is outside of the field or on position of another ship,you will have an opportunity to change it!" << endl;
			cout << " Write everything like in an instruction! " << endl;
            cout << " Enter pos of " << g << " ship(x,y,rotation(1-up, 2-down, 3-left, 4-right):" << endl;
			prov = g - 1;
			cin >> x >> y >> rotation;
			system("cls");
			if (rotation == 1) {
				if (y + le > 9) {
					g = prov;
				}
				else {
					for (int j = y; j < y + le;j++) {
						if (A1[x + (j*n)] == "1") {
							g = prov;
						}
					}
					if (g != prov) {
						for (int j = y; j < y + le;j++) {
							A1[x + (j*n)] = "1";
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
						if (A1[x + (j*n)] == "1") {
							g = prov;
						}
					}
					if (g != prov) {
						for (int j = y; j > y - le;j--) {
							A1[x + (n*j)] = "1";
						}
					}
				}
			}
			if (rotation == 3) {
				if (x < le) {
					g = prov;
				}
				else {
					for (int j = x; j > x - le;j--) {
						if (A1[j + (n*y)] == "1") {
							g = prov;
						}
					}
					if (g != prov) {
						for (int j = x; j > x - le;j--) {
							A1[j + (n*y)] = "1";
						}
					}
				}
			}
			if (rotation == 4) {
				if (x > n - le) {
					g = prov;
				}
				else {
					for (int j = x; j < le + x;j++) {
						if (A1[j + (n*y)] == "1") {
							g = prov;
						}
					}
					if (g != prov) {
						for (int j = x; j < le + x;j++) {
							A1[j + (n*y)] = "1";
						}
					}
				}
			}
		}else {
		for (int i = n - 1;i >= 0;i--) {
			cout << i;
			for (int j = 0;j < n;j++) {
				cout << "|" << A[j + (n*i)];
			}
			cout << "|";
			cout << endl;
			cout << " +";
			for (int k = 0;k < n;k++) {
				cout << "-+";
			}
			cout << endl;
		}
		cout << " ";
		for (int j = 0;j < n;j++) {
			cout << " " << j;
		}
		a=0;
		cout << endl;
		cout << "1 - to finish!2 - to reset!"<<endl;
		cin >> a;
		if(a==1){
            g++;
            a=0;
		}else{
            for (int i = 0;i < n*n;i++) A1[i] = " ";
            g=-1;
            system("cls");
		}
		}
	}

	while (win != 14 || win1 != 14) {
		if (turn == 0) {
			pt(player1);
			le = 0;
            cout<<"Your score is: "<<win<<endl;
			for (int i = n - 1;i >= 0;i--) {
				cout << i;
				for (int j = 0;j < n;j++) {
					cout << "|" << A01[j + (n*i)];
				}
				cout << "|";
				cout << endl;
				for (int k = 0;k < n+1;k++) {
					cout << "-+";
				}
				cout << endl;
			}
			cout << " |";
			for (int j = 0;j < n;j++) {
				cout << j<<"|";

			}
			cout << endl;
			cout << "Now you need to hit your opponent's ships!Y and X mustn't be smaller than 0 or bigger, than 9!" << endl;
			cout << "If you don't follow the instruction, your turn will end and it will be your opponent's turn!" << endl;

			cout << "Enter positions(x,y): ";
			cin >> x >> y;
			if (A1[x + (y * 10)] == "1") {
				A01[x + (y * 10)] = "X";
				A1[x + (y * 10)] = "2";
				turn = 0;
				win++;
			}
			else {
                if (A1[x + (y * 10)] != "2") {
                A01[x + (y * 10)] = "O";
                }
				turn = 1;

			}
			system("cls");
		}
		else {

			pt(player2);
			le = 0;
			for (int i = n - 1;i >= 0;i--) {
				cout << i;
				for (int j = 0;j < n;j++) {
					cout << "|" << A0[j + (n*i)];
				}
				cout << "|";
				cout << endl;
				for (int k = 0;k < n+1;k++) {
					cout << "-+";
				}
				cout << endl;
			}
			cout << " |";
			for (int j = 0;j < n;j++) {
				cout << j<<"|";

			}
			cout << endl;
			cout << "Now you need to hit your opponent's ships!Y and X mustn't be smaller than 0 or bigger, than 9!" << endl;
			cout << "If you don't follow the instruction, your turn will end and it will be your opponent's turn!" << endl;

			cout << "Enter positions(x,y): ";
			cin >> x >> y;
			if (A[x + (y * 10)] == "1") {
				A0[x] = "X";
				A[x] = "2";
				turn = 0;
				win1++;
			}system("cls");
			else {
				if (A[x] == " ") {
					A0[x] = "O";
					turn = 1;
				}
			}
			system("cls");
		}
	}
	if (win1 == 14) {
		cout << "Congratulations, " << player2 << ",you won the round!";
	}
	if (win == 14) {
		cout << "Congratulations, " << player1 << ",you won the round!";
	}

}





