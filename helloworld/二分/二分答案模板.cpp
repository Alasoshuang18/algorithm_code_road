// ������߽� SearchLeft ��дSL
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
// �����ұ߽� SearchRight ��дSR
int SR(int l, int r)
{
    while (l < r)
    {
        int mid = l + r + 1 >> 1; // ��Ҫ+1 ��ֹ��ѭ��
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    return r;
}

// ������Ƶ�������·���һ�仰 : �мӱ��м�

int mid = l + r + 1(��) >> 1;
if (check(mid))
    l = mid;
else
    r = mid - 1(��);