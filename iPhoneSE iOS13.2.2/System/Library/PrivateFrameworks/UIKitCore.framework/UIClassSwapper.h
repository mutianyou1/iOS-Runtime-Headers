/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIClassSwapper : NSObject {

	NSString* className;
	id object;

}
+(id)swapperForObject:(id)arg1 withClassName:(id)arg2 ;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)className;
-(id)performSelectorForObject:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4 withObject:(id)arg5 ;
-(id)initWithObject:(id)arg1 andClassName:(id)arg2 ;
@end

