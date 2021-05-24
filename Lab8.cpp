#include <iostream>
using namespace std;
int space = 0;

class wood {
public:
	int Data;
	wood* Left;
	wood* Right;
	void addition(int aData, wood*& aBranch);
};
void wood::addition(int aData, wood*& aBranch) {
	if (!aBranch) {
		aBranch = new wood;
		aBranch->Data = aData;
		aBranch->Left = 0;
		aBranch->Right = 0;
		return;
	}
	else
		if (aBranch->Data > aData)
			addition(aData, aBranch->Left);
		else
			addition(aData, aBranch->Right);
}
void free(wood* aBranch) {
	if (!aBranch)
		return;
	free(aBranch->Left);
	free(aBranch->Right);
	delete aBranch;
	return;
}
void show(wood* aBranch) {
	if (!aBranch)
		return;
	space += 3;
	show(aBranch->Left);

	for (int i = 0; i < space; i++)
		cout << " ";
	cout << aBranch->Data << endl;
	show(aBranch->Right);
	space -= 3;
	return;
}
int main() {
	setlocale(LC_ALL, "Ru");
	wood obj;
	wood* base = 0;
	obj.addition(6, base); // тут задются значения
	obj.addition(4, base);
	obj.addition(7, base);
	obj.addition(9, base);
	obj.addition(10, base);
	obj.addition(20, base);
	show(base);
	free(base);
}