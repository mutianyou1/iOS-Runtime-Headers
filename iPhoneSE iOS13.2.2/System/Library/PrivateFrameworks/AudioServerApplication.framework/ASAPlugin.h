/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, NSURL, NSArray;

@interface ASAPlugin : ASAObject

@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSURL * resourceBundleURL; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSArray * boxObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * audioDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * clockDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * boxes; 
@property (nonatomic,copy,readonly) NSArray * audioDevices; 
@property (nonatomic,copy,readonly) NSArray * clockDevices; 
+(id)pluginWithBundleIdentifier:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)manufacturer;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(NSArray *)boxes;
-(NSArray *)audioDevices;
-(NSArray *)clockDevices;
-(NSURL *)resourceBundleURL;
-(id)audioDeviceWithUID:(id)arg1 ;
-(unsigned)audioDeviceObjectIDWithUID:(id)arg1 ;
-(id)coreAudioClassName;
-(unsigned)boxObjectIDWithUID:(id)arg1 ;
-(unsigned)clockDeviceObjectIDWithUID:(id)arg1 ;
-(NSArray *)boxObjectIDs;
-(NSArray *)audioDeviceObjectIDs;
-(NSArray *)clockDeviceObjectIDs;
-(id)deviceObjectIDs;
-(id)boxWithUID:(id)arg1 ;
-(id)clockDeviceWithUID:(id)arg1 ;
@end

