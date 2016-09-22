//
// Created by JeanJulien on 21/09/2016.
// Copyright (c) 2016 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"
#import "include/TagCommander.h"

@interface TCWrapper : NSObject <RCTBridgeModule>

@property (nonatomic, retain) TagCommander *TC;

@end
