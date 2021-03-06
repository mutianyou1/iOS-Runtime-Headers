/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AVTTransition.h>

@protocol AVTSectionItemTransitionModel;
@interface AVTSectionItemTransition : AVTTransition {

	id<AVTSectionItemTransitionModel> _sectionItemTransitionModel;

}

@property (nonatomic,readonly) id<AVTSectionItemTransitionModel> sectionItemTransitionModel;              //@synthesize sectionItemTransitionModel=_sectionItemTransitionModel - In the implementation block
-(id)model;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 setupHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 logger:(id)arg5 ;
-(id<AVTSectionItemTransitionModel>)sectionItemTransitionModel;
-(void)performTransition;
@end

