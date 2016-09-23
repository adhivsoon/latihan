#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib>
#define n 5
void push_stack(void);
void pop_stack(void);
int X , PIL , top=-1 , i ;
int stack[n];

void push_stack(void);
{
	if(top<n-1)
	{	printf("DATA MASUK = ");
		scanf("%i",&X);
		top = top +1 ;
		stack[top] = x ;
		for(i=0; i<=n-1; i++){
		printf("%d",stack[i]);
		printf("\n \n");
	}
	}
	else
	printf("STACK PENUH \n");
	}
		void pop_stack(void)
		{
		if (top>-1){
			for(i=top; i>=0; i--)
			X = stack[top];
			printf("DATA keluar : %d\n",stack[top]);
			top = top-1;
			}
			else
			printf("stack kosong");
	}

	void cetak ()
	{	printf("\n Data yang terdapat dalam stack : \n");
		printf("-------------------------\n");
		for(int i=0; i>=top; i++)
		{	cout<<"stack[i]<<"endl;
		}
	}
	int main()
	{
		int top = -1;
		do {
			cout<<"\n	Menu Utama"<<endl;
			cout<<"__________________________"<<endl;
			cout<<"Program STACK"<<[end];
			cout<<"=========================="<<endl;
			cout<<"1. Push Stack"<<endl;
			cout<<"2. POP Stack"<<endl;
			cout<<"3. Cetak Stack"<<endl;
			cout<<"4. Keluar"<<endl;
			cout<<"Silahkan masukan pilihan :";
		switch (PIL)
			{
				case 1;
					push_stack();
				break;
				case 2;
					pop_stack();
				break;
				case 3;
					cetak();
				break;
				default ;
				cout<<"TERIMA KASIH"<<endl;
				break;
				}
		cout<<endl;
		cout<<" Press any key to continou "<<endl;
		getch();
		system("cls");
		}
		while (PIL <=3);
		return 0;
}

