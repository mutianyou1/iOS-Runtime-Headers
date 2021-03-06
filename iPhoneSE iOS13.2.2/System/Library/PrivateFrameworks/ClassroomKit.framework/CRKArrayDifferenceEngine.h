/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKArrayDifferenceConfiguration;
@class NSObject, NSString;

@interface CRKArrayDifferenceEngine : NSObject {

	NSObject* mObject;
	NSString* mKeyPath;
	id<CRKArrayDifferenceConfiguration> _configuration;

}

@property (nonatomic,retain) id<CRKArrayDifferenceConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)identityConfiguration;
+(id)configurationWithIncomingItemsIdentifierFunction:(/*^block*/id)arg1 publishedItemsIdentifierFunction:(/*^block*/id)arg2 ;
-(void)setConfiguration:(id<CRKArrayDifferenceConfiguration>)arg1 ;
-(id<CRKArrayDifferenceConfiguration>)configuration;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 configuration:(id)arg3 ;
-(void)updateWithNewArray:(id)arg1 ;
@end

