#include <iostream>
#include <math.h>


using namespace std;


class Matrix{
private:
    int columnofmatrix[5];
public:
    friend void input(Matrix rowofmatrix[]);
    friend void output(Matrix rowofmatrix[]);
    friend void mergesort(Matrix rowofmatrix[]);
    friend void minandaveragevalue(Matrix rowofmatrix[]);
};

void input(Matrix  rowofmatrix[]){
    for (int column = 0; column < 5; column++)
        {
			 for (int row = 0; row < 5; row++){
            cout << "[" << column + 1 << "][" << row + 1  << "] = ";
            cin>>rowofmatrix[column].columnofmatrix[row];
			 }

}}
void output(Matrix  rowofmatrix[]){
	for (int column = 0; column < 5; column++){
		for (int row = 0; row < 5; row++){
		
		cout<<rowofmatrix[column].columnofmatrix[row]<<" ";
	}
	cout <<endl;
}}

void mergesort(Matrix  rowofmatrix[])
{
for (int column = 0; column < 5; column++)
{
for (int arraydividing = 1; arraydividing < 5; arraydividing *= 2)
{
for (int iterator = 0; iterator < 5 - arraydividing; iterator += 2 * arraydividing)
{
int leftiterator = 0;
int rightiterator = 0;
int left = iterator;
int middle = iterator + arraydividing;
int right = iterator + 2 * arraydividing;
right = (right < 5) ? right : 5;
int* sort = new int[right - left];

while (left + leftiterator < middle && middle + rightiterator < right)
{
if (rowofmatrix[left + leftiterator].columnofmatrix[column] > rowofmatrix[middle + rightiterator].columnofmatrix[column])
{
sort[leftiterator + rightiterator] = rowofmatrix[left + leftiterator].columnofmatrix[column];
leftiterator++;
}
else
{
sort[leftiterator + rightiterator] = rowofmatrix[middle + rightiterator].columnofmatrix[column];
rightiterator++;
}
}
while (left + leftiterator < middle)
{
sort[leftiterator + rightiterator] = rowofmatrix[left + leftiterator].columnofmatrix[column];
leftiterator++;
}
while (middle + rightiterator < right)
{
sort[leftiterator + rightiterator] = rowofmatrix[middle + rightiterator].columnofmatrix[column];
rightiterator++;
}

for (int mergeiterator = 0; mergeiterator < leftiterator + rightiterator; mergeiterator++)
{
rowofmatrix[left + mergeiterator].columnofmatrix[column] = sort[mergeiterator];
}
delete sort;

}

}
}}


void minandaveragevalue(Matrix rowofmatrix[]) {
	int additionminimalnumbers = 0;
int column = 0;
int row = 0;
	int numbercolumn=1;

    for ( row = 0; row < 5 ; row++)
	{
		   cout<<"minimal number of column "<<numbercolumn++<<" = "<<rowofmatrix[4].columnofmatrix[row]<<endl;
	additionminimalnumbers =additionminimalnumbers + rowofmatrix[4].columnofmatrix[row];
	}
	float inttofloat= additionminimalnumbers;
	float averagevalue=inttofloat/5;
        cout<<"average value = "<<averagevalue<< endl;
}
	

void main()
{
    Matrix array[5];
    cout << endl;
    input(array);
    cout << "matrix " << endl;
    output(array);
    cout<<endl;
    mergesort(array);
    cout << "Sorted matrix " << endl;
    output(array);
    cout << endl;
    minandaveragevalue(array);
}
