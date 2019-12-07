/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMBootstrapSettings;

@interface EDAMBootstrapProfile : FATObject {

	NSString* _name;
	EDAMBootstrapSettings* _settings;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) EDAMBootstrapSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(EDAMBootstrapSettings *)settings;
-(void)setSettings:(EDAMBootstrapSettings *)arg1 ;
@end
