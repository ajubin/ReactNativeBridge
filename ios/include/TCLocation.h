//
//  TCLocation.m
//  TagCommander
//
//  Created by Jean-Julien ZEIL on 12/02/14.
//  Copyright (c) 2014 TagCommander. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "TCMacros.h"
#import "TCConstants.h"

@interface TCLocation : NSObject <CLLocationManagerDelegate>

SINGLETON_CLASS_H(TCLocation)

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLLocation *location;

@end
