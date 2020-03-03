  
#include<iostream>
using namespace std;

//Write the definition of myString() here
char myString(char *m,int k){
   char *l = new char;
      for(int i = 0;i < k;i++){
   	      l[i] = 'A'+i;
   	      cout << l[i];
   	   

}
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
