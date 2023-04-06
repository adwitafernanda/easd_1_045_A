
//1. untuk mempermudah dalam suatu penyelesaiian masalah dan mempermudah dalam penyortiran data

//2. - static = array
//   - dynamic = linked list
 
//3.- ukuran
//  - penerjemah
//  - kecepatan mesin
//  - bahasa pemrograman
//  - operating system

//4.  Bubblesort, karna menurut saya lebih mudah dipahami dan diaplikasikan

//5.quadrastik = Quicksort
//  loginear   = insertsort

//6.

#include <iostream>
using namespace std;


int AF[45];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 45)
			break;
		else
			cout << "Maksimum panjang array adalah 20" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> AF[i];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = AF[x];
	AF[x] = AF[y];
	AF[y] = temp;
}

void q_sort(int low, int high)
{
	int pivot, i{}, j;
	if (low > high)
		return;





	pivot = AF[low];

	j = low + 1;
	j = high;


	{

		swap(low, j);
		mov_count++;
	}

	q_sort(low, j - 1);


	q_sort(j + 1, high);


}


void display() {
	cout << "\n------------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << AF[i] << " ";
	}

	cout << "\n\nNumber of comparasions: " << cmp_count << endl;
	cout << "Number of data movement: " << mov_count << endl;
}


int main()
{

	input();

	q_sort(0, n - 1);
	display();
	system("pause");

	return 0;

}