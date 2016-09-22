//
//  TCLogger.h
//  TagCommander
//
//  Created by Jean-Julien ZEIL on 10/02/14.
//  Copyright (c) 2014 TagCommander. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TCMacros.h"
#import "TCLog.h"
#import "TCEventSender.h"
#import "TCEventListener.h"

#import "TCSingleton.h"
#import "ITCDynamicStore.h"


@interface TCLogger : TCSingleton<ITCEventSenderDelegate, ITCEventListenerDelegate>

SINGLETON_CLASS_H(TCLogger)
- (id) reinit;

- (void) logMessage: (NSString *) message withLevel: (TCLogLevel) level;
- (void) logMessage: (NSString *) message withLevel: (TCLogLevel) level andFileName: (NSString *) fileName;

- (void) resetContentOfFile: (NSString *) fileName;
- (void) resetContentOfDefaultFile;
- (void) writeToTextFile: (NSString *) logMessage inFile: (NSString *) fileName;

- (NSString *) getPrivatePathToFile: (NSString *) fileName;
+ (NSString *) privateTCDirectory;

- (NSString *) displayContentInFile: (NSString *) fileName;
- (NSString *) displayContentInDefaultFile;

@property (nonatomic, retain) TCEventListener *listenerDelegate;
@property (nonatomic, retain) TCEventSender *senderDelegate;

@property (nonatomic, assign) NSString *outputFileName;

@property (nonatomic) BOOL debugVerboseNotificationLog;

@end
