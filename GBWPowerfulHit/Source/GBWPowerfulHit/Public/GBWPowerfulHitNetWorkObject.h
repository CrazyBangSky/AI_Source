// Copyright GanBowen 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GBWPowerfulHitNetWorkObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, meta = (DisplayName = "GBW_PowerfulHitNetWorkObject"))
class GBWPOWERFULHIT_API UGBWPowerfulHitNetWorkObject : public UObject
{
	GENERATED_BODY()

	bool IsNameStableForNetworking() const override
	{
		return true;
	}
	bool IsSupportedForNetworking() const override
	{
		return true;
	}
};

USTRUCT(BlueprintType, meta = (DisplayName = "GBW_PowerfulHitFeatureSet"))
struct FGBWPowerfulHitFeatureSet
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Instanced, EditAnywhere, Category = "FeatureSet")
		TArray<UGBWPowerfulHitNetWorkObject*> FeatureSet;

	FGBWPowerfulHitFeatureSet() {};
};