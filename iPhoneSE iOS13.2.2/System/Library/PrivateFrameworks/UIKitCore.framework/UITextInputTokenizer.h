/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputTokenizer <NSObject>
@required
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

@end
