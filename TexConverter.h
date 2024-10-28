#pragma once
#include "math.h"
#include <string>
#include "stringapiset.h"
class TexConverter
{
public :

	void ConvertTextureWICToDDS(const std::string& filePath);

private:

	void LoadWICTextureFromFile(const std::string& filePath);
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);



};

