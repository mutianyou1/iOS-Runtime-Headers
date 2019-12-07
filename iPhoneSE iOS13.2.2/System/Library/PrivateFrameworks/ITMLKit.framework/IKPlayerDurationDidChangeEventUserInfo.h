/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerDurationDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	double _newDuration;

}

@property (nonatomic,readonly) double newDuration;                     //@synthesize newDuration=_newDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(NSDictionary *)properties;
-(id)initWithNewDuration:(double)arg1 ;
-(double)newDuration;
@end
