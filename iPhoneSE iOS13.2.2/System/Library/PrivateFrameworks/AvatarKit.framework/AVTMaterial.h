/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class NSDictionary, UIColor;

@interface AVTMaterial : NSObject {

	UIColor* baseColor;
	NSDictionary* secondaryColors;

}

@property (retain) UIColor * baseColor; 
@property (retain) NSDictionary * secondaryColors; 
+(id)materialWithColor:(UIColor*)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(UIColor *)baseColor;
-(void)applyToSceneKitMaterial:(id)arg1 ;
-(NSDictionary *)secondaryColors;
-(void)setSecondaryColors:(NSDictionary *)arg1 ;
-(void)_encode:(id)arg1 ;
-(BOOL)_decode:(id)arg1 ;
@end

