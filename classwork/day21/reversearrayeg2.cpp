void arrayPtr(int *ptr,int n)

{
	int t;
	int* start = nullptr;
	int* end = nullptr;

	start = ptr;

	end = ptr + (n - 1);//BA+(n-1)


	while (start < end)//or  for(start=ptr,end=ptr+n-1;start<end;start++,end--)

	{//logic to change the avlue
		t = *start;
		*start = *end;
		*end = t;
		//counter
		end--;
	}
}