class Solution 
{
public:
   int minFlips(int a, int b, int c) {
    return popcount(ulog((a | b) ^ c) <<32| ( a & b & ~c));
}
};