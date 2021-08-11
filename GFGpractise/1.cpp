class Solution
{
public:
    int minPages(int n, int m, int N, int arr[])
    {
        // code here
        if (n == 0 || m == 0)
            return 0;
        if (N == 0)
            return 0;
        int maxSquaresOnAPage = n * m;
        int countTotalSqaures = 0;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] < 0 || arr[i] > 1)
                return 0;
            countTotalSqaures += arr[i];
        }
        if (countTotalSqaures == 0)
            return 0;
        int countPagesRequired = 0;
        while (countTotalSqaures > 0)
        {
            countTotalSqaures -= maxSquaresOnAPage;
            countPagesRequired++;
        }
        return countPagesRequired;
    }
};