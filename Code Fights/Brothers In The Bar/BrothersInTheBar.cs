int brothersInTheBar(int[] glasses) {
    var a = new List<int>();
    var i = 0;

    for (int j = 0, k = 0; j < glasses.Length; j++, k = a.LastOrDefault())
    {

        if (a.Count > 1 && k == a[a.Count - 2] && k == glasses[j])
        {
            i++;
            a.RemoveRange(a.Count - 2, 2);
        }
        else if (j < glasses.Length - 1 && k == glasses[j] && k == glasses[j + 1])
        {
            j++;
            i++;
            a.RemoveAt(a.Count - 1);
        }
        else
        {
            a.Add(glasses[j]);
        }
    }

    return i;
}
