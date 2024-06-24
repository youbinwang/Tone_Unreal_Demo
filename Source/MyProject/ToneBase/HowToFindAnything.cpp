// Fill out your copyright notice in the Description page of Project Settings.


#include "HowToFindAnything.h"

#include "LevelEditor.h"
#include "PlayInEditorDataTypes.h"
#include "UnrealEdGlobals.h"
#include "Editor/UnrealEdEngine.h"
#include "Engine/LevelScriptBlueprint.h"

void UHowToFindAnything::PlayInEditor()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	TSharedPtr<IAssetViewport> ActiveLevelViewport = LevelEditorModule.GetFirstActiveViewport();

	FRequestPlaySessionParams SessionParams;
	SessionParams.DestinationSlateViewport = ActiveLevelViewport;

	GUnrealEd->RequestPlaySession(SessionParams);
}

void UHowToFindAnything::OpenLevelBlueprint()
{
	ULevelScriptBlueprint* LevelScriptBlueprint = GEditor->GetEditorWorldContext().World()->PersistentLevel->GetLevelScriptBlueprint();
	const bool bOpenWorldCentric = false;
	GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(
		LevelScriptBlueprint,
		bOpenWorldCentric ? EToolkitMode::WorldCentric : EToolkitMode::Standalone,
		TSharedPtr<IToolkitHost>(),  true,
		EAssetTypeActivationOpenedMethod::Edit);
}
