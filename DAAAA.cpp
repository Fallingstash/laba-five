
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Введите количество строк и столбцов " << endl;
    cin >> n >> m;
    int A[n][m] = {};
    cout << "Введите элементы матрицы" << endl;
    int i, j;
    for (i = 0; i < n; i++)
    { 
		for (j = 0; j < m; j++)  
			cin >> A[i][j]; 
	}
	cout << "Ваша матрица" << endl;
	for (i = 0; i < n; i++) 
	{  
		for (j = 0; j < m; j++)
		
			cout << A[i][j] << " ";
	    cout << endl;
	}
	for (i = 0; i < n; i++)
	{
	    int mx = -1000000;
	    int mn = 1000000;
	    for (j = 0; j < m; j++)
	    {
    	    if (A[i][j] > mx)
    	    {
    	        mx = A[i][j];
    	    }
    	    if (A[i][j] < mn)
    	    {
    	        mn = A[i][j];
    	    }
	    }
    	int j1;
    	   for (j1 = 0; j1 < m; j1++)
    	   {
    	        if (A[i][j1] == mx) 
    	        {
    	            A[i][j1] = mn;
    	            
    	        }
    	        else if (A[i][j1] == mn)
    	        {
    	            A[i][j1] = mx;
    	        }
    	   }
	}	
    	cout << "Ваша обновлённая матрица" << endl;
    	for (i = 0; i < n; i++) 
    	{  
    		for (j = 0; j < m; j++)
    		
    			cout << A[i][j] << " ";
    	    cout << endl;
    	}
}