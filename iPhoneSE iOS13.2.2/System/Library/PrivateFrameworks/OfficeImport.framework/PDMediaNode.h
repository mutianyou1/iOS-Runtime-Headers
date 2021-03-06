/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {

	PDAnimationTarget* mTarget;
	BOOL mIsMuted;
	BOOL mIsShowWhenStopped;
	long long mNumberOfSlides;
	long long mVolume;

}
-(id)init;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(long long)volume;
-(void)setVolume:(long long)arg1 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setIsShowWhenStopped:(BOOL)arg1 ;
-(void)setNumberOfSlides:(long long)arg1 ;
-(BOOL)isShowWhenStopped;
-(long long)numberOfSlides;
@end

