// Copyright Epic Games, Inc. All Rights Reserved.

#include "VLTEditorToolBPLibrary.h"
#include "VLTEditorTool.h"



UVLTEditorToolBPLibrary::UVLTEditorToolBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


void UVLTEditorToolBPLibrary::CopyDirectoryToDirectory(FString Source, FString Target, bool Overwrite)
{
	IPlatformFile& F = FPlatformFileManager::Get().GetPlatformFile();
	F.CopyDirectoryTree(*Target, *Source, Overwrite);





}
