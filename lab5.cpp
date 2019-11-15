#include <iostream>
#include <math.h>


using namespace std;


class Matrix{
private:
    int Arr[5];
public:
    friend void vvid(Matrix arr[]);
    friend void vuvid(Matrix arr[]);
    friend void sortuv(Matrix arr[]);
    friend void func(Matrix arr[]);
};

void vvid(Matrix  arr[]){
    for (int a = 0; a < 5; a++)
        {
			 for (int b = 0; b < 5; b++){
            cout << "[" << a + 1 << "][" << b + 1  << "] = ";
            cin>>arr[a].Arr[b];
			 }

}}
void vuvid(Matrix  arr[]){
	for (int a=0;a<5;a++){
		for (int b=0;b<5;b++){
		
		cout<<arr[a].Arr[b]<<" ";
	}
	cout <<endl;
}}

void sortuv(Matrix  arr[])
{
for (int a = 0; a < 5; a++)
{
for (int Size = 1; Size < 5; Size *= 2)
{
for (int Iterator = 0; Iterator < 5 - Size; Iterator += 2 * Size)
{
int LeftIter = 0;
int RightIter = 0;
int Left = Iterator;
int Mid = Iterator + Size;
int Right = Iterator + 2 * Size;
Right = (Right < 5) ? Right : 5;
int* Sort = new int[Right - Left];

while (Left + LeftIter < Mid && Mid + RightIter < Right)
{
if (arr[Left + LeftIter].Arr[a] > arr[Mid + RightIter].Arr[a])
{
Sort[LeftIter + RightIter] = arr[Left + LeftIter].Arr[a];
LeftIter++;
}
else
{
Sort[LeftIter + RightIter] = arr[Mid + RightIter].Arr[a];
RightIter++;
}
}
while (Left + LeftIter < Mid)
{
Sort[LeftIter + RightIter] = arr[Left + LeftIter].Arr[a];
LeftIter++;
}
while (Mid + RightIter < Right)
{
Sort[LeftIter + RightIter] = arr[Mid + RightIter].Arr[a];
RightIter++;
}

for (int MergeIter = 0; MergeIter < LeftIter + RightIter; MergeIter++)
{
arr[Left + MergeIter].Arr[a] = Sort[MergeIter];
}
delete Sort;

}

}
}}


void func(Matrix arr[]) {
	int ser=0;
int a=0;
int b=0;
	int lol=1;

    for ( b = 0; b < 5 ; b++)
	{
		   cout<<"minimal znach stovpcya "<<lol++<<" = "<<arr[4].Arr[b]<<endl;
	ser =ser + arr[4].Arr[b];
	}
	float sered=ser;
	float znach=sered/5;
        cout<<"seredne znachennya = "<<znach<< endl;}
	

void main()
{
    Matrix array[5];
    cout << endl;
    vvid(array);
    cout << "matrix " << endl;
    vuvid(array);
	cout<<endl;
    sortuv(array);
    cout << "Sortovan matrix " << endl;
    vuvid(array);
    cout << endl;
    func(array);
}