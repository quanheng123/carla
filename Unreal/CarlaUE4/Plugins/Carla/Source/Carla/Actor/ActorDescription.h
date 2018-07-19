// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Carla/Actor/ActorAttribute.h"

#include "ActorDescription.generated.h"

/// A description of a Carla Actor with all its variation.
USTRUCT(BlueprintType)
struct FActorDescription
{
  GENERATED_BODY()

  /// UId of the definition in which this description was based.
  uint32 UId = 0u;

  /// Display ID that identifies the actor.
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Id;

  /// User selected variations of the actor. Note that at this point are
  /// represented by non-modifiable attributes.
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FActorAttribute> Variations;
};