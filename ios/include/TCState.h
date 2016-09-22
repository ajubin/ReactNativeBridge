//
//  TCState.h
//  TagCommander
//
//  Created by Jean-Julien ZEIL on 10/02/14.
//  Copyright (c) 2014 TagCommander. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "TCMacros.h"

#import "ITCEventSenderDelegate.h"
#import "TCSingleton.h"
#import "TCLog.h"

@class TCEventSender;
@class UIApplication;
@class TCReachability;

@interface TCState : TCSingleton <ITCEventSenderDelegate>
{
@private
    TCReachability *reachability;

    BOOL locationAvailable;
    double tcLongitude;
    double tcLatitude;
}

SINGLETON_CLASS_H(TCState)

#pragma mark - Debug methods
- (void) setDebugForLevel: (TCLogLevel) level andOutput: (TCLogOutput) output;
- (struct TCDebugInformation) getDebug;

#pragma mark - Background delegates
- (void) didEnterBackground: (UIApplication *) application;
- (void) willEnterForeground: (UIApplication *) application;

#pragma mark - Reachability
- (BOOL) isInternetReachable;

#pragma mark - Location
- (void) setLocationAvailable: (BOOL) locationAvailable;
- (BOOL) isLocationAvailable;
- (void) setLongitude: (double) longitude andLatitude: (double) latitude;
- (double) longitude;
- (double) latitude;

#pragma mark - Date & Time Methods
- (NSDate *) date;

#pragma mark - Unit Tests Access
- (id) reinit;

@property (nonatomic, retain) TCEventSender *senderDelegate;

// Debug properties
@property (nonatomic, assign) struct TCDebugInformation debugInformation;
@property (nonatomic, assign) BOOL testMode;
@property (nonatomic, assign) BOOL blockHTTPOperations;

@end
