/*
Given a string of character, find the length of longest proper prefix which is also a proper suffix.
Example:
S = abab
lps is 2 because, ab.. is prefix and ..ab is also a suffix.

Input:
First line is T number of test cases. 1<=T<=100.
Each test case has one line denoting the string of length less than 100000.

Expected time compexity is O(N).

Output:
Print length of longest proper prefix which is also a proper suffix.

Example:

Input:
2
abab
aaaa

Output:
2
2
*/

#include <bits/stdc++.h>
using namespace std;
int lps (string);
int main ()
{
  int T;
  cin >> T;
  getchar ();
  while (T--)
    {
      string s;
      cin >> s;
      printf ("%d \n ", lps (s));
    }
  return 0;
}

int lps (string s)
{
  int n = s.size ();
  int lps[n];
  int i = 1, j = 0;
  lps[0] = 0;
  while (i < n)
    {
      if (s[i] == s[j])
	{
	  j++;
	  lps[i] = j;
	  i++;
	}
      else
	{
	  if (j != 0)
	    j = lps[j - 1];
	  else
	    {
	      lps[i] = 0;
	      i++;
	    }
	}
    }
  return lps[n - 1];
}