#include <Windows.h>
#include <cstdio>
#include <cstdlib>
#include <assert.h>
#include "TexConverter.h"



enum Argument {
	kApplicationPath,//アプリケーション
	kFilePath,//渡されたファイルのパス

	NumArgument

};


int main(int argc, char* argv[])
{
	
	assert(argc >= NumArgument);

	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));


	TextureConverter converter;
	converter.ConvertTextureWICToDDS(argv[kFilePath]);


	CoUninitialize();

	/*for (int i = 0; i < argc; i++)
	{
		printf(argv[i]);

		printf("\n");
	}*/
	

	system("pause");
	return 0;

}
