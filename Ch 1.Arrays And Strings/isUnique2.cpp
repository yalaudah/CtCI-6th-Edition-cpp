bool isUnique(std::string &str)
{

	// check length of the string

	if(str.size() > 128 || str.size() == 0)
		return false; // surely there is a non-unique char here
	else if(str.size() == 1)
		return true;
	else
	{
		std::bitset<128> chars;
		// initialize bitset ot zeros
		chars.reset();
		for(int i = 0; i<str.size() ; i++)
		{
			int c = str[i];
			if(chars[c]==1)
				return false;
			else
				chars.set(c);
		}
	}
	return true;

}

