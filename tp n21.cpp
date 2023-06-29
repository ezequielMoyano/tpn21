#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVectorA(int N){
	vector<int> A;
	int random;
		
	srand(time(NULL));
	for(int i=0; i<N; i++){
		random = rand()%30;
		A.push_back(random);
	}
	return A;
}

void MostrarVectorA(vector<int> A){
	for(int i=0; i<A.size(); i++){
		cout<<A[i]<<"/";
	}
}

vector<int> GenerarVectorResultado(vector<int> A){
	vector<int> R;
	int SumaPar=0;
	int SumaImpar=0;
	
	for(int i=0; i<A.size(); i++){
		if(A[i]%2 == 0){
			SumaPar += A[i];
		}
		else{
			SumaImpar += A[i];
		}
	}
	R.push_back(SumaPar);
	R.push_back(SumaImpar);
	
	return R;
}

void MostrarVectorR(vector<int> R){
	for(int i=0; i<R.size(); i++){
		cout<<R[i]<<"/";
	}
}

int main(){
	
	int N;
	cout<<"Ingrese Cantidad de numeros : ";
	cin>>N;
	
	cout<<endl;
	vector<int> A = GenerarVectorA(N);
	cout<<"Vector A : ";
	MostrarVectorA(A);
	
	cout<<endl<<endl;
	vector<int> R = GenerarVectorResultado(A);
	cout<<"Vector Resultado : ";
	MostrarVectorR(R);
	
	return 0;
}
