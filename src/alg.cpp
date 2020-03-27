int cbinsearch(int* arr, int size, int value)
{
	int j = size - 1;
	int count = 0;
	for (int i = 0; i < j; i++)
	{
		int mid = (i + j) / 2;
		if (arr[mid] == value)
		{
			count++;
		}
		else if (value <= arr[mid])
			j = mid;
		else
			j = mid + 1;

	}
	return count;
}
