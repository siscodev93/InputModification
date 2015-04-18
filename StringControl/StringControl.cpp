namespace MyStringControl
{

	//Get Length of char array
<<<<<<< HEAD
	int Length(char* ArrayIn)
	{
		int offset = 0;
		int Len = 0;
		while (*(ArrayIn + offset) != '\0')
=======
	int Length(char* arrayin)
	{
		int offset = 0;
		int Len = 0;
		while (*(arrayin + offset) != '\0')
>>>>>>> origin/master
		{
			Len++;
			offset++;
		}
		return Len;
	}

	//convert all lower case letters a-z to upper-case
	char* ToUppercase(char* Input)
	{
		int Len = Length(Input);
		for (int i = 0; i < Len; i++)
		{
			short keycode = static_cast<short>(Input[i]);
			if (keycode >= 97 && keycode <= 122)
				Input[i] -= 32;
		}
		return Input;
	}


	//convert all upper case letters A-Z to lower-case
	char* ToLowercase(char* Input)
	{
		int Len = Length(Input);
		for (int i = 0; i < Len; i++)
		{
			short keycode = static_cast<short>(Input[i]);
			if (keycode >= 65 && keycode <= 90)
				Input[i] += 32;
		}
		return Input;
	}


};

