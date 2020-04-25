vector<int>::iterator unique(vector<int> & a)
{
    // i is tranvese for a
    // j <= i, j存不重复的元素
    // 不重复的元素存在0～j - 1；
    // 最后返回第一个重复的元素的位置
    int j = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (!i || a[i] != a[i - 1])
        {
            a[j++] = a[i];
        }
    }
    
    return a.begin() + j;
}
