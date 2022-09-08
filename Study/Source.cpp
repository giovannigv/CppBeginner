#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

#include "Functions.h"

#include "Account.h"

int main() {
	cout << "Hello World \n";
	int num = 10;
	double fnum = 1.1;
	string str;
	//  cin >> str;
	getline(cin, str);
	cout << add(num, fnum);
	if (str.length() > 2) {
		cout << "Longao";
	}

	vector<int> nums;
	for (int i = 0; i < 10; i++) {
		nums.push_back(i);
	}

	for (auto item : nums) {
		cout << item << " ";
	}

	cout << '\n';

	vector<string> words;
	sort(begin(nums), end(nums));

	int found = count(begin(nums), end(nums),3); // quantas vezes encontra o 3 nesse vetor
	cout << found << '\n';
	nums[0] = 7;

	//Classes
	Account a1;
	a1.Deposit(90);

	cout << "Deposito de 90" << "Saldo: " << a1.GetBalance() << "\n";
	for (auto s: a1.Report()) {
		cout << s << '\n';
	}

	a1.Withdraw(50);
	if (a1.Withdraw(100)) {
		cout << "Foi";
	}

	cout << "After withdrawing 50 e depois 100 " << '\n';
	for (auto s : a1.Report()) {
		cout << s << '\n';
	}

	return 0;
}