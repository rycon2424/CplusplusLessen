#pragma once
#include <string>
#include <vector>

class FileMixer
{
	public:
		FileMixer();
		~FileMixer();
		std::vector<std::string> SaveTextToString(std::string filePath);
		void MixFiles();
};