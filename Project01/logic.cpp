bool is_the_same(int* vector, int length) {
	bool flag = false;
	
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (*(vector + i) == *(vector + j)) {
				flag = true;
			}
		}
	}

	return flag;
}