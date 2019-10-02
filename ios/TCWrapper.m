//
// Created by JeanJulien on 21/09/2016.
// Copyright (c) 2016 Facebook. All rights reserved.
//

#import "TCWrapper.h"
#import <TCCore/TCDebug.h>

@implementation TCWrapper

- (dispatch_queue_t)methodQueue
{
  return dispatch_get_main_queue();
}

RCT_EXPORT_MODULE();

RCT_EXPORT_METHOD(initTagCommander: (int) siteID andContainerID: (int) containerID)
{
    if (!self.TC)
    {
        [TCDebug setDebugLevel: TCLogLevel_Verbose];
        [TCDebug setNotificationLog: YES];

        self.TC = [[TagCommander alloc] initWithSiteID: siteID andContainerID: containerID];
    }
}

RCT_EXPORT_METHOD(addData: (NSString *) key withValue: (NSString *) value)
{
    if (!self.TC)
    {
        NSLog(@"Error, the TagCommander instance was not instantiated.\nPlease call initTagCommander(int siteID, int containerID)");
        return;
    }

    [self.TC addData: key withValue: value];
}

RCT_EXPORT_METHOD(sendData)
{
    if (!self.TC)
    {
        NSLog(@"Error, the TagCommander instance was not instantiated.\nPlease call initTagCommander(int siteID, int containerID)");
        return;
    }

    [self.TC sendData];
}

RCT_EXPORT_METHOD(disableSDK)
{
    if (!self.TC)
    {
        NSLog(@"Error, the TagCommander instance was not instantiated.\nPlease call initTagCommander(int siteID, int containerID)");
        return;
    }

    [self.TC disableSDK];
}

RCT_EXPORT_METHOD(enableSDK)
{
    if (!self.TC)
    {
        NSLog(@"Error, the TagCommander instance was not instantiated.\nPlease call initTagCommander(int siteID, int containerID)");
        return;
    }

    [self.TC enableSDK];
}

@end
