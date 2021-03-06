/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitEnvironment.h>

@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment {

	NSDictionary* mConfig;
	Dictionary* mOperatorDictionary;
	Manager* mFontManager;
	Manager* mKerningManager;
	Config* mLayoutConfig;

}

@property (assign,nonatomic) BOOL kerning; 
+(id)defaultEnvironment;
+(id)environmentFromData:(id)arg1 ;
+(id)dataForEnvironment:(id)arg1 ;
-(void)dealloc;
-(BOOL)kerning;
-(void)setKerning:(BOOL)arg1 ;
-(void)endLayout;
-(id)initWithConfig:(id)arg1 ;
-(const Manager*)fontManager;
-(void)beginLayout;
-(const Manager*)kerningManager;
-(const Config*)layoutConfig;
-(const Dictionary*)operatorDictionary;
-(id)newDictionaryForArchiving;
@end

