#include "TexConverter.h"

void TexConverter::ConvertTextureWICToDDS(const std::string& filePath)
{
	LoadWICTextureFromFile("filepath");

}

void TexConverter::LoadWICTextureFromFile(const std::string& filePath)
{
	const std::string mString;
	std::wstring wfilePath = ConvertMultiByteStringToWideString(mString);



}

std::wstring TexConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	int filePathbufferSize = MultiByteToWideChar(CP_ACP, 0,
		mString.c_str(), -1, nullptr, 0);

	std::wstring wString;
	wString.resize(filePathbufferSize);

	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), 
		-1, &wString[0], filePathbufferSize);



	return wString;
}
