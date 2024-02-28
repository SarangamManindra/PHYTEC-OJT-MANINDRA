int noofdigits(int n)
{
	static int ctr=0;
	if(n>0)
	{
		ctr++;
		noofdigits(n/10);
	}
	return ctr;
}
