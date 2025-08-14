// 查找左边界 SearchLeft 简写SL
int SL(int l, int r)
{
    while (l < r)
    {
        int mid = l + r >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}
// 查找右边界 SearchRight 简写SR
int SR(int l, int r)
{
    while (l < r)
    {
        int mid = l + r + 1 >> 1; // 需要+1 防止死循环
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    return r;
}

// 来自视频评论区下方的一句话 : 有加必有减

int mid = l + r + 1(加) >> 1;
if (check(mid))
    l = mid;
else
    r = mid - 1(减);