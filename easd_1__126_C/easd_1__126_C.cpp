//1.karena agar lebih terstruktur terkonsep dan untuk mempermudah menyelesaikan suatu masalah 
//2.linked list dan array
//3.faktor yang mempengaruhi yaitu kompleksitas, ukuran input,jenis input, dan implementasi
//4. insertion sort karena memiliki kompleksitas yang rendah serta sudah ada implementasinya 
//5. Yang termasuk kedalam quadratic : bubble sort dan selection sort, sedangkan yang termasuk dalam longliner yaitu : quick sort dan merge sort
#include <iostream>
using namespace std;

int mutiara[35];                  
int n;                  

void input() {           
	while (true) {      
		cout << "masukan banyaknya elemen pada array : ";
		cin >> n;   
		if (n <= 35)    
			break;     
		else {        
			cout << "\nArray dapat mempunyai maksimal 20 elemen, \n";
		}
	}
	cout << endl;                          
	cout << "===================" << endl;  
	cout << "===================" << endl;  
	cout << "===================" << endl;  

	for (int i = 0; i < n; i++) {          
		cout << "<" << (i + i) << ":"; 
		cin >> mutiara[i];                           
	}
}

void s_sort(int mutiara[],int n) {
	int min_index;
	if (mutiara[0] < mutiara[min_index]);
}




	
	
