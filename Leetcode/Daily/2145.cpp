/*
# 2185. Counting Words With a Given Prefix

## Problem Details
- **Problem ID**: 2185
- **Difficulty**: Easy
- **Link**: [Counting Words With a Given Prefix](https://leetcode.com/problems/counting-words-with-a-given-prefix/description/)

## Approach
1. Check if each word in the `words` array contains the prefix `pref`:
   - Compare characters of `word` with `pref` one by one until the end of `pref`.
   - If a mismatch occurs, skip the word.
   - If all characters of `pref` match, count the word.
2. The helper function `isPrefix` is used for prefix comparison.
3. Iterate through the array, applying the prefix check to each word.

## Time Complexity
- **O(n * m)**: Where `n` is the number of words and `m` is the length of `pref`.

## Space Complexity
- **O(1)**: No extra space is used beyond variables.

## Solution
*/

class Solution
{
    bool isPrefix(string word, string pref)
    {
        int x = pref.size(), y = word.size();
        if (x > y)
            return false;
        for (int i = 0; i < x; i++)
        {
            if (word[i] != pref[i])
                return false;
        }
        return true;
    }

public:
    int prefixCount(vector<string> &words, string pref)
    {
        int m = pref.size(), n = words.size(), count = 0;
        for (int i = 0; i < n; i++)
        {
            if (isPrefix(words[i], pref))
                count++;
        }
        return count;
    }
};
