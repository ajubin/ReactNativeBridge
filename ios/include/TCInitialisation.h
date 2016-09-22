//
//  TCInitialisation.h
//  TagCommander
//
//  Created by Jean-Julien ZEIL on 10/02/14.
//  Copyright (c) 2014 TagCommander. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TagCommander;

@interface TCInitialisation : NSObject

- (id) initWithTagCommander: (TagCommander *) tagCommander;

@property (nonatomic, retain) TagCommander *tagCommander;

@end
