char *capitalize(char *str)
{
	int i;
	int j;

	while (str[i] != '\0'){
	if(str[i] >= 32 && str[i] <= 47 && )
	{
		i++;
		if(str[i] >= 97 && str[i] <= 122){
			str[i] = *(str - 32);
			while(str[i] <= 32 && str[i] >= 47)
			{
				i++;
				str[i]= *(str[i] + 32)
			}
		} 
			
	}

	
	}

}

