/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPLineFragmentAdornment.h>

@class TSUColor, NSString;

@interface TSWPDropCapBackgroundAdornment : NSObject <TSWPLineFragmentAdornment> {

	TSUColor* _color;
	CGRect _bounds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isBackground; 
-(void)dealloc;
-(BOOL)isBackground;
-(id)initWithColor:(id)arg1 bounds:(CGRect)arg2 ;
-(void)drawAdornmentForFragment:(const TSWPLineFragment*)arg1 inContext:(CGContextRef)arg2 withFlags:(unsigned)arg3 state:(const TSWPDrawingState*)arg4 bounds:(CGRect)arg5 ;
@end
