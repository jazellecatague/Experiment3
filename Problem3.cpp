#include<iostream>
using namespace std;

int main()
{
	
char array[50];
int size;

cout << "Enter array size: ";
cin >> size;
	
cout << "Input characters: " << endl;

for (int a = 0; a < size; a++)

{
	
cin >> array[a];

}

char temp;
for (int a = 0; a < size; a++)

{
	
for (int b = a + 1; b < size; b++)

{
	
if (array[a] < array[b])

{
	
temp = array[a];
array[a] = array[b];
array[b] = temp;
	
}
}
}

for (int a = size-1; a >= 0; a--)

{
	
cout << "'" << array[a] << "', ";
	
}

cout << sizeof(array);

return 0;
}
