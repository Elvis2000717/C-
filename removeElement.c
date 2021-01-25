int removeElement(int* nums, int numsSize, int val){
	int p1 = 0;

	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != val)
		{
			nums[p1] = nums[i];
			p1++;
		}
	}

	return p1;
}