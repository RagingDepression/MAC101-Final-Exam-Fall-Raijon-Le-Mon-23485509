#include <iostream>// Raijon Le'Mon 23485509
using namespace std;

int main() {
int numbers[100] = {1,7,15,21,40,45,81};
int n = 7;
for (int i = 0; i < n;i++)
{for (int j = 0; j < n-1; j++){
    if (numbers[j]> numbers [j+1]){
    int temp = numbers [j];
    numbers[j] = numbers[j+1];
    numbers[j+1] = temp;
}
}
}
for(int i = 0; i < n; i++){
    cout<<numbers[i]<< " ";
}
}