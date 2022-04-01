#include <iostream>
using namespace std;
int n, k, a[100], b[100], ok;
void sapxep(int b[], int n){
	int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(b[i] > b[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = b[i];
                b[i] = b[j];
                b[j] = tg;        
            }
        }
    }
    }
void ktao() {
	for (int i = 1; i <= k; i++)
	{
		a[i] = i;
	}
}
void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i)
	{
		--i;

	}
	if (i == 0) {
		ok = 0;
	}
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; ++j)
		{
			a[j] = a[j - 1] + 1;
		}
	}
}
int main()
{	int dem = 0;
	ok = 1;   
    cout << "Nhap n : ";
    cin >> n;
	for(int i=1; i<=n ; i++){
		cin >> b[i];
	}
	cout << "Nhap k: "; cin >> k;
    sapxep(b, n);
	ktao();
	while (ok)
	{
		for (int i = 1; i <= k; i++) {
			cout << b[a[i]] << " ";
		} 
		dem = dem + 1;
		cout << "-----dem =" << dem;
		cout << endl;
		sinh();
	}

	return 0;
}
