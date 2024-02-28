void fun3(int number[30],int n)
{
	int i,j,a;
	for(i=0;i<n;++i)
	{
		for(j=i + 1; j < n; ++j)
		{
			if(number[i] > number[j])
			{
				a= number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
}
