/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionLongPressExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionLongPress : OKAction <OKActionLongPressExports, NSSecureCoding> {

	unsigned long long _tapCount;
	double _pressDuration;

}

@property (assign,nonatomic) unsigned long long tapCount;              //@synthesize tapCount=_tapCount - In the implementation block
@property (assign,nonatomic) double pressDuration;                     //@synthesize pressDuration=_pressDuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)longPressActionWithLocation:(CGPoint)arg1 tapCount:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 pressDuration:(double)arg4 context:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tapCount;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)setPressDuration:(double)arg1 ;
-(double)pressDuration;
@end

