

#define depts 3
#define 

int main()

{//EMP e[dpts][noEmps];
	EMP **e = nullptr;

	e = (EMP**)malloc(depts * sizeof(EMP*));//25bytes send to e.

	for (int i=0;i<depts;i++)
	{
		e[i] = (EMP*)malloc(noEmps * sizeof(EMP));

		cout<<"Address of e["<<i<<"] =+- "<<unsigned long int
	}

}