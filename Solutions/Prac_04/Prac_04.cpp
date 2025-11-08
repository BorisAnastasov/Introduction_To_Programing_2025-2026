    #include <iostream>
using namespace std;

//task1
int sum(int a, int b)
{
    return a + b;
}   

//task2
int isEven(int num) 
{
    return num % 2 == 0;
}

//task3.1
int isPositive(int num) 
{
    return num > 0;
}

//task3.1
int isNegative(int num) 
{
    return num < 0;
}

//task4.1
int _abs(int num) 
{
    return (isNegative(num)) ? -num : num;
}

//task 4.2
double _fabs(double num) 
{
    return (isNegative(num)) ? -num : num;
}

//task5
void print(char S, int N) 
{
    for (int i = 0; i < N; i++)
    {
        cout << S;
    }
}

//task6.1
bool checkSymbol(char S) 
{
    return (S >= 41 && S <= 90) || (S >= 97 && S <= 122);
}

//task6
bool isCapitalLetter(char S) 
{
    if (!checkSymbol(S)) return false;

    if (S >= 97 && S <= 122) return true;
}

//task7.1
char to_upper(char ch) 
{
    return ch + 32;
}
//task7.2

char to_lower(char ch)
{
    return ch - 32;
}

int lengthOfN(int num)
{
    int count = 0;
    while (num != 0) 
    {
        num /= 10;
        count++;
    }
    return num;
}

int kOfN(int num, int k) 
{
    int count = 0;
    while (num != 0)
    {
        int temp = 0;
        temp = num % 10;
        num /= 10;
        count++;
        if (count == k) 
        {
            return temp;
        }
    }
    return 0;
}


int main()
{
    cout << to_lower('a');
}