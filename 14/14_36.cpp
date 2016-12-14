void ReadInVec()
{
	std::vector<string> StrVec;
	ReadString rs;//class in file 14_35.cpp
	while(1)
	{
		string line = rs();
		if(!line.empty())
		{
			StrVec.push_back(line);
		}
		else
		{
			break;
		}
	}
}