#include<iostream>
#include"clsMyString.h";
using namespace std;

int main() {
	clsMyString S1;
	cout << "\nS1 : " << S1.Value << endl;

	S1.Value = "Deemah";
	cout << "\nS1 : " << S1.Value << endl;

	S1.Value = "Deemah2";
	cout << "\nS1 : " << S1.Value << endl;

	S1.Value = "Deemah3";
	cout << "\nS1 : " << S1.Value << endl << endl;

	cout << "________________" << endl;
	cout << "Undo" << endl;

	S1.Undo();
	cout << "\nS1 After Undo1 : " << S1.Value << endl;
	S1.Undo();
	cout << "\nS1 After Undo2 : " << S1.Value << endl;
	S1.Undo();
	cout << "\nS1 After Undo3 : " << S1.Value << endl << endl;

	cout << "________________" << endl;
	cout << "Redo" << endl;

	S1.Redo();
	cout << "\nS1 After Redo1 : " << S1.Value << endl;
	S1.Redo();
	cout << "\nS1 After Redo2 : " << S1.Value << endl;
	S1.Redo();
	cout << "\nS1 After Redo3 : " << S1.Value << endl;
}
