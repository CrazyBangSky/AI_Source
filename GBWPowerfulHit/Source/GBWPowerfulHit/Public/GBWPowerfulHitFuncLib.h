// Copyright GanBowen 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Animation/AnimMontage.h"
#include "GBWPowerfulHitFuncLib.generated.h"

/**
 * 
 */
UCLASS()
class GBWPOWERFULHIT_API UGBWPowerfulHitFuncLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "GBox|PowerfulHit|Animation", meta = (DisplayName = "GetSectionNameFromMontage"))
		static TArray<FName> GBWGetSectionNameFromMontage(UAnimMontage* Montage);
};
