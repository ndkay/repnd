// code.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>




using namespace std;
int main()
{

	string word;
	cin >> word;
	string wordUpper;
	string result = "";

		transform(word.begin(), word.end(), back_inserter(wordUpper), toupper);

		for (int i = 0; i < wordUpper.length(); i++) {
			size_t n = count(wordUpper.begin(), wordUpper.end(), wordUpper[i]);

			if (n == 1) {

				result += "(";

			}
			else {
				result += ")";
			}

		}

		cout << result;

		return 0;

	}


