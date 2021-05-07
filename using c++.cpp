/*
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

Input Format
Input a positive integer n

Constraints
Output Format
Print "True" (without quotes) if n has alternating bits. Print "False" if n do not has alternating bits.

Sample Input
5

Sample Output
True

Explanation
Example 1:

Input: 11
Output: False
Explanation: The binary representation of 11 is: 1011.

Example 2:

Input: 10
Output: True
Explanation: The binary representation of 10 is: 1010.
*/

#include<iostream>
using namespace std;

bool alternatingBits(int n)     // n is 1010
{
    n = n ^ (n>>1);     // n>>1 is 0101 and n will be 1111
    bool ans = n & (n+1); // ans mein 0000 store ho jaayega
    if (ans==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    bool result = alternatingBits(n);
    if (result == true)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}
