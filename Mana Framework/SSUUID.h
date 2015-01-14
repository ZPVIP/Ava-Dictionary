//
//  SSUUID.h
//  SystemServicesDemo
//
//  Created by Shmoopi LLC on 9/21/12.
//  Copyright (c) 2012 Shmoopi LLC. All rights reserved.
//

#import "SystemServicesConstants.h"

@interface SSUUID : NSObject

// Universal Unique Identifiers

// Unique ID - Unique Identifier based on unchanging information about the device
+ (NSString *)UniqueID;

// Device Signature - Device Signature based on assorted information about the device including: SystemVersion, ScreenHeight, ScreenWidth, PluggedIn, Jailbroken, HeadphonesAttached, BatteryLevel, FullyCharged, ConnectedtoWiFi, DeviceOrientation, AccelerometerXValue, AccelerometerYValue, AccelerometerZValue, Country, TimeZone, NumberProcessors, ProcessorSpeed, TotalDiskSpace, TotalMemory, and a Salt
+ (NSString *)DeviceSignature;

// CFUUID - Random Unique Identifier that changes every time
+ (NSString *)CFUUID;

@end
