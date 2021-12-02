// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"


// foto test begin

void UMyGameInstance::TakeScreenShot(bool bCaptureUI, bool bAddSuffix)
{
    FString CurrentDateTime = FDateTime::Now().ToString(TEXT("%Y-%m-%d %H-%M"));
    FScreenshotRequest* request = new FScreenshotRequest();
    request->RequestScreenshot("ScreenShot " + CurrentDateTime, bCaptureUI, false);
}

// foto test eind
