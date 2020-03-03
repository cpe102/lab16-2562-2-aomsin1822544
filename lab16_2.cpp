
#include<iostream>
using namespace std;

//Write the definition of myString() here
char myString(char *p,int N){
   char *l = new char;
      for(int i = 0;i < N;i++){
   	      l[i] = 'A'+i;
   	      cout << l[i];
   	   

}
	l[N] = '\0';
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
