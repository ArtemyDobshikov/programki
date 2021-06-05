#include <iostream>
#include <cstring>

using namespace std;

int tabs = 0;
struct Branch {
	char Data;
	Branch* LBranch;
	Branch* RBranch;
};
void Add(char aData, Branch*& aBranch) {
	if (!aBranch) {
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LBranch = 0;
		aBranch->RBranch = 0;
		return;
	}
	else
		if (aBranch->Data > aData)
			Add(aData, aBranch->LBranch);
	if (aBranch->Data < aData)
		Add(aData, aBranch->RBranch);
}
void show(Branch* aBranch) {
	if (!aBranch) return;
	tabs++;
	show(aBranch->LBranch);
	for (int i = 0; i < tabs; i++) cout << " ";
	cout << aBranch->Data << endl;
	show(aBranch->RBranch);
	for (int i = 0; i < tabs; i++) cout << " ";
	cout << aBranch->Data << endl;
	tabs--;
}

void Free(Branch* aBranch) {
	if (!aBranch) return;
	Free(aBranch->LBranch);
	Free(aBranch->RBranch);
	delete aBranch;
}
int main() {
	Branch* source = 0;
	char s[] = "256789";
	for (int i = 0; s[i]; i++)
		Add(s[i], source);
	show(source);
	Free(source);
}