/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariServices/SafariServices-Structs.h>
@interface _SFKeyboardGeometry : NSObject {

	CGSize _sizeWithoutBar;
	CGSize _sizeWithBar;

}

@property (nonatomic,readonly) CGSize sizeWithoutBar;              //@synthesize sizeWithoutBar=_sizeWithoutBar - In the implementation block
@property (nonatomic,readonly) CGSize sizeWithBar;                 //@synthesize sizeWithBar=_sizeWithBar - In the implementation block
+(id)keyboardGeometryForInterfaceOrientation:(long long)arg1 ;
+(id)_keyboardGeometryForCurrentDeviceWithInterfaceOrientation:(long long)arg1 ;
-(CGSize)sizeWithBar;
-(CGSize)sizeWithoutBar;
-(id)_initWithSizeWithoutBar:(CGSize)arg1 sizeWithBar:(CGSize)arg2 ;
-(id)_initWithFallbackSizeForOrientation:(long long)arg1 ;
@end

