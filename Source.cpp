#include <iostream>
#include <Windows.h>
#include <ctime>
#include <string>
using namespace std;
void instructions2(){		// инструкции во время боя
cout << "Now you need to hit your opponent's ships!Y and X mustn't be smaller than 0 or bigger, than 9!" << endl;
cout << "If you don't follow the instruction, your turn will end and it will be your opponent's turn!" << endl;
cout << " Write everything like in an instruction! If you write incorrect number/letter game crashes!!!" << endl;
cout << "Enter positions(number,letter): ";
}
void instructions(int g){	// инструкции при расстановке кораблей 
            if (g == 0) {	// переменная Г отвечает за номер корабля
            cout << "1st ship takes 4 empty fields!" << endl;
			}
			if (g == 1) {
				cout << "2nd ship takes 3 empty fields!" << endl;
			}
			if (g == 2) {
				cout << "3rd ship takes 3 empty fields!" << endl;
			}
			if (g >= 3) {
				cout << g + 1 << "th ship takes 2 empty fields!" << endl;
			}
			cout << " Warning! Your ship mustn't be outside of the field! If your ship is outside of the field or on position of another ship,you will have an opportunity to change it!" << endl;
			cout << " Write everything like in an instruction! If you write incorrect number/letter game crashes!!!" << endl;
            cout << " Enter pos of " << g << " ship(number,letter,rotation(1-up, 2-down, 3-left, 4-right):" << endl;
}
void pt(string name){		//функция, которая имитирует загрузку
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
void r(string name){		//функция, которая спрашивает у игрока готовность сделать ход
int a=0;
while (a != 2) {
		cout << name << ", reeady to make move? 2 - to start" << endl;
		cin >> a;
		system("cls");
}
}
int main() {
	const int n = 10;
	int  x, y, rotation, le = 0, prov = 0, win = 0, win1 = 0,a=0,g=0;  //переменная le используется для длины корабля, win и win1 для подсчета очков игроков
	bool turn = 0; // переменная для проверки того, кто сейчас ходит
	char yn; // используется для проверки: играет ли игрок против человека или нет
	string player1, player2,pos2=" ",Start[16]={"P","r","e","s","s"," ","1"," ","t","o"," ","S","t","a","r","t"},X[10]={"A","B","C","D","E","F","G","H","I","J"},A0[n*n], A01[n*n], A[n*n], A1[n*n];
	for (int i = 0;i < n*n;i++) {
		A[i] = " ";     //поле игрока 1 при заполнении его кораблями
		A0[i] = " ";    //поле игрока 1 при бое
		A1[i] = " ";    //поле игрока 2 при заполнении его кораблями
		A01[i] = " ";   //поле игрока 2 при бое
	}
	while (a != 1) {
        for(int i=0;i<16;i++){
		cout << Start[i];
		Sleep(50);
        }
        cout<<"!"<<endl;
		cin >> a;
		system("cls");
	}
	do {
		cout << "Do you want to play against AI or against your friend?y-AI,n-friend" << " (y/n): ";
		cin >> yn;
        system("cls");
	} while (yn != 'y' && yn != 'n');
	cout << "Enter Player1 name: ";
	cin >> player1;
	system("cls");
	if(yn=='n'){
	cout << "Enter Player2 name: ";
	cin >> player2;
	system("cls");
	}
	pt(player1);
	r(player1);
	do{
            for(int k=0;k<5;k++){
			for (int i = n - 1;i >= 0;i--) {
                cout.width(2);
				cout << i+1;
				for (int j = 0;j < n;j++) {
					cout << "|" << A[j + (n*i)];
				}
				cout << "|";
				cout << endl<<"-";
				for (int k = 0;k < n+1;k++) {
					cout << "-+";
				}
				cout << endl;
			}
			cout << "  |";
			for (int j = 0;j < n;j++) {
				cout << X[j]<<"|";
			}
			g=k; //g в данном случае используется как счетчик для цикла do-while
			cout << endl;
            if (g == 0) le=4;
            if (g == 2) le=3;
            if (g == 1) le=3;
            if (g >= 3) le=2;
			instructions(g);
			prov = g - 1;	//prov --это проверка, которая при пересечении двух кораблй будет давать возможность расположить корабль еще раз
			cin >> y >> pos2 >> rotation;
			system("cls");
			y--;
			for(int j=0;j<n;j++){
                if(pos2==X[j]){
                    x=j;
                }
			}
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
		}
		system("cls");
	}while (g!=5);
	pt(player2);
	if(yn=='n')r(player2);
	g=0;
	do{
            for(int k=0;k<5;k++){
            if(yn=='n'){
			for (int i = n - 1;i >= 0;i--) {
                cout.width(2);
				cout << i+1;
				for (int j = 0;j < n;j++) {
					cout << "|" << A1[j + (n*i)];
				}
				cout << "|";
				cout << endl<<"-";
				for (int k = 0;k < n+1;k++) {
					cout << "-+";
				}
				cout << endl;
			}
			cout << "  |";
			for (int j = 0;j < n;j++) {
				cout << X[j]<<"|";
			}
			g=k;	//g в данном случае используется как счетчик для цикла do-while
			if (g == 0) le=4;
            if (g == 2) le=3;
            if (g == 1) le=3;
            if (g >= 3) le=2;
            cout<<endl;
			instructions(g);
			prov = g - 1;//prov --это проверка, которая при пересечении двух кораблй будет давать возможность расположить корабль еще раз
			cin >> y >> pos2 >> rotation;
			system("cls");
			y--;
			for(int j=0;j<n;j++){
                if(pos2==X[j]){
                    x=j;
                }
			}
            }else{
			y=rand() % 10;
			x=rand() % 10;
			rotation=rand() % 5;
			}
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
        }
			a=0;
		cout << endl;
		if(yn=='n'){
		cout << "1 - to finish!2 - to reset!"<<endl;
		cin >> a;
		if(a==1){
            g++;
            a=0;
		}else{
            for (int i = 0;i < n*n;i++) A1[i] = " ";
            g=-1;
		}
		system("cls");
		}else{
            g++;
		}
        }while (g!=5);
	do{
		if (turn == 0) {
			pt(player1);
			le = 0;
            cout<<player1<<",your score is: "<<win<<endl;
			for (int i = n - 1;i >= 0;i--) {
				cout.width(2);
				cout << i+1;
				for (int j = 0;j < n;j++) {
					cout << "|" << A01[j + (n*i)];
				}
				cout << "|";
				cout << endl<<"-";
				for (int k = 0;k < n+1;k++) {
					cout << "-+";
				}
				cout << endl;
			}
			cout << " |";
			for (int j = 0;j < n;j++) {
				cout << X[j]<<"|";
			}
			cout << endl;
			instructions2();
            cin >> y >> pos2;
            for(int j=0;j<n;j++){
                if(pos2==X[j]){
                    x=j;
                }
			}
            y--;
			if (A1[x + (y * 10)] == "1") {
				A01[x + (y * 10)] = "X";
				A1[x + (y * 10)] = "2";
				turn = 0;
				win++;
			}
			else {
                if (A1[x + (y * 10)] != "2") {
                A01[x + (y * 10)] = "O";
				A1[x + (y * 10)] != "2";
                }
				turn = 1;
			}
			system("cls");
		}
		else {
			pt(player2);
			le = 0;
			cout<<player2<<",your score is: "<<win1<<endl;
			for (int i = n - 1;i >= 0;i--) {
                cout.width(2);
				cout << i+1;
				for (int j = 0;j < n;j++) {
					cout << "|" << A0[j + (n*i)];
				}
				cout << "|";
				cout << endl<<"-";
				for (int k = 0;k < n+1;k++) {
					cout << "-+";
				}
				cout << endl;
			}
			cout << " |";
			for (int j = 0;j < n;j++) {
				cout << X[j]<<"|";
			}
			cout << endl;
            if(yn=='n'){
            instructions2();
            cin >> y >> pos2;
            for(int j=0;j<n;j++){
                if(pos2==X[j]){
                    x=j;
                }
			}
			y--;
            }else{
			y=rand() % 10;
			x=rand() % 10;
			}
			if (A[x + (y * 10)] == "1") {
				A0[x] = "X";
				A[x] = "2";
				turn = 0;
				win1++;
				system("cls");
			}else {
				if (A[x + (y * 10)] != "2") {
					A0[x + (y * 10)] = "O";
					A[x + (y * 10)] != "2";
				}
				turn = 1;
			}
			system("cls");
			}
			system("cls");
		}
	while (win != 14 && win1 != 14);
	if (win1 == 14) {
		cout << "Congratulations, " << player2 << ",you won the round!";
	}
	else {
		cout << "Congratulations, " << player1 << ",you won the round!";
	}
}