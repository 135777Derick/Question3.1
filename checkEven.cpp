#include<iostream>
using namespace std;
int checkEven()

{
//Here is the for loop that runs for two iterations
int checkEvenNumber;
int value, temp;
for(value = 2 ; checkEvenNumber < value ; ++value) {
if (checkEvenNumber % 2 == 0) return true;
}
else
return false;
}
