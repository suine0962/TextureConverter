#pragma once
#include "math.h"
#include <string>
#include "stringapiset.h"
#include "externals/DirectXTex/DirectXTex.h"
class TexConverter
{
public :

	void ConvertTextureWICToDDS(const std::string& filePath);

private:



	void LoadWICTextureFromFile(const std::string& filePath);
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
	DirectX::TexMetadata metadata_;
	DirectX::ScratchImage scratchImage_;


};

